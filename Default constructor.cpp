#include<iostream>
using namespace std;
class Number{
  int n;
  public:
  	Number(){}
  	Number(int num){
  		n=num;
	  }
    void Display(){
  	cout<<"The number is :"<<n<<endl;
  }
};
int main(){
	Number a,b,c(66);
	c.Display();
	
return 0;
}
