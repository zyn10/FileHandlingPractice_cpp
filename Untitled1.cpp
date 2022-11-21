#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	
ifstream a; //fstream a;
ofstream b;  //fstream b;
string name;
int salary;
a.open("employeein.txt");
b.open("employeeout.txt");
if(!a)  //(!a.is_open())
{
cout<<"Can't open input file"<<endl;
return 0;
}
if(!b)
{
cout<<"Can't open Output file"<<endl;
return 0;
}
b<<"Name"<<"\t"<<"Salary"<<endl;

while(!(a.eof()))  //while(a>>name>>salary)
{
a>>name;
	a>>salary;
if(!(a.eof()))
{
	
b<<name<<"\t"<<salary+2000<<endl;
}

}

a.close();
b.close();
system("Pause");
system("employeeout.txt");
return 0;
}

