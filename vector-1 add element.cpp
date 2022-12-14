# include<iostream>
# include<vector>
using namespace std;
int display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>vect;
	int ele,size;
	cout<<"Enter the size of vector: "<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter the element you want to push back into vector "<<endl;
		cin>>ele;
		vect.push_back(ele);
	}
	display(vect);
	vector<int>::iterator iter =vect.begin();
	vect.insert(iter+1,500,222);
	display(vect);
	return 0;
}
