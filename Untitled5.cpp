#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream my_input_file;
my_input_file.open("myData.txt");
if(!(my_input_file.is_open()))
{
cout<<"File cannot be opened.";
return 0;
}
cout<<"File Contents: \n";
char ch;
while(!my_input_file.eof())
{
my_input_file.get(ch); // using get() function
cout << ch;
}
my_input_file.close();
return 0;

}

