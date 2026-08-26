#include <stdio.h>
#include <conio.h>
int main(void)
{
    int a,b,c;
    clrscr();
    printf("%s","\n "Enter first numbers: ");
    scanf("%d",&a);
    printf("%s","\n "Enter second numbers: ");
    scanf("%d",&b);
    c = a + b;
    printf("%s%d","\n "addition :",c);
    c = a - b;
    printf("%s%d","\n "subtraction :",c);
    c = a * b;
    printf("%s%d","\n "multiplication :",c);
    c = a / b;
    printf("%s%d","\n "division :",c);
    c = a % b;
    printf("%s%d","\n "remainder :",c);
    getch();
    return 0;
}
