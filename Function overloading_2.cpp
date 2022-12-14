#include<iostream>
using namespace std;
class Sumanta{
	public:
	void fun(){
		cout<<"Function with no arguement"<<endl;
	}
	void fun(int x){
		cout<<"Function with int arguement"<<endl;
	}
	void fun(double x ,float y){
		cout<<"Function with double and float arguement"<<endl;
	}
};
int main(){
	Sumanta s;
	s.fun();
	s.fun(767);
	s.fun(12.2,76.98);
}
