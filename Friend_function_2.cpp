# include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
		void setData(int i){
			x=i;
		}
	friend	void max(A,B);
};
class B{
	int y;
	public:
		void setData(int i){
			y=i;
		}
		friend void max(A,B);
};
 void max(A a , B b){
	if(a.x>=b.y)
	std::cout<<a.x<<std::endl;
	
	else 
	std::cout<<b.y<<std::endl;
}
int main(){
	A a;
	B b;
	a.setData(33);
	b.setData(66);
	max(a,b);
	return 0;
}

