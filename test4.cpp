#include <iostream>
 using namespace std;



 int main()
  {
	
	int y=10;
	int *ptr;
	int*ptr2=&y;
	ptr=&y;
int b;
	cout<<y<<endl;  //10
	cout<<*ptr<<endl; //10
	cout<<*ptr2<<endl;
	cout<<&y<<endl;  // address of y
	cout<<ptr<<endl; /*address of y */
	cout<<ptr2<<endl;
	

	b =*ptr * *ptr2;
	
	cout<<b<<endl;
	cout<<&ptr<<endl;  //address of ptr
	cout<<&ptr2<<endl;
	
	
	
	
	
 } // end main

