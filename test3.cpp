#include <iostream>
 using namespace std;



 int main()
  {
	int number = 5;
        int *ptr =&number;
        int *ptr2;
          ptr2=&number;
        cout<<*ptr<<endl;  //5
	cout<<*ptr2<<endl;  //5
	cout<<*ptr2 * *ptr<<endl;  // 25
	cout<<number<<endl;  //5
	cout<<&number<<endl;    //address
	cout<<ptr<<" "<<ptr2<<endl;
	cout<<&ptr<<" "<<&ptr2;
 } // end main

