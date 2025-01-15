#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int left, int right) {
	int i;
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (i = left; i <= right; i++) {
            swap((str + left), (str + i)); 
            permute(str, left + 1, right);
            swap((str + left), (str + i)); 
        }
    }
}
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}
