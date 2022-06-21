#include<stdio.h>
struct bitfield1{
    unsigned int member1:1; //1bit storage created
    unsigned int member2:3; //3bit storage created
    //storage will be allocate in table of 4 i.e 4byte/size of int
};

struct bitfield2{
    unsigned int member1:16;
    unsigned int member2:17;
    //here 4+4 8byte will get allocate i.e sizeof(int)*2
};
int main(){
  struct bitfield1 b1;
  struct bitfield2 b2;
  b1.member1 = 1; // you can only give 1 or 0 as value
  b1.member2 = 5; //you can only give 0,1,2,3,..7

  printf("size of struct 1 is %ld\n",sizeof(b1));
  printf("member 1 is %d\n",b1.member1);
  printf("member 2 is %d\n",b1.member2);

  printf("size of struct 2 is %ld\n",sizeof(b2));
return  0;
}