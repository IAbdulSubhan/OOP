#include <iostream>
using namespace std;

void myftn(int arr1[][100],int m,int n)
{
	int n1,sum=0;
	cout<<"Enter the Values\n";
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            cin >> n1;
        	arr1[row][col]=n1;
        }
    }
    //printing Array
	cout<<"Displaying Elements of Array\n";
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<arr1[row][col]<<" ";
        }
        cout<<endl;
    }
    //Sum of all elements of matrix of size m x n
    cout<<"Sum of all elements: ";
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            sum=sum+arr1[row][col];
        }
    }
    cout<<sum;
    //To display row-wise sum of matrix of size m x n
    cout<<"\nrow-wise sum: \n";
    for(int row=0;row<m;row++)
    {
        int sum=0;
        for(int col=0;col<n;col++)
        {
            sum=sum+arr1[row][col];
        }
        cout<<sum<<endl;
    }
    //To display column-wise sum of matrix of size m x n
    cout<<"column-wise sum\n";
    for(int col=0;col<n;col++)
    {
        int sum=0;
        for(int row=0;row<m;row++)
        {
            sum=sum+arr1[row][col];
        }
        cout<<sum<<"  ";
    }
    //To create transpose of matrix B of size n x m
    cout<<"\ntranspose of matrix\n";
    for(int col=0;col<n;col++)
    {
        for(int row=0;row<m;row++)
        {
            cout<<arr1[row][col]<<"  ";
        }
        cout<<endl;
    }

	
}
int main()
{
	int arr[100][100],m,n;
	cout<<"Enter first Rows then Columns\n";
	cin>>m>>n;
	myftn(arr,m,n);
    return 0;
}