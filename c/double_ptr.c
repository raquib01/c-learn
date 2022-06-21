#include<stdio.h>
int a = 5;
int b = 10;
void foo1(int *ptr){
    ptr = &b;   //hero local ptr is pointing to b
}
void foo2(int **ptr){
    *ptr = &b;  //here main::ptr is changing its point to b, by double referencing
}
int main(){
    int *ptr = &a; //here ptr is pointing to a
    foo1(ptr);
    printf("%d\n",*ptr); //here ptr will not point to b
    foo2(&ptr);
    printf("%d\n",*ptr); //now ptr will point to b
    return  0;
}