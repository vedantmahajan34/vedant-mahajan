#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("1.pizza\n2.burger\n3.pasta\n4.french fries\n5.sandwich");
    printf("\ncode");
    int code;
    scanf("%d",&code);

    switch(code)
 {case 1 :
        printf("food item-pizza\nprice-Rs239");
        break;
    case 2:
        printf("food item-burger\nprice-Rs 129");
            break;
    case 3:
        printf("food item-pasta\nprice-Rs179");
        break;
    case 4:
        printf("food item-french fries\nprice-Rs99");
       break;
    case 5:
        printf("food item-sandwich\nprice-Rs 149");
        break;
    default:
        printf("invalid choice");}
    return 0;
}
