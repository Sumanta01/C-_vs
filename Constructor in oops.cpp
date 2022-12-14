#include<iostream>
using namespace std;
class Student{
	string name;
	public:
		int age;
		bool gender;
		Student(string s,int a,int b){
			cout<<"Parameterized constructor: "<<endl;
			name=s;
			age=a;
			gender=b;
		}//parameterized constructor
		Student(){
			cout<<"Default constructor: "<<endl;
		}//Default or No_arguement constructor
		
		Student(Student &st){
		cout<<"Copy constructor: "<<endl;
		  name=	st.name;
		  age=st.age;
		  gender=st.gender;
		}
		~Student(){
			cout<<"Destructor is called: "<<endl;
		}
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
	bool operator ==(Student &st){
		if(name==st.name&&age==st.age && gender==st.gender){
			return true;
		}
		return false;
	}
};
int main(){
	Student st("xyxy",22,0);
	//st.St_info();
	Student st2;
	Student st3=st;
	if(st2==st){
		cout<<"Same:"<<endl;
	}
	else{
		cout<<"Not same:"<<endl;
	}
}
