#include <stdio.h>

int main()
{
    //checking bit at ith position
    int n = 5; //101
    
    int i = 2; //checking at 2nd place i.e "1"01
    
    //left shifting 1 by 2spot i.e 100
    //& with n will give 0 if that spot is 0 and 2raise_to_i if that spot is 1
    if(n&(1<<i)){
        printf("It is 1\n");
    }
    else{
    printf("It is 0\n");
    }

    return 0;
}
