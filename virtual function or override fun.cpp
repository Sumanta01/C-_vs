#include<iostream>
using namespace std;
class base{
	public:
		 virtual void print(){
			cout<<"This is the base class print function "<<endl;
		}
		void display(){
			cout<<" This the base class display function "<<endl;
		}
};
class derived: public base{
	public:
		void print(){
			cout<<"This is the derived class print function "<<endl;
		}
		void display(){
			cout<<" This the derived class display function "<<endl;
		}
};
int main(){
	base *baseptr;
	derived d;
	baseptr=&d;
	baseptr -> print();
	baseptr -> display();
	return 0;
}
