/*There's a staircase with N steps, and you can climb 1 or 2 steps at a time. Given N, write a function that 
returns the number of unique ways you can climb the staircase. The order of the steps matters (15 marks)

. For example, if N is 4, then there are 5 unique ways

2,1,1 1,2,1

1,1.2

2,2

What if, instead of being able to climb i or 2 steps at a time, you could climb any number from a set of positive 
integers X? For example, if X (1, 3, 5), you could climb 1,3, or 5 steps at a time Generalize your function to take in X*/
#include <iostream>
using namespace std;

int main()
{
    int N,M,arr[100];
    cout<<"Steps: ";
    cin >> N;
    M = N;
    while(M!=0)
    {
        cout<<"1 ";
        M=M-1;
    }
    M=N;
    for(int i=2;i<=N;i++)
    {
        M=N-2;
        //use here swaping and complete it
    }
    cout<<"N = "<<N<<endl;
    return 0;
}