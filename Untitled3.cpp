#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main ()
{

ifstream a;
a.open("D:/NU-Fall-19/PF/File Handling/zaintest2.txt");
//a.open("D:\NU-Fall-18\PF\zaintest2.txt");

if (!(a.is_open()))     // if (!a)
{
	cout<<"Can't openn";
	return 0;
}
string Name;
char ch;
while(!a.eof())
{
	
  getline(a,Name);
	//a>>ch;
	//a.get(ch);
//if(!a.eof())
	//cout<<ch;
       cout<<Name;    //cout<<ch;
}
return 0;
}
