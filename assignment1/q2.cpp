#include <iostream>
using namespace std;
void daigonalarray(int a[][100],int n)
{   int ldig=0,rdig=0;
    cout<<"Your Left Digonals Sum = : ";
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if (i==j)
            {
                ldig=ldig+(a[i][j]);
            }
    cout<<ldig;
    cout<<"\nYour Right Digonals Sum = : ";
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==n-(j+1))
            {
                rdig=rdig+(a[i][j]);
            } 
    cout<<rdig;
} 

int main()
{
    int myArr1[100][100],n1,size;
    cout<<"Enter Size: ";
    cin >> size;
    //for 1st array
    cout<<"Enter the Values\n";
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cin >> n1;
            myArr1[row][col]=n1;
        }
    }
    //printing Array
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cout<<myArr1[row][col]<<" ";
        }
        cout<<endl;
    }
    daigonalarray(myArr1,size);
    return 0;
}