#include<iostream>
#include<fstream>
using namespace std;
int main ()
{


ofstream b;
b.open("zaintest2.txt");

if (!(b.is_open()))   //if(!b) 
{
	cout<<"Can't open";
	return 0;
}
char ch;
for(int i=1;i<=10;i++)   //while(ch!='.')   

{
	cin>>ch;   //   // ch=getchar();  // getline(cin,Name)  Name is string variable

	b<<ch;        // b<<Name;
	

}
b.close();
system("zaintest2.txt");
return 0;
}
