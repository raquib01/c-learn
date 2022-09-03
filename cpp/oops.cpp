#include<iostream>
using namespace std;

class Rectangle
{
	private: // can be access with in class & frnd func
		int x;
		int y;

	public: // can be access from anywhere
		int length;
		int breadth;
		static int n;

		Rectangle(){}; // default constructor
		Rectangle(int x_cord,int y_cord); // constructor
		~Rectangle(); // Destructor

		// method declaration(definition is outside)
		void set_x(int x_cord);
		int get_x();

		void set_y(int y_cord);
		int get_y();

		// method definition (inside class)
		void print_hi(){ // by default it becomes Inline func
			printf("Inline func: HI\n");
		}


	protected: // can be access with in class and derived class
		char color;
};

// static initializing
int Rectangle::n = 0;

// methods

void Rectangle::set_x(int x_cord){
	this->x = x_cord; // use of this pointer  to avoid confusion
}

void Rectangle::set_y(int y_cord){
	y = y_cord;
}

int Rectangle::get_x(){
	printf("x cord: %d\n",x);
	return x;
}

int Rectangle::get_y(){
	printf("y cord: %d\n",y);
	return y;
}

Rectangle::Rectangle(int x_cord, int y_cord){ // constructor(does not have return type & name is same as class)
	x = x_cord;
	y = y_cord;
	n++;
	cout<<"x is "<<x<<" and "<<"y is "<<y<<" n is "<<n<<endl;
}

Rectangle::~Rectangle(){ // Destructor(does not have return type & name is same as class(with tilde))
	printf("object goes out of scope or pointers gets deleted\n");
	// use for freeing space and closing files
	// no return type + no args
	}

int main(){
	Rectangle r1(6,7); // initializing
	// Rectangle r1 = Rectangle(6,7) // another way 
	// Rectangle r1; // can also initialize like this if no constructor / (constructor with no arg) is created
	
	// assigning using member operator
	r1.length = 10;
	r1.breadth = 2;

	// accessing using member operator
	cout<<"r1 length = "<<r1.length<<endl;
	cout<<"r1 breadth = "<<r1.breadth<<endl;

	// assigning using method
	r1.set_x(4);
	r1.set_y(8);

	// accessing using method
	r1.get_x();
	r1.get_y();

	// accessing inline method
	r1.print_hi();


}