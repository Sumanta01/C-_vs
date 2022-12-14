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
	int cursum[n+1];
	cursum[0]=0;
	for(int i=1;i<=n;i++){
	
	cursum[i]=cursum[i-1]+arr[i-1];
}   
	int maxSum=INT_MIN;
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<i;j++){
			sum=cursum[i]-cursum[j];
			maxSum=max(maxSum,sum);
		}
	}
	cout<<maxSum<<endl;
	return 0;
	
	
}
