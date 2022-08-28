#include<iostream>
using namespace std;

class Student
{
	private:
		int roll;
		char initial;
	
	public:
		friend void callout(Student s1); // friend function
		Student(int,char);
};

Student::Student(int r, char i){
	roll = r;
	initial = i;
}


void callout(Student s1){
	cout<<"Your roll no is "<<s1.roll<<endl;
}

int main(){
	Student s1(31,'R');
	callout(s1);
	return 0;
}