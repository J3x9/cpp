#include<iostream>
#include<string>
using namespace std; 
int main()
{
	int len,ele;
	
	system("cls");
	cout<<"Array length (Rows) = ";
	cin>>len;
	cout<<"Elements in each Row = ";
	cin>>ele;
	string x[len][ele];
	cin.ignore();
	for(int a=0;a<len;++a)
	{
		for(int b=0;b<ele;++b)
		{
		cout<<"you are putting in: "<<a<<" , "<<b<<" = ";
		getline(cin,x[a][b]);
		}
	}
	system("cls");
	cout<<"You entered this data";
	
	for(int c=0;c<len;++c)
	{
	 	cout<<endl;
		for(int d=0;d<ele;++d)
		{
		cout<<x[c][d]<<" ";
		}
	}
	return 0;
}