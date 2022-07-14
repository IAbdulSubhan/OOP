#include<iostream>
using namespace std;

void Mix(int A[],int B[],int C[],int soa,int sob,int soc)
{
    int a,b;
    a=1;       //here "a" is use to store even values in array C from left to right ,starting from first index of array C.
  b=soc;  //here "b" is use to store odd values in array C from right to left ,starting from last index of array C.
  cout<<"Now the array C is= "<<endl;
 for(int i=1;i<=soa;i++)
  {
       if(A[i]%2==0)
        {
         C[a]=A[i];
        a++;
        }
             else
             {
              C[b]=A[i];
              b--;
             }
    }
   
for(int i=1;i<=sob;i++)  // This loop is started right after where the last loop done its work.
  {
       if(B[i]%2==0)
        {
         C[a]=B[i];
        a++;
        }
             else
             {
              C[b]=B[i];
              b--;
             }
    }

for(int i=1;i<=soc;i++)  // This loop is for printing.
  {
  cout<<C[i]<<endl;

}
}
int main ()
{  
 int soa,sob,soc,a,b;   // Here "soa", "sob" & "soc" are the size of array.
 cout<< "Please Enter the Length Of array A: ";
 cin>>soa;
 cout<<endl;
 cout<< "Please Enter the Length Of array B: ";
 cin>>sob;
 int A[soa];     //Creating Array of the size of A.
 int B[sob];  //Creating Array of the size of B.
 soc=soa+sob; //Creating Array By Adding both size of A & B.
 int C[soc];
 cout<<endl<< "Please Enter the values in array A: ";
 cout<<endl;
 for(int i=1;i<=soa;i++)
  {
  cin>>A[i];    // Taking input in array A.
  
    }

 cout<<endl;
 cout<< "Please Enter the values in array B: ";
 cout<<endl;
 for(int i=1;i<=sob;i++)
  {
  cin>>B[i];   // Taking input in array B.

    }
  cout<<endl;
  
  

Mix(A,B,C,soa,sob,soc);
return 0;
}
