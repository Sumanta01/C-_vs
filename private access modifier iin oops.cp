#include<iostream>
using namespace std;
class Student{
	string name;
	public:
		int age;
		bool gender;
		void setName(string s){
			name=s;
		}
		void getName(){
			cout<<name<<endl;
		}
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
		string s;
		cout<<"Name = ";
	    cin>>s;
	    arr[i].setName(s);
		cout<<"Age = ";
		cin>>arr[i].age;
		cout<<"Gender= ";
		cin>>arr[i].gender;
	}
	for(int i=0;i<3;i++){
		cout<<arr[i].St_info();
	}
	
}
