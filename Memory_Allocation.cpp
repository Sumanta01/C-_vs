# include<iostream>
using namespace std;
 class Shop{
 	int item_id[100];
 	int item_price[100];
 	int counter;
 	public:
 		void  initia_counter(void){
 			counter=0;
		 }
		 void setPrice(void);
		 void displayPrice(void);
 };
 void Shop::setPrice(void){
 	cout<<"Enter the item id of your item:"<<counter+1<<endl;
 	cin>>item_id[counter];
 	cout<<"Enter the price of your item :"<<endl;
 	cin>>item_price[counter];
 	counter++;
 	
 }
 void Shop::displayPrice(){
 	for(int i=0;i<counter;i++){
 		cout<<"The price of item with id :"<<item_id[i]<<" is :"<<item_price[i]<<endl;
	 }
 }
 int main(){
 	Shop s;
 	s.initia_counter();
 	s.setPrice();
 	s.setPrice();
 	s.setPrice();
 	s.displayPrice();
 	return 0;
 	
 }
 
