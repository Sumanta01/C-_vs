#include<iostream>
#include<vector>
using namespace std;
template <class T>
 int display(vector<T> &v){
 	cout<<"Displaying  thr vector: "<<endl;
 	for(int i=0;i<v.size();i++){
 		cout<<v[i]<<" ";
 		cout<<v.at(i)<<" ";
	 }
	 cout<<endl;
 }
int main(){
	vector<int>vect1(4);
	vect1.push_back(2);
	
	vector<char>vect4('r');
	display(vect1);
	display(vect4);
	
	return 0;
}
