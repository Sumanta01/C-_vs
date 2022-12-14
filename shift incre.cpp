#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=10;
	int b,c;
	b=a++;
	c=a;
	cout<< a;
	cout<< b;
	cout<< c;
	cout<<a<<b<<c;
	return 0;
}
