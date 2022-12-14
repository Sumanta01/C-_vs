#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int Partition(int arr[],int l,int h){
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<h;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr,i,j);
		}
	}
		swap(arr,i+1,h);
		return i+1;
	
}
int Quicksort(int arr[],int l ,int h){
	if(l<h){
		int pivot=Partition(arr,l,h);
		Quicksort(arr,l,pivot-1);
		Quicksort(arr,pivot+1,h);
	}
}
int main(){
	int arr[]={12,3,44,4,21,7,17,1,8,18,65,56};
	int n= sizeof(arr)/sizeof(arr[0]);
	Quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
