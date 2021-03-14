#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf("enter the percentage",m);
    scanf("%d",&m);
    if (m>85)
            printf("grade-A");
    if (m>70 && m<84)
            printf("grade-B");
    if (m>55 && m<69)
            printf("grade-C");
    if (m>40 && m<54)
            printf("grade-D");
    if (m<40)
        printf("grade-f");
}




