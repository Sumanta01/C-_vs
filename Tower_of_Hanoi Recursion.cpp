#include<iostream>
using namespace std;
int Tower_of_Hanoi(char beg,char aux,char end,int n){
	if(n==1){
		cout<<"Move a disk from "<<beg<<" to "<<end<<endl;
	}
	else{
		  Tower_of_Hanoi(beg,end,aux,n-1);
		  cout<<"move a disk from "<<beg<<" to "<<end<<endl;
		  Tower_of_Hanoi(aux,beg,end,n-1);
	}
}
int main(){
	int n;
	char A,B,C;
	cout<<"How many disk in figure A: "<<endl;
	cin>>n;
	Tower_of_Hanoi('A','B','C',n);
	return 0;
	
}
