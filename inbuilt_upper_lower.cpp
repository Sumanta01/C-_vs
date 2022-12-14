//using inbuilt function touppercase and loweercase string
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str1;
    cout<<"Enter the string: "<<endl;
    cin>>str1;
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<"The upper case of the string: "<<str1<<endl;
    string str2;
    cout<<"Enter the another string :"<<endl;
    cin>>str2;
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    cout<<"The lower case of the string :"<<str2<<endl;
    
    return 0;
}
