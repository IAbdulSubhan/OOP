/*1. Write a menu driven C++ program to do following operation on two dimensional array A of size m x n.
You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:
To input elements into matrix of size m x n
To display elements of matrix of size m x n
Sum of all elements of matrix of size m x n
To display row-wise sum of matrix of size m x n
To display column-wise sum of matrix of size m x n
To create transpose of matrix B of size n x m*/
// #include <iostream>
// using namespace std;

// void myftn(int arr1[][100],int m,int n)
// {
// 	int n1,sum=0;
// 	cout<<"Enter the Values\n";
//     for(int row=0;row<m;row++)
//     {
//         for(int col=0;col<n;col++)
//         {
//             cin >> n1;
//         	arr1[row][col]=n1;
//         }
//     }
//     //printing Array
// 	cout<<"Displaying Elements of Array\n";
//     for(int row=0;row<m;row++)
//     {
//         for(int col=0;col<n;col++)
//         {
//             cout<<arr1[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     //Sum of all elements of matrix of size m x n
//     cout<<"Sum of all elements: ";
//     for(int row=0;row<m;row++)
//     {
//         for(int col=0;col<n;col++)
//         {
//             sum=sum+arr1[row][col];
//         }
//     }
//     cout<<sum;
//     //To display row-wise sum of matrix of size m x n
//     cout<<"\nrow-wise sum: \n";
//     for(int row=0;row<m;row++)
//     {
//         int sum=0;
//         for(int col=0;col<n;col++)
//         {
//             sum=sum+arr1[row][col];
//         }
//         cout<<sum<<endl;
//     }
//     //To display column-wise sum of matrix of size m x n
//     cout<<"column-wise sum\n";
//     for(int col=0;col<n;col++)
//     {
//         int sum=0;
//         for(int row=0;row<m;row++)
//         {
//             sum=sum+arr1[row][col];
//         }
//         cout<<sum<<"  ";
//     }
//     //To create transpose of matrix B of size n x m
//     cout<<"\ntranspose of matrix\n";
//     for(int col=0;col<n;col++)
//     {
//         for(int row=0;row<m;row++)
//         {
//             cout<<arr1[row][col]<<"  ";
//         }
//         cout<<endl;
//     }

	
// }
// int main()
// {
// 	int arr[100][100],m,n;
// 	cout<<"Enter first Rows then Columns\n";
// 	cin>>m>>n;
// 	myftn(arr,m,n);
//     return 0;
// }
//--------------------------------------------------
/*2.  Write user defined functions for square matrix to calculate
Left diagonal sum
Right diagonal sum*/
// #include <iostream>
// using namespace std;
// void daigonalarray(int a[][100],int n)
// {   int ldig=0,rdig=0;
//     cout<<"Your Left Digonals Sum = : ";
//     for (int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             if (i==j)
//             {
//                 ldig=ldig+(a[i][j]);
//             }
//     cout<<ldig;
//     cout<<"\nYour Right Digonals Sum = : ";
//     for (int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             if(i==n-(j+1))
//             {
//                 rdig=rdig+(a[i][j]);
//             } 
//     cout<<rdig;
// } 

// int main()
// {
//     int myArr1[100][100],n1,size;
//     cout<<"Enter Size: ";
//     cin >> size;
//     //for 1st array
//     cout<<"Enter the Values\n";
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cin >> n1;
//             myArr1[row][col]=n1;
//         }
//     }
//     //printing Array
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cout<<myArr1[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     daigonalarray(myArr1,size);
//     return 0;
// }
//------------------------------------------------------------------------------------------
/*3. Write a user-defined function in C++ to display the multiplication of row element of two-dimensional 
array A[4][6] containing integer.*/
// #include <iostream>
// using namespace std;

// void Multiplication(int B[4][6])
// {
//     int n1;
//     cout<<"Enter the Values\n";
//     for(int row=0;row<4;row++)
//     {
//         for(int col=0;col<6;col++)
//         {
//             cin >> n1;
//         	B[row][col]=n1;
//         }
//     }
//     //printing Array
// 	cout<<"Displaying Elements of Array\n";
//     for(int row=0;row<4;row++)
//     {
//         for(int col=0;col<6;col++)
//         {
//             cout<<B[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<" After Multiplication: \n";
//     for(int row=0;row<4;row++)
//     {
//         int mul=1;
//         for(int col=0;col<6;col++)
//         {
//             mul=mul*(B[row][col]);
//         }
//         cout<<mul<<endl;
//     }
// }
// int main()
// {
//     int A[4][6];
//     Multiplication(A);

// }

//-------------------------------------------------------------------------------------
// /*6. Write a program to add two array A and B of size m x n.*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int myArr1[100][100],myArr2[100][100],sumArr[100][100],n1,n2,size;
//     cout<<"Enter Size: ";
//     cin >> size;
//     //for 1st array
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cin >> n1;
//             myArr1[row][col]=n1;
//         }
//     }
//     //for 2nd array
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cin >> n2;
//             myArr2[row][col]=n2;
//         }
//     }
//     //Calaculating Sum
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             sumArr[row][col]=myArr1[row][col]+myArr2[row][col];
//         }
//     }
//     cout<<"Array1 \n";
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cout<<myArr1[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Array2  \n";
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cout<<myArr2[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Sum of two Arrays is \n";
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cout<<sumArr[row][col]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//-------------------------------------------------------------------------------------
/*7. Write a program to multiply array A and B of order NxL and LxM*/
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
//----------------------------------------------------------------------------------------------------------------
/*5. Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row 
and the elements of middle column.*/
// #include <iostream>
// using namespace std;

// void Userftn(int myArr1[][100],int size)
// {
//     cout<<"Middle Row is: ";   // printing the mid row
//   for (int i=0;i<size;i++)
//   {
//    for(int j=0;j<size;j++)
//     {
//     if (i== size/2)
//     cout<<myArr1[i][j]<<" ";
//     }
  
  
//   }  
//   cout<<"\nMiddle Column is:";    // printing the mid col
//    for (int i=0;i<size;i++)
//     {
//          for(int j=0;j<size;j++)
//     {
//     if(j==size/2)
//        cout<<myArr1[i][j]<<" ";
//        }
//     }
// }
// int main()
// {
//     int myArr1[100][100],n1,size;
//     cout<<"Enter Size: ";
//     cin >> size;
//     //for 1st array
//     cout<<"Enter the Values\n";
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cin >> n1;
//             myArr1[row][col]=n1;
//         }
//     }
//     //printing Array
//     for(int row=0;row<size;row++)
//     {
//         for(int col=0;col<size;col++)
//         {
//             cout<<myArr1[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     Userftn(myArr1,size);
//     return 0;
// }
//-------------------------------------------------------------------------------------------
