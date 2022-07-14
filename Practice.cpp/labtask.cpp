#include <iostream>
using namespace std;


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
    //printing upper part of arrays
    int row=0;
    do
{   
    for(int row=0;row<size;row++)
{
    for(int col=0;col<size;col++)
    {   
        int num=col;
        while(num!=0)
        {
            continue;
            num--;
        }
        cout<<myArr1[row][col]<<" ";
    }
}
} while (row!=5);


    
    return 0;
}
