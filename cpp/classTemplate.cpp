#include<iostream>
using namespace std;
/*
for multiple param: template <class T1,class T2>
for derault data type: template <class T=int>
can also use in function
*/
// ------Mentos Zindagi------
template <class T>
class Arrr{
    public:
        T* ptr;
        int size;
        Arrr(int s){
            size = s;
            ptr = new T(size);
        }

        T calcSum(){
            T sum = 0;
            for(int i = 0; i<size; i++){
                sum += ptr[i];
            }
            return sum;
        }

};
// --------------------------

// ------Aaam Zindagi------
class Arr{
    public:
        int* ptr;
        int size;
        Arr(int s){
            size = s;
            ptr = new int(size);
        }

        int calcSum(){
            int sum = 0;
            for(int i = 0; i<size; i++){
                sum += ptr[i];
            }
            return sum;
        }

};
// ------------------------

int main(){
    // ------Aaam Zindagi------
    Arr a1(3);
    a1.ptr[0] = 11;
    a1.ptr[1] = 9;
    a1.ptr[2] = 3;

    cout<<a1.calcSum()<<endl;
    // ------------------------

    // ------Mentos Zindagi------
    Arrr<float> a2(3);
    a2.ptr[0] = 11.5;
    a2.ptr[1] = 9.5;
    a2.ptr[2] = 3.5;

    cout<<a2.calcSum()<<endl;
    // ------------------------
    return 0;

}
