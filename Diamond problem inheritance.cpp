#include<iostream>
using namespace std;
class A{
	public:
		void showA(){
			cout<<"A class function" <<endl;
		}
};
class B: virtual public A{
	public:
		void showB(){
			cout<<"B class function"<<endl;
		}
};
class C: virtual public A{
	public:
		void showC(){
			cout<<"C class function "<<endl;
		}
};
class D:public C,B{
	 public :
	 	void showD(){
	 		cout<<" D class function"<<endl;
		 }
};
int main(){
	A a;
	B b;
	C c;
	D d;
	d.showA();
	d.showB();
//	d.showC();
	d.showD();
	
	
	return 0;
}





