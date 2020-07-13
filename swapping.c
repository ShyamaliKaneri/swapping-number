#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter the values to be swapped: ");
    scanf("%d%d",&a,&b);
    printf("Values before swapping a = %d and b = %d", a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Values after swapping a = %d and b = %d", a,b);
}
