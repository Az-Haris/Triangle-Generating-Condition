#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int  a,b,c;
    printf("Enter 3 Arm of Triangle : ");
    scanf("%d%d%d", &a,&b,&c);
    if((a|b|c!=0)&&((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
        printf("This is Triangle");
    }
    else
    {
        printf("This is Not a Triangle");
    }

    getch();
    return 0;
}
