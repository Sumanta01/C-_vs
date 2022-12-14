# include<iostream>
using namespace std;
int glo=33;

void sum(){
	cout<<glo;
}
int main(){
	int glo=54;
	glo=7;
	sum();
	cout<<"\nThe value of glo is "<<glo;
}
