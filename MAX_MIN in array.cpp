# include<iostream>
# include<climits>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n],i;
	cout<<"Enter the array elements :"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	 int maxNo=INT_MIN;
	 int minNo=INT_MAX;
	for(i=0;i<n;i++){
	    maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
  }
	cout<<"The max number in the array is : "<< maxNo<<endl;
	cout<<"The min number in the array is: "<<  minNo<<endl;
	return 0;
}

