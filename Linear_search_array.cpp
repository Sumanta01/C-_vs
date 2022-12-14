#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int item);
int main(){
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n],i,item;
	cout<<"Enter the array elements :"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the elements you want to search:"<<endl;
	cin>>item;
    cout<<linear_search(arr ,n, item);
	
	return 0;
}
int linear_search(int arr[],int n,int item){
	int i;
 cout<<"The elements "<<item<< " is find at the index of ";
	for(i=0;i<n;i++){
		if(arr[i]==item){
		
		 return i;
		}
	
	}
	return -1;
}




