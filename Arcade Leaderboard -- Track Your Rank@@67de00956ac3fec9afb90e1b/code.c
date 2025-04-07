#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100

// Structure to store player data
struct Player {
    char name[50];
    int score;
};

// Function to sort players by score (descending)
void sortPlayers(struct Player players[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (players[j].score > players[i].score) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

// Function to display leaderboard
void displayLeaderboard(struct Player players[], int n) {
    printf("\n🏆 Arcade Leaderboard 🏆\n");
    printf("--------------------------\n");
    printf("Rank\tName\tScore\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t%s\t%d\n", i + 1, players[i].name, players[i].score);
    }
}

int main() {
    struct Player players[MAX_PLAYERS];
    int n;

    printf("Enter number of players: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Enter name of player %d: ", i + 1);
        scanf("%s", players[i].name);
        printf("Enter score of %s: ", players[i].name);
        scanf("%d", &players[i].score);
    }

    sortPlayers(players, n);
    displayLeaderboard(players, n);

    return 0;
}
