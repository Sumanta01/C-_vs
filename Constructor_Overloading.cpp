#include<iostream>
using namespace std;
class Complex{
	int x,y;
	public:
		Complex(int a,int b){
			x=a;
			y=b;
		}
		Complex(int a){
			x=a;
			y=0;
		}
		Complex(){
			x=0,y=0;
		}
		
		void PrintData(){
			cout<<"The number is:"<<x<<"+"<<y<<"i"<<endl;
		}
};
int main(){
	Complex c1(3,5);
	c1.PrintData();
	Complex c2(4);
	c2.PrintData();
	Complex c3;
	c3.PrintData();
	
	return 0;
	
}
