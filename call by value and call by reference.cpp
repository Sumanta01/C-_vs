# include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
void swap_pointer(int *a,int *b){ //call by reference using pointer
	int temp=*a;
	*a=*b;
	*b=temp;
}
 void swap_reference(int &x, int &y){//c++ reference similar as call by reference
 	int flag=x;
 	x=y;
 	y=flag;
	
}
int &ref_swap(int &p,int &q){
	int count=p;
	p=q;
	q=count;
	return p,q;
}
int main(){
	cout<<"The sum is: ";
	cout<< sum(34,55)<<endl;//call by value
	int a=7,b=9;
	cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
	swap_pointer(&a,&b);
	cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
	cout<<"============================================\n";
	int x=43,y=21;
	cout<<"The value of a is "<<x<<" The value of b is "<<y<<endl;
	swap_reference(x,y);
	cout<<"The value of a is "<<x<<" The value of b is "<<y<<endl;
	cout<<"============================================\n";
	int p=12,q=18;
	cout<<"The value of a is "<<p<<" The value of b is "<<q<<endl;
	ref_swap(p,q)=555;
	cout<<"The value of a is "<<p<<" The value of b is "<<q<<endl;
	ref_swap(p,q)=666;
	cout<<"The value of a is "<<p<<" The value of b is "<<q<<endl;
	return 0;
}
