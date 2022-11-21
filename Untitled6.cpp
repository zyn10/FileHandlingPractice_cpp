#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream my_output_file;
my_output_file.open("myData2.txt");
if(!(my_output_file.is_open()))
{
cout << "File cannot open.";
return 0;
}
char ch=' ';
cout<<"Writing contents to file: \n";
while(ch!='.')
{
ch=getchar();
my_output_file << ch;
}
my_output_file.close();
system("myData2.txt");
return 0;
}
