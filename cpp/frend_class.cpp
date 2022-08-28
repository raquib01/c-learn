#include<iostream>
using namespace std;

class Student
{
	private:
		int roll;
		char initial;
	
	public:
		Student(int, char);
		friend class Assignment; // friend class
};

Student::Student(int r, char i){
	roll = r;
	initial = i;
}

class Assignment
{
	private:
		int asn_no;
		char s;

	public:
		Assignment(int,char);
		void callout(Student);
};

Assignment::Assignment(int a, char su){
	asn_no = a;
	s = su;
}

void Assignment::callout(Student s1){
	cout<<"s1 initial is :"<<s1.initial<<endl;
}

int main(){
	Student s1(31,'r');
	Assignment a1(1,'a');

	a1.callout(s1);
	return 0;
}