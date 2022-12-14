# include<iostream>
using namespace std;

class Employee{
	
private: int a,b,c;
public:int d,e;
	    void setData(int a1,int b1,int c1);
	    void getData(){
	    	cout<<"The value of a is: "<<a<<endl;
	    	cout<<"The value of b is: "<<b<<endl;
		    cout<<"The value of c is: "<<c<<endl;
		    cout<<"The value of d is: "<<d<<endl;
		    cout<<"The value of e is: "<<e<<endl;	
	}
};

 void Employee :: setData(int a1,int b1,int c1){
		a=a1;
		b=b1;
		c=c1;
	}
int main(){
	Employee E1;
	E1.d=66;
	E1.e=55;
	E1.setData(22,33,44);
	E1.getData();
	
	return 0;
	
}
