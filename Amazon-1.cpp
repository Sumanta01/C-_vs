#include<iostream>
# include"bits/stdc++.h"
# include<climits>
using namespace std;
int main(){
	//int n;
	//cin>>n;
	int arr[7]={1,5,3,4,3,5,6};
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	const int N=1e6+2;
	int idx[N];
	for(int i=0;i<N;i++){
		idx[i]=-1;
	}
	int minidx=INT_MAX;
	for(int i=0;i<7;i++){
		if(idx[arr[i]]!=1){
			minidx=min(minidx,idx[arr[i]]);
		}
		else{
			idx[arr[i]]=i;
		}
	}
	if(minidx==INT_MAX){
		cout<<"-1"<<endl;
	}
	else{
		cout<<minidx+1<<endl;
	}
	return 0;
}
