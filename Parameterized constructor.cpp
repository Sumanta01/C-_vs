#include<iostream>
#include<math.h>
using namespace std;
class Point{
	int x,y;
	friend void distance(Point,Point);
	public:
		Point(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"The point is:("<<x<<","<<y<<")"<<endl;
		}
};
void distance(Point p1,Point p2){
	int x_dif=(p2.x-p1.x);
	int y_dif=(p2.y-p1.y);
	int diff=sqrt(pow(x_dif,2)+pow(y_dif,2));
	cout<<"The difference is :"<<diff<<endl;
}
int mian(){
	Point p(1,4);
	Point q(4,6);
	distance(p,q);
	return 0;
}
