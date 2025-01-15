#include <stdio.h>
#include <string.h>
struct cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main() {
    struct cricket players[50];
    int n, i, j;
    char teams[5][50];
    int teamCount = 0;
    printf("Enter the number of players (up to 50): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]s", players[i].playerName);
        printf("Team Name: ");
        scanf(" %[^\n]s", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
        int found = 0;
        for (j = 0; j < teamCount; j++) {
            if (strcmp(teams[j], players[i].teamName) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(teams[teamCount], players[i].teamName);
            teamCount++;
        }
    }
    printf("\nTeam-wise Player List:\n");
    for (i = 0; i < teamCount; i++) {
        printf("\nTeam: %s\n", teams[i]);
        printf("Player Name\t\tBatting Average\n");
        printf("-----------------------------------------\n");
        for (j = 0; j < n; j++) {
            if (strcmp(players[j].teamName, teams[i]) == 0) {
                printf("%-20s\t%.2f\n", players[j].playerName, players[j].battingAverage);
            }
        }
    }
    return 0;
}
