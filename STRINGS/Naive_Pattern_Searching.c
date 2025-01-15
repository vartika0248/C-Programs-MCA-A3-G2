#include <stdio.h>
#include <string.h>
void patternSearch(char text[], char pattern[]) {
    int n = strlen(text);     
    int m = strlen(pattern);  
    int i;
    for (i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}
int main() {
    char text[] = "THIS IS A TEST TEXT";
    char pattern[] = "TEST";
    printf("Text: %s\n", text);
    printf("Pattern: %s\n", pattern);
    patternSearch(text, pattern);
    return 0;
}
