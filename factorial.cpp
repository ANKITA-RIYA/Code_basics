 #include <iostream>
 #include <conio.h>
 using  namespace std ;
 
 class factorial
 {
 	private :
 		int n ;
 	
	public :
	   void getdata();	
	   void fact() ; 	
 };
 
 void factorial :: getdata()
 {
 	cout << "enter the number  " ;
 	cin >> n ;
 }
 
 void factorial :: fact()
 {
 	int f=1 ;
 	for (int i=n; i>=1; i--)
 	{
 		f = f* i ;
	 }
	 cout << "the factorial is  " << f ;
 }
 
 int main()
 {
 	factorial obj ;
 	obj.getdata() ;
 	obj.fact();
 	getch() ;
 	return 0 ;
 }
