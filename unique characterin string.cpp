#include <iostream>
#include<string>
using namespace std;

int main() {
  string str ;
  cout<<"Enter the string"<<endl;
  getline(cin,str);
 
    for (int i = 0; i < str.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < str.size(); j++)
        {
            
            if (str[i] == str[j] and i != j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << str[i];
    }

    return 0;
}
