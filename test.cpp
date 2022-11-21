#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream  in;
    ofstream out;
    out.open("test.txt");
     
     if(!(out.is_open()))
     {
     	cout<<"Error";
     }
     char ch;
    for(int i=0;i<=5;i++)
    {
    	cin.get(ch);
    	out<<ch;
    	
    }
    
    out.close();
    
  return 0;
  
}
