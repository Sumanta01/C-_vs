#include <iostream>
using namespace std;
class Ans{
    public:

int getSmallestNumber(int n){
    int res=0;
    for(int i=2;i<10000;i++){
        if(getSum(n*i)==n){
            res=n*i;
            break;
        }
    }
    return res;
}
int getSum(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
};
int main() {
    int n;
    cin>>n;
    Ans a;
   cout<< a.getSmallestNumber(n);
    return 0;
}
