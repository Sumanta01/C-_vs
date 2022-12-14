#include<iostream>
# include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxSum=INT_MIN;
	int cursum=0;
	for(int i=0;i<n;i++){
		cursum+=arr[i];
		if(cursum<0){
			cursum=0;
		}
		maxSum=(maxSum,cursum);
	}
	cout<<maxSum<<endl;
	return 0;
}
