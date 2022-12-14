# include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n],i,j,count;
	cout<<"Enter the array elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
	for(i=1;i<n;i++){
		count=arr[i];
		j=i-1;
		
	
	while(arr[j]>count && j>=0){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=count;
}
	cout<<"The array elements are: "<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
	
	
}
