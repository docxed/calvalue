#include <stdio.h>
#include <stdlib.h>

void compare(){
    printf("CALVALUE\n\n");
    printf("Compare the worthiness of products in different sizes, for example having to buy the same detergent pack When buying large packages, is it worth more than small packages?\n\n");

    //input section
    int amount;
    printf("Amount of products: ");
    scanf("%d", &amount);

    //size and price input
    printf("\nEnter size (gram/kilo/liter/...) and price (baht)\n\n");
    float products[amount], price[amount], result[amount];
    for(int i=0; i<amount; ++i){
        printf("%d. Size: ", i+1);
        scanf("%f", &products[i]);
        printf("  Price: ");
        scanf("%f", &price[i]);
        //optimize process
        result[i] = products[i]/price[i];
    }

    //find maximum of result
    float maxs = result[0];
    for(int i=1; i<amount; ++i){
        if(result[i] > maxs){
            maxs = result[i];
        }
    }

    //check found
    int amount_of_result=0;
    for(int i=0; i<amount; ++i){
        if(maxs == result[i]){
            ++amount_of_result;
        }
    }

    //output
    if(amount_of_result == amount){
        printf("All items are of equal value.\n");
    }else if(amount == 1){
        for(int i=0; i<amount; ++i){
            if(maxs == result[i]){
                printf("Type %d (size %.2f) has the most value.", i+1, products[i]);

                break;
            }
        }
    }

    return;
}

int main()
{
    int menu;
    printf("CALVALUE\n\n");
    printf("1. Compare the value of the product.\n");
    printf("0. Exit\n");
    printf("Enter number to continue\n");
    choose_menu:
    scanf("%d", &menu);
    if(menu == 0){
        exit(0);
    }else if(menu == 1){
        system("cls");
        compare();
    }else{
        printf("Please enter the correct number.\n");
        goto choose_menu;
    }
    return 0;
}
