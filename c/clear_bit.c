#include <stdio.h>

int main()
{
    //clearing bit at ith position
    int n = 5; //101
    
    int i = 0; //clearing at 0th place i.e 10"1"
    
    //left shifing 1 by ispot
    //taking 1's compliment
    //taking and with n will clear at ith position
    n = n & ~(1<<i);
    
    printf("Now n is %d\n",n);

    return 0;
}
