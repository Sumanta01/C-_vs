#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i,num[1];
	num[0]=9;
	free(num);
	cout<<num[0];
	return 0;
}

