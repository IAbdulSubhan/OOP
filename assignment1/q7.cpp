#include<iostream>
using namespace std;
int main()
{ 
	int multiply;
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
cout<<"enter metrix for y:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>y[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<y[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
cout<<"the multiplication of x and y  with order of N*L and L*M is"<<endl;
	for(int N=0;N<3;N++)
	{
		for(int M=0;M<3;M++)
		{
			multiply=0;
			for(int L=0;L<3;L++)
			multiply=multiply+x[N][L]*y[L][M];
			z[N][M]=multiply;
		}
	}
	for(int k=0;k<3;k++)
		{
			for(int l=0;l<3;l++)
			{
			cout<<z[k][l]<<"\t";
			}
			cout<<endl;
		}
	return 0;
}