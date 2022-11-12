#include<stdio.h>

int a = 5;
int main()
{
    int a = -3;
    {
        // Accessing global var
        extern int a;
        printf("%d",a);

    }
    return 0;
}
