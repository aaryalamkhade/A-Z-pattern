#include<iostream>
using namespace std;

int main()
{  
 int n;
 cout<<"Enter the number of rows:";
 cin>>n;
 int k=1;
	for(char i=97;i<=97+n;i++)
	{
	   for(int j=0;j<k;j++)
	   {
	   	 cout<<i;
	   }
	   k++;
	   cout<<endl;
	}
}
