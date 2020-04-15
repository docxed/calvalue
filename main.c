#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void home(int direct){
    int menu;
    printf("\n0. Exit 1. Back 2. Menu\n");
    printf("Enter number to continue\n");
    choose_menu:
    scanf("%d", &menu);
    if(menu == 0){
        exit(0);
    }else if(menu == 1){
        if(direct == 1){
            system("cls");
            compare();
        }
    }else if(menu == 2){
        system("cls");
        main();
    }else{
        printf("Please enter the correct number.\n");
        goto choose_menu;
    }
}

void compare(){
    printf("\nCALVALUE\n\n");
    printf("Compare the worthiness of products in different sizes, for example having to buy the same detergent pack When buying large packages, is it worth more than small packages?\n\n");

    //input section
    int amount;
    printf("Amount of products: ");
    scanf("%d", &amount);

    //input size and price
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

    //check the most value by result
    int amount_of_result=0;
    for(int i=0; i<amount; ++i){
        if(maxs == result[i]){
            ++amount_of_result;
        }
    }

    //output 3 cases
    if(amount_of_result == amount){ //case all items are equal.
        printf("\nAll items are of equal value.\n");
    }else if(amount_of_result == 1){ //case 1 item is the most value.
        for(int i=0; i<amount; ++i){
            if(maxs == result[i]){
                printf("\nType %d (size %.2f) has the most value (gram/kilo/liter/...) per %.2f baht\n", i+1, products[i], result[i]);
                break;
            }
        }
    }else{ // case items are most value more than 1
        printf("\nProducts that are worthwhile are:\n");
        for(int i=0; i<amount; ++i){
            if(maxs == result[i])
            {
                printf("Type %d (size %.2f) (gram/kilo/liter/...) per %.2f baht.\n", i+1, products[i], result[i]);
            }
        }
    }

    //detail rate items
    if (amount_of_result < amount){
        printf("\nDetails:\n");
        float percent;
        for(int i=0; i<amount; ++i){
            if(maxs != result[i]){
                percent = fabs((maxs-result[i])/result[i]*100);
                printf("More value than type %d (size %.2f) %.2f%%\n", i+1, products[i], percent);
            }
        }
    }

    //homepage
    home(1);
    return;
}

void promotion(){
    printf("\nCALVALUE\n\n");

    //input section
    int amount;
    printf("Amount of promotion: ");
    scanf("%d", &amount);

    //input buy and get
    printf("\nEnter buy, get and prcie.\n\n");
    int buy[amount], get[amount];
    float price[amount], price_per_values[amount];
    for(int i=0; i<amount; ++i){
        printf("%d. Buy: ", i+1);
        scanf("%d", &buy[i]);
        printf("   Get: ");
        scanf("%d", &get[i]);
        printf("   Price: ");
        scanf("%f", &price[i]);
    }

    //input amount that you want
    printf("\nEnter amount that you want:\n");
    int want;
    scanf("%d", &want);

    //process to find price per item
    float times_use_promotion, remainder, pay;
    for(int i=0; i<amount; ++i){

        times_use_promotion = want/(buy[i]+get[i]); //times of using promotion
        remainder = want-(times_use_promotion)*(buy[i]+get[i]); //remainder of using promotion
        pay = (times_use_promotion*buy[i]*price[i])+(remainder*price[i]); //price to pay by promoted
        price_per_values[i] = pay/want; //price per item
        printf("%.2f\n", price_per_values[i]);

    }


    return;
}

int main()
{
    int menu;
    printf("\nCALVALUE\n\n");
    printf("1. Compare the value of the product.\n");
    printf("2. Compare promotion.\n");
    printf("0. Exit\n");
    printf("Enter number to continue\n");
    choose_menu:
    scanf("%d", &menu);
    if(menu == 0){ // exit
        exit(0);
    }else if(menu == 1){ // compare function
        system("cls");
        compare();
    }else if(menu == 2){ // compare function
        system("cls");
        promotion();
    }else{ // retry input
        printf("Please enter the correct number.\n");
        goto choose_menu;
    }
    return 0;
}
