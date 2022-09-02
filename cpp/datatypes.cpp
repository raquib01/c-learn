#include<iostream>
#include<string>
using namespace std;

int main(){
   // primitive data type
   
   int a = 5;
   float b = 3.4;
   double c = 3.8;
   char d = '@';
   bool e = true;
   bool f = false;

   // you can use data modifiers 
   short int si = 5;
   long int li = 34000;
   unsigned int ui = 4;
   signed int in = 5;

   
   // auto data type
   auto x = 5; // here x is an integer
   auto y = 3.4; // here y is double
   auto v = 5U; // here v is unsigned int
   auto w = 3.4L; // here y is long double
   auto z = 3.4F; // here z is float

    // derived data type
    int g[3] = {3,4,5}; // int array
    char h[3] = {'a','b','c'}; // char array
    char i[10] = "raquib"; //char array as string

    // string
    string j = "thsi is a string";


    //enum
    enum meal{breakfast,lunch,dinner};
    enum meal m1 = breakfast;
    cout<<"breakfast is at index"<<m1<<endl;

    // struct and union is same as in c

    return 0;
}