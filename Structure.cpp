# include<iostream>
#include<string.h>

using namespace std;
struct employee{
	int eid;
	char name[33];
	float salary;
};
union House{
	int rice;
	char Hname[44];
	float money;
};
int main(){
	struct  employee Sumanta;
	Sumanta.eid=8735354;
	strcpy(Sumanta.name,"Rockey");
	Sumanta.salary=15000;
	cout<<Sumanta.eid<<endl;
	cout<<Sumanta.name<<endl;
	cout<<Sumanta.salary<<endl;
	cout<<"=================================="<<endl;
	union House h;
	strcpy(h.Hname,"Swain Family");
	//h.rice=50;
	//h.money=64800;
	//cout<<h.money<<endl;
	//cout<<h.rice<<endl;
	cout<<h.Hname<<endl;
	cout<<"=========================="<<endl;
	enum Car{Audi,Bmw,Benz,Toyota,Tata};
	Car c=Toyota;
	cout<<(c==Toyota)<<endl;
	
	cout<<c<<endl;
//	cout<<Audi<<endl;
//	cout<<Bmw<<endl;
//	cout<<Benz<<endl;
//	cout<<Toyota<<endl;
//	cout<<Tata<<endl;
	
}
