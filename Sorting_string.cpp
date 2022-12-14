#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string: "<<endl;
	cin>>str;
	sort(str.begin(),str.end());
	cout<<"The sorting of the string :"<<str<<endl;
	return 0;
}
