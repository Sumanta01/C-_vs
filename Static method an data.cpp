# include<iostream>
using namespace std;
class Employee{
	int id;
	static int count;
	public:
		void setData(void){
			cout<<"Enter the employee id :"<<endl;
			cin>>id;
			count++;
		}
		
		void getData(void){
			cout<<"The id of the employee is "<< id<< " and employee number is :"<<count<<endl;
		}
};
int Employee :: count;
int main(){
	Employee Sumanta ,Rohan, Raz;
	Sumanta.setData();
	Sumanta.getData();
	
	Rohan.setData();
	Rohan.getData();
	
	Raz.setData();
	Raz.getData();
	return 0;
}
