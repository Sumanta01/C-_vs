# include<iostream>
using namespace std;
int sum(int a, int b){
	cout<<"2 Arguement function";
	return a+b;
}
int sum(int a, int b,int c){
	cout<<"3 Arguement function";
	return a+b+c;
}
int main(){
	cout<<"The sum of 5 and 8 is "<<sum(8,5)<<endl;
	cout<<"The sum of 4,5 and 8 is "<<sum(4,8,5)<<endl;
	return 0;
}
