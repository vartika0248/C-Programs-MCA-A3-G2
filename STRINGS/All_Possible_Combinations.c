#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generate(const char* digits, int index, char* current, char** result, int* count) {
    if (!digits[index]) {
        result[(*count)++] = strdup(current);
        return;
    }
    for (const char* c = mapping[digits[index] - '0']; *c; c++) {
        current[index] = *c;
        generate(digits, index + 1, current, result, count);
    }
}
char** letterCombinations(const char* digits, int* returnSize) {
	int i;
    if (!digits || !*digits) return *returnSize = 0, NULL;
    int len = strlen(digits), max = 1;
    for (i = 0; i < len; i++) max *= strlen(mapping[digits[i] - '0']);
    char** result = malloc(max * sizeof(char*));
    char* current = calloc(len + 1, sizeof(char));
    *returnSize = 0;
    generate(digits, 0, current, result, returnSize);
    free(current);
    return result;
}
int main() {
    char digits[] = "23";
    int returnSize = 0,i;
    char** combinations = letterCombinations(digits, &returnSize);
    printf("Output: [");
    for (i = 0; i < returnSize; i++) {
        printf("\"%s\"", combinations[i]);
        if (i < returnSize - 1) printf(", ");
        free(combinations[i]);
    }
    printf("]\n");
    free(combinations);
    return 0;
}
