#include <iostream>
using namespace std;

int main()
{
    int myArr1[100][100],myArr2[100][100],sumArr[100][100],n1,n2,size;
    cout<<"Enter Size: ";
    cin >> size;
    //for 1st array
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cin >> n1;
            myArr1[row][col]=n1;
        }
    }
    //for 2nd array
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cin >> n2;
            myArr2[row][col]=n2;
        }
    }
    //Calaculating Sum
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            sumArr[row][col]=myArr1[row][col]+myArr2[row][col];
        }
    }
    cout<<"Array1 \n";
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cout<<myArr1[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array2  \n";
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cout<<myArr2[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of two Arrays is \n";
    for(int row=0;row<size;row++)
    {
        for(int col=0;col<size;col++)
        {
            cout<<sumArr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}