/*Given two arrays of integers A and B of sizes M and N respectively. Write a function named
MIX () which will produce a third array named C.
Such that the following sequence is followed.
All even numbers of A from left to right are copied into C from left to right.
All odd numbers of A from left to right are copied into C from right to left.
All even numbers of B from left to right are copied into C from left to right.
All old numbers of B from left to right are copied into C from right to left.
A, B and C are passed as arguments to MIX (). e.g., A is {3, 2, 1, 7, 6, 3} and B is {9, 3, 5, 6, 2,
8, 10} the resultant array C is {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}*/
#include <iostream>
using namespace std;

void Mix(int a[],int b[],int c[],int M,int N,int size)
{
    int val=0;
    for(int a=0;a<size;a++)
    {
        for(int i=0;i<M;i++)
        {
            if(a[i]%2==0)
            {
                c[a]=a[i]
            }
        }
        val++;
    }
    for(int a=0;a<size;a++)
    {
        if(a<val)
        continue;
        else
        {
            for(int i=0;i<M;i++)
            {
                if(a[i]%2==0)
                {
                    c[a]=a[i]
                }
            }
        }

    }
}
int main()
{
    int arr1[100],arr2[100],arr3[100],M,N,s3;
    cout<<"Enter size of array1 and 2:: ";
    cin >> M >> N;
    s3=M+N;
    for(int i=0;i<M;i++)
    {
        cin >> arr1[i];
    }
    for(int i=0;i<N;i++)
    {
        cin >> arr2[i];
    }

    // for(int a=0;a<s3;a++)
    // {
    //     for(int i=0;i<M;i++)
    // {
    //     if(arr1[i]%2==0)
    //     {
    //         arr3[a]=arr[i]
    //     }
    // }
    // for(int j=0;j<N;j++)
    //     {
    //         cin >> arr2[i]
    //     }
        
    // }

    Mix(arr1[],arr2[],arr3[],M,N,s3);
    for(int i=0;i<s3;i++)
    {
        cout<< arr3[i]<<" ";
    }
    return 0;
}