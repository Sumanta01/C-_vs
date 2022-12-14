# include<iostream>
using namespace std;
int binary_search(int arr[], int n, int item ){
	cout<<"The element "<<item<<" is found at the index of " ;
	int beg=0;
	int end=n;
	while(beg<=end){
	    int mid=(beg+end)/2;
		if(arr[mid]==item){
			return mid;
		}
		else if(arr[mid]>item){
			end=mid-1;
		}
		else{
			beg= mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter the array size:"<<endl;
	cin>>n;
	int arr[n],i,item;
	cout<<"Enter the array elements: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search: "<<endl;
	cin>> item;
	cout<< binary_search(arr, n, item )<<endl;
	return 0;
	
}
