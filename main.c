#include <stdio.h>
#include <stdlib.h>

void compare(){
    printf("DEMO");
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
        compare();
    }else{
        printf("Please enter the correct number.\n");
        goto choose_menu;
    }
    return 0;
}
