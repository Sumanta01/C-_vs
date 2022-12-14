# include<iostream>
using namespace std;
int selection_sort(int arr[],int n){
  
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"After sorting the array elements are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array :"<<endl;
	cin>>n;
	int arr[n],i;
	cout<<"Enter the array elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
    selection_sort(arr,n);
    return 0;
	
}
