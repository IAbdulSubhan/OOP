#include<iostream>
using namespace std;
int main()
{ 
	int x[3][3],y[3][3],z[3][3];
	cout<<"enter the metrix of x:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
cout<<endl<<endl;
cout<<"Upper half triangle "<<endl;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			if(i<j)
				cout<<x[i][j]<<"\t";
			else
				cout<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}