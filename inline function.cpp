# include<iostream>
using namespace std;
 inline int product(int a ,int b){

	return a*b;
}
float Money_Intst(int P_amount,float turm=1.04){
	return P_amount*turm;
}
int main(){
	int x,y;
	cout<<"Enter the value of the x and y:"<<endl;
	cin>>x>>y;
//	cout<<"The product of x and y is :"<<product(x,y)<<endl;
//	cout<<"The product of x and y is :"<<product(x,y)<<endl;
//	cout<<"The product of x and y is :"<<product(x,y)<<endl;
//	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	int money=50000;
	cout<<"If you have base balance is:"<<money<<" You will get "<<Money_Intst(money)<<endl;
    cout<<"If you have base balance is:"<<money<<" You will get "<<Money_Intst(money,5.11)<<endl;

return 0;
}
