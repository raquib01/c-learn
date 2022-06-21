#include <stdio.h>

int main()
{
    //setting bit at ith position
    int n = 5; //101
    
    int i = 1; //setting at 1st place i.e 1"0"1
    
    //left shifing 1 by ispot
    //taking or with n will set 1 at ith position
    n = n | (1<<i);
    
    printf("Now n is %d\n",n);

    return 0;
}
