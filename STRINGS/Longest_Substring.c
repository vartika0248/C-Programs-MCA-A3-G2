#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
	int i,end;
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int charIndex[256]; 
    for (i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }
    for (end = 0; end < n; end++) {
        if (charIndex[s[end]] >= start) {
            start = charIndex[s[end]] + 1;
        }
        charIndex[s[end]] = end;
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}
int main() {
    char s[1000]; 
    printf("Enter a string: ");
    scanf("%s", s); 
    int result = lengthOfLongestSubstring(s);
    printf("The length of the longest substring without repeating characters is: %d\n", result);
    return 0;
}
