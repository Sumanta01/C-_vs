#include<iostream>
using namespace std;
class Complex{
	private:
		int real,img;
    public:
    	Complex(int r=0,int i=0){
    		real=r;
    		img=i;
		}
	Complex operator + (Complex const &ob){
		Complex res;
		res.img=img+ob.img;
		res.real=real+ob.real;
		return res;
	}
	void display(){
	cout<<real<<" + i"<<img<<endl;
	}
};
int main(){
	Complex c1(23,44),c2(43,56);
	Complex c3=c1+c2;
	c3.display();
}
