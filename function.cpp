#include<iostream>
using namespace std;
  
  //type Function-name(Arguement)
  int display(int a,int b);//function prototype
 void nothing();
 int main(){
 	int num1,num2;//num1,num2 Actual parameter
 	cout<<"Enter the num1 value:"<<endl;
 	cin>>num1;
 	cout<<"Enter the num2 value:"<<endl;
 	cin>>num2;
 	cout<<"The final value is: "<<display(num1,num2)<<endl;
 	nothing();
 	return 0;
 }
 int display(int a,int b){//where a and b are formal parameter
 	int c=a/b+5;
  return c;
}
void nothing(){
	cout<<"Are you ok!"<<endl;
}
