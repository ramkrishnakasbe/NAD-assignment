//BISECTION METHOD
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
float f(float x){
	return (x*x-x-1);
	//calculates the value of function for given x.
}

void main(){
	clrscr();
	float a,b,m,e=0.0001;
	cout<<"enter a and b-:";
	cin>>a>>b;
	int i=1;
	float fa=f(a);
	float fb=f(b);
	if(fa*fb>0){
		cout<<"INTERVAL IS INVALID";
		getch();
	}else{
		m=(a+b)/2;
		float fm=f(m);
		if(fm>-0.0001 && fm<0.0001){
			cout<<"root is-:"<<m;
			getch();
		}else{
			while(fm>0.0001 || fm<-0.0001){
				cout<<"step-:"<<i<<"\ta-:"<<a<<"\tb-:"<<b<<"\tf(m)-:"<<fm<<"\tm-:"<<m<<endl;
				if(fa*fm>0){
				a=m;
				}else{
					b=m;
				}
				m=(a+b)/2;
				fm=f(m);
				i++;
			}
		}
		cout<<"step-:"<<i<<"\ta-:"<<a<<"\tb-:"<<b<<"\tf(m)-:"<<fm<<"\tm-:"<<m<<endl;
		cout<<"root is-:"<<m;
	}
	 getch();
}
