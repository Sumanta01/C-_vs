#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
		Complex();
			
		
    void PrintData(){
    	cout<<"The number is :"<<a<<"+"<<b<<"i"<<endl;
	}
	
};
 Complex::Complex(){
	a=10;
	b=3;
	
}
int main(){
	Complex c,c2,c3;
	c.PrintData();
	c2.PrintData();
	c3.PrintData();
}
