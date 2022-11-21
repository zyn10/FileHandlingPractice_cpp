#include<iostream>
#include<fstream>

using namespace std;
void write();
void read();
int main ()
{

write();
read();
return 0;
}
void write()
{

ofstream WriteData;
WriteData.open("Zaintest.txt");
if(!WriteData)
{
	cout<<"not opening output file"<<endl;
	
}
char ch=' ';
while(ch!='.')
{
	ch=getchar();
	WriteData<<ch;
}
WriteData.close();
//system("Pause");
//system("Zaintest.txt");
}

void read ()
{

ifstream readData;
readData.open("Zaintest.txt");
if(!(readData.is_open()))
{
cout<<"File cannot open.";

}
cout<<"File Contents: \n";
char ch;
while(!readData.eof())
{
readData.get(ch); // using get() function
cout<<ch;
}
readData.close();
//system("Pause");
system("Zaintest.txt");
}
