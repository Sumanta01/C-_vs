#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int age;
	bool gender;
	int St_info(){
		cout<<"Name = ";
		cout<<name<<endl;
		cout<<"Age = ";
		cout<<age<<endl;
		cout<<"Gender = ";
		cout<<gender<<endl;
	}
	
};
int main(){
	Student arr[3];
	for(int i=0;i<3;i++){
		cout<<"Name = ";
		cin>>arr[i].name;
		cout<<"Age = ";
		cin>>arr[i].age;
		cout<<"Gender= ";
		cin>>arr[i].gender;
		
	}
	for(int i=0;i<3;i++){
		arr[i].St_info();
	}
	
}
