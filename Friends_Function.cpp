# include<iostream>
using namespace std;
class complex;
class Calculator{
	public:
		int add(int a,int b){
			return (a+b);
		
		}
		int SumRealcomplex(complex,complex);
	};
	class complex{
        int a,b;
		friend int Calculator:: SumRealcomplex(complex,complex);
		public:
			void SetNumber(int n1,int n2){
				a=n1;
				b=n2;
			}
			void printNumber(){
				cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
			}
		};
		int Calculator::  SumRealcomplex(complex o1,complex o2){
			return (o1.a+o2.b);
		}
		int main(){
			complex o1,o2;
			o1.SetNumber(1,2);
			o2.SetNumber(8,5);
			Calculator calc;
			int next=calc.SumRealcomplex(o1,o2);
			cout<<"The sum of real part of o1 and o2 is "<<next<<endl;
			return 0;
		}

