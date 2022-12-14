# include<iostream>
using namespace std;
int main(){
int arr[100],i,j ,temp,n;
cout<<"Enter the size of the array:"<<endl;
cin>>n;
cout<<"Enter the array elements:"<<endl;
 for(i=0;i<=n;i++){
   cin>>arr[i];
 }
 for(i=0;i<n;i++){
 	for(j=i+1;j<=n;j++){
 		if(arr[i]<arr[j]){
 			temp=arr[i];
 			arr[i]=arr[j];
 			arr[j]=temp;
		 }
	 }
 }
 cout<<"The second largest element in the array is :"<<arr[1]<<endl;
 return 0;
}
