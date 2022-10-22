#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std ;

class quadratic_equation
{
	float a, b , c ,x ,root1 , root2;
	public : 
	  void getdata() ;
	  void find_root();
} ;

void quadratic_equation :: getdata()
{
	cout << "enter the coeffiecients \n" ;
	cin >> a >> b >> c ;
}


void quadratic_equation :: find_root()
{
	float real , img ;
	x= (b*b)-(4*a*c) ;
	if (x >0)
	{
		root1 =  (-b+sqrt(x))/(2*a) ;
		root2 =  (-b-sqrt(x))/(2*a) ;
		cout << "root1 = " <<root1 << "\nroot2 = " << root2 ;
		
	}
	else if(x==0)
	{
		root1=root2= -b/(2*a) ;
		cout << "root1 = " <<root1 << "\nroot2 = " << root2 ;
	}
	else 
	{
		real = -b/(2*a) ;
		img = sqrt(-x)/(2*a) ;
		cout << "root1 = " <<real<<" + "<<img<<"i" ;
		cout << "\nroot2 = " <<real<<" + "<<img<<"i" ;
	}
}

int main()
{
	quadratic_equation obj ;
	obj.getdata();
	obj.find_root();
	getch();
	return 0 ;
}
