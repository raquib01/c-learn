#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int result;
    int (*ptr)(int,int) = &sum;

    result = ptr(5,6);
    printf("%d\n",result);


}