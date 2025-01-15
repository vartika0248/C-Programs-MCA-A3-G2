#include <stdio.h>
union Data {
    unsigned int value; 
    unsigned char bytes[4];  
};
int main() {
    union Data data;
    unsigned int input;
    int i;
    printf("Enter a hexadecimal unsigned integer (e.g., 0x12345678): ");
    scanf("%x", &input);
    data.value = input;
    printf("The individual bytes are:\n");
    for (i = 0; i < 4; i++) {
        printf("Byte %d: 0x%02X\n", i, data.bytes[i]);
    }
    return 0;
}
