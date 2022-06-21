#include<stdio.h>
#include<stdlib.h>
int comparator(const void *a, const void *b){
    int x = *((int*)a);
    int y = *((int*)b);
    return x-y;
/*  use to determine which element should come first
    if >0 : b,a
    if <0 : a,b
    if ==0: a and b is equal
    especially use for custom data types
*/
}
int main(){
    int arr[5] = {5,4,3,2,1};
    // qsort(pointer,sizeof-arr,sizeof-dtatype,comparator-func)
    qsort(arr,5,sizeof(int),comparator);
    for(int i = 0; i<5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}