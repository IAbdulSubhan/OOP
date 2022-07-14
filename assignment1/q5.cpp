#include <iostream>
using namespace std;

void Userftn(int myArr1[][100],int size)
{
    cout<<"Middle Row is: ";   // printing the mid row
  for (int i=0;i<size;i++)
  {
   for(int j=0;j<size;j++)
    {
    if (i== size/2)
    cout<<myArr1[i][j]<<" ";
    }
  
  
  }  
  cout<<"\nMiddle Column is:";    // printing the mid col
   for (int i=0;i<size;i++)
    {
         for(int j=0;j<size;j++)
    {
    if(j==size/2)
       cout<<myArr1[i][j]<<" ";
       }
    }
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
    Userftn(myArr1,size);
    return 0;
}