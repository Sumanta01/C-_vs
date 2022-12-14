#include<iostream>
using namespace std;
class Answer{
	public:
	int cnt(int x ){
		int sum=0;
		while(x){
			sum+=(x%10);
			x/=10;
		}
		return sum;
	}
	int countEven(int n){
		int ans=0;
		for(int i=2;i<=n;i++){
			if(cnt(i)%2==0)
			    ans++;
		}
		return ans;
		
	}
};
int main(){
	int n;
	cin>>n;
	Answer a;
	cout<<a.countEven(n);
	
	
	
	return 0;
	
}
