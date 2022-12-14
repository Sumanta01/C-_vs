# include<iostream>
using namespace std;
int product(int a ,int b){
	static int c=0;
	c+=1;
	return a*b+c;
}
int main(){
	int x,y;
	cout<<"Enter the value of the x and y:"<<endl;
	cin>>x>>y;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;
	cout<<"The product of x and y is :"<<product(x,y)<<endl;

return 0;
}
