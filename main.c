#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Enter Three Arm of Triangle : ");
    scanf("%d%d%d", &a,&b,&c);
    (a|b|c)!=0&&(a+b)>c&&(a+c)>b&&(b+c)>a ? printf("Triangle") : printf("Not Triangle");
    getch();
    return 0;
}
