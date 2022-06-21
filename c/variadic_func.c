#include<stdio.h>
#include<stdarg.h>
int sum(int a, int b,...){
    //returns sum of all arguments where first 2 arg is fixed

    va_list parg; //makes a pointer for args pointing
    va_start(parg,b); //initialising pointer to last fixed argument
    int sum = a + b;
    //accessing the third argument
    sum+=va_arg(parg,int);

    //accessing fourth argument
    sum+=va_arg(parg,int);

    va_end(parg);
    return sum;
}
int main(){
    printf("sum of 1,2,3,4 is %d\n",sum(1,2,3,4));
    return  0;
}