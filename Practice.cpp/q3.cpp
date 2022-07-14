#include <iostream>
using namespace std;

void Multiplication(int B[4][6])
{
    int n1;
    cout<<"Enter the Values\n";
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<6;col++)
        {
            cin >> n1;
        	B[row][col]=n1;
        }
    }
    //printing Array
	cout<<"Displaying Elements of Array\n";
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<6;col++)
        {
            cout<<B[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<" After Multiplication: \n";
    for(int row=0;row<4;row++)
    {
        int mul=1;
        for(int col=0;col<6;col++)
        {
            mul=mul*(B[row][col]);
        }
        cout<<mul<<endl;
    }
}
int main()
{
    int A[4][6];
    Multiplication(A);

}