# include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=2;
	int pd= arr[1]-arr[0];
	int cur=2;
	//int j=2;
	for(int j=2;j<n;j++){
	while(j<n){
		if(pd==arr[j]-arr[j-1]){
			cur++;
		}
		else{
			if(pd=arr[j]-arr[j-1])
			cur=2;
		}
		ans=max(ans,cur);
		j++;
	}
	
	cout<<ans<<" ";
}
	return 0;
}
