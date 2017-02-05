//NEWTON RAPHSON METHOD
#include<iostream.h>
#include<conio.h>
#include<math.h>

float f(float x){
	return (x*x - x-1);
	//calculates and returns the value of function for given x
}
float diff(float x){
	return (2*x-1);
	//calculates and return the value of function(differentiation of above function)

}

void main(){
	clrscr();
	float a,m;
	cout<<"enter the value of a-:";
	cin>>a;
	float fa=f(a);
	float f_a=diff(a);
	m=a-(fa/f_a);
	float fm=f(m);
	int i=1;
	if(fm>=-0.0001 && fm<=0.0001){
	   cout<<"root is-:"<<m;
	   getch();
	}
	else{
		while(fm<-0.0001 || fm>0.0001){
			cout<<"step-:"<<i<<"\tf(m)-:"<<fm<<"\tm-:"<<m<<endl;
			a=m;
			fa=f(a);
			f_a=diff(a);
			m=a-(fa/f_a);
			fm=f(m);
			i++;
		}
	}
	cout<<"step-:"<<i<<"\tf(m)-:"<<fm<<"\tm-:"<<m<<endl;
	cout<<"root is-:"<<m;
	getch();
}
