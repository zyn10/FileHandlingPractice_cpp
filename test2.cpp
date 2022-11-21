  #include <iostream>
 using namespace std;

 void cubeByReference( int *); // prototype

 int main()
  {
	int number = 5;

	cout << "The original value of number is " << number;

	cubeByReference( &number ); // pass number address to cubeByReference
	cout << "\nThe new value of number is " << number << endl;
 } // end main

 // calculate the cube of *nPtr; modifies the variable in main
void cubeByReference( int *nPtr )
 {
	 *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
 }

