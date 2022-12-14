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
//Calculate the volume of cylinder
 float volume(double r, double h){
 	return 3.14*r*r*h;
 }
 // Calculate the volume of cube
 float volume(float a){
 	return a*a*a;
 }
 //Calculate the volume of rectangular box
 float volume(int l,int b,int h){
 	return l*b*h;
 }
int main(){
	cout<<"The sum of 5 and 8 is :"<<sum(8,5)<<endl;
	cout<<"The sum of 4,5 and 8 is :"<<sum(4,5,5)<<endl;
	cout<<"The volume of Cylinder of 3,7 is: "<<volume(3,7)<<endl;
	cout<<"The volume of Rectangular box of 4,6,8 is: "<<volume(4,6,8)<<endl;
	cout<<"The volume of Cube of 7 is: "<<volume(7)<<endl;
	return 0;
}
