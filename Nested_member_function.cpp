# include<iostream>
# include<string.h>
using namespace std;
class Binary{
	string s;
	public:
	void read(void);
	void check_Binary(void);
	void ones_complement(void);
	void Display(void);
	
};
void Binary :: read(void){
	cout<<"Enter the binary number:"<<endl;
	cin>>s;
	
}
void Binary :: check_Binary(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0'&& s.at(i)!='1'){
			cout<<"Incoreect Binary number format:"<<endl;
			exit(0);
		}
	}
}
void Binary :: ones_complement(void){
   cout<<"The ones complement is : ";

	 for( int i=0;i<s.length();i++){
	 	if(s.at(i)=='0'){
	 		 s.at(i)='1';
		 }
	 	else{
	 		s.at(i)='0';
		 }
		cout<<s.at(i);
	 }
	  
}
 void Binary :: Display(void){
 	cout<<"Displaying the binary number is :";
 	for(int i=0;i<s.length();i++){
 		cout<<s.at(i);
	 }
	 cout<<endl;
 }
 int main(){
 	Binary B;
 	B.read();
 	B.check_Binary();
 	B.Display();
 	B.ones_complement();
 	
 	return 0;
 
 }
	

