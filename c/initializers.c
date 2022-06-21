#include <stdio.h>
struct test{
    int x;
    int y;
    int z;
};
int main()
{
    //Array Initializers
    int arr[10] = {12,5,[2]=567,[4]=90,[5 ... 9]=786};
    for(int i = 0; i<10;i++){
        printf(" the %dth element is %d\n",i,arr[i]);
    }

    //Struct Initializers
    struct test t1 = {1,2,3};
    struct test t2 = {y:2,x:1,z:3};
    printf("x=%d y=%d z=%d\n",t1.x,t1.y,t1.z);
    printf("x=%d y=%d z=%d\n",t2.x,t2.y,t2.z);
    return 0;
}