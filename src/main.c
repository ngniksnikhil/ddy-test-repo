#include<stdio.h>
extern int add(int a, int b);
void main()
{
    printf("\nEntering Main");

    printf("\n10 + 20 = %d",add(10,20));

    printf("\nExiting Main");
}
