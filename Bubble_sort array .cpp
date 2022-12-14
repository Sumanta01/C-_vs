# include<iostream>
using namespace std;
int Bubble_sort(int arr[],int n){
	int i,j,flag=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			flag=1;
		   }
		}
		if(flag==0)
		 break;
	}
	cout<<"After sorting the array elements are:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n],i;
	cout<<"Enter the array elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
     Bubble_sort(arr,n);
	
	
	return 0;
	
	
}
