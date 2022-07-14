/*Q No. 1: Write a C++ program that will find maximum and minimum number in 2D array. Take number
from user at run time (Initialize array by taking values from user).
Output should be like that:
Array values are:
28 33 38
1 48 12
44 27 10
Maximum Number is= 48
Minimum Number is= 1*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int max=0,min=32767,num,myArr[3][3];
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             cin>>num;
//             myArr[i][j]=num;
//         }
//     }
//     cout<<"Array values are:"<<endl;
//     for(int k=0; k<3; k++)
//     {
//         for(int l=0; l<3; l++)
//         {
//             cout<<myArr[k][l]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int m=0; m<3; m++)
//     {
//         for(int n=0; n<3; n++)
//         {
//             if(myArr[m][n]>max)
//             {
//                 max=myArr[m][n];
//             }
//             if(myArr[m][n]<min)
//             {
//                 min=myArr[m][n];
//             }
//         }
//     }
//     cout<<"Maximum Number is= "<<max<<endl;
//     cout<<"Minimum Number is= "<<min<<endl;
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------------------------------
/*Q No. 2: Write a C++ program that will add two 2D arrays elements. Take values from user at runtime. Note display
values of 1st, 2nd and their resultant array.
Hints: A will be the 1st array, B will be the 2nd array and C will be resultant array.
Note: Follow Mathematics Matrix Addition Rules
Output should be like that:
Enter values for array initialization
a[0][0] =3
b[0][0] =4
a[0][1] =5
b[0][1] =34
a[0][2] =3
b[0][2] =5
a[1][0] =6
b[1][0] =7
a[1][1] =7
b[1][1] =7
a[1][2] =7
b[1][2] =6
a[2][0] =4
b[2][0] =9
a[2][1] =7
b[2][1] =5
a[2][2] =3
b[2][2] =5
Values of Array a
3 5 3
6 7 7
4 7 3
Values of Array b
4 34 5
7 7 6
9 5 5
Values of Array c (Resultant array) after addition of Array a and b
7 39 8
13 14 13
13 12 8*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1,num2,a[3][3],b[3][3],c[3][3];
//     cout<<"Enter values for array initialization"<<endl;
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             cout<<"a["<<i<<"]["<<j<<"]  =";
//             cin>>num1;
//             a[i][j]=num1;
//             cout<<"b["<<i<<"]["<<j<<"]  =";
//             cin>>num2;
//             b[i][j]=num2;
//             c[i][j]=num1+num2;
//         }
//     }
//     cout<<endl;
//     cout<<"Values of Array a \n"<<endl;
//     for(int k=0; k<3; k++)
//     {
//         for(int l=0; l<3; l++)
//         {
//             cout<<a[k][l]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Values of Array b \n"<<endl;
//     for(int m=0; m<3; m++)
//     {
//         for(int n=0; n<3; n++)
//         {
//             cout<<b[m][n]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Values of Array c (Resultant array) after addition of Array a and b  \n"<<endl;
//     for(int p=0; p<3; p++)
//     {
//         for(int q=0; q<3; q++)
//         {
//             cout<<c[p][q]<<" ";
//         }
//         cout<<endl;
//     }return 0;
// }
//------------------------------------------------------------------------------
//                --------------------Maximum number and Minimum number--------- 
//#include <iostream>
using namespace std;
int main() {
int array_size= 5;
int myNum[array_size]= {11,10,33,4,5};
int min =myNum[0],max =myNum[0];
for (int i = 0; i <array_size; i++)
{
 if(myNum[i]>max)
 {
     max=myNum[i];
 }
 if (myNum[i] < min)
 {
 min=myNum[i];
 }
 
}
cout<<"Maximum number is: "<<max<<"\n";
cout<<"Manimum number is: "<<min;
 return 0;
}
