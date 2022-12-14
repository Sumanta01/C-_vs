#include<iostream>
using namespace std;
int location_first(int arr[],int n,int i, int item){
	if(i==n){
		return -1;
	}

	if(arr[i]==item){
		return i;
		
	}
	return location_first(arr,n,i+1,item);
}
int location_last(int arr[],int n,int i ,int item){
	int array_last=location_last(arr,n,i+1,item);
	if(array_last!=-1){
		return array_last;
	}
	if(arr[i]==item){
		return i;
	}
	return -1;
	
}
int main(){
	int arr[]={1,2,5,4,2,9,8,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<location_first(arr,n,0,2)<<endl;
	location_last(arr,n,0,2);
	
	return 0;
}
