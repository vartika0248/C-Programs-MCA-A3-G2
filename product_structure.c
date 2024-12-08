#include <stdio.h>
struct Price {
    float costPrice;
    float sellingPrice;
};
struct Product {
    int id;
    char name[50];
    struct Price price;  
};
float calculateProfitMargin(struct Price price) {
    if (price.costPrice == 0) {
        return 0;  // Avoid division by zero
    }
    return ((price.sellingPrice - price.costPrice) / price.costPrice) * 100;
}

int main() {
    int n,i;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    struct Product products[n]; 
    for (i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].id);
        printf("Product Name: ");
        getchar(); 
        fgets(products[i].name, sizeof(products[i].name), stdin); 
        products[i].name[strcspn(products[i].name, "\n")] = '\0'; 
        printf("Cost Price: ");
        scanf("%f", &products[i].price.costPrice);
        printf("Selling Price: ");
        scanf("%f", &products[i].price.sellingPrice);
    }
    printf("\nProducts with a profit margin greater than 10%%:\n");
    for (i = 0; i < n; i++) {
        float profitMargin = calculateProfitMargin(products[i].price);
        if (profitMargin > 10) {
            printf("\nProduct ID: %d\n", products[i].id);
            printf("Product Name: %s\n", products[i].name);
            printf("Cost Price: %.2f\n", products[i].price.costPrice);
            printf("Selling Price: %.2f\n", products[i].price.sellingPrice);
            printf("Profit Margin: %.2f%%\n", profitMargin);
        }
    }
    return 0;
}

