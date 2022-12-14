#include<iostream>
using namespace std;
int main(){
  int a=12,b=54;
  //a^=b^=a^=b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<a<<"\n"<<b<<endl;
 
  return 0;
}
