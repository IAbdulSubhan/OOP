/*Task 1:
Write a program for ATM machines that would take amount in numbers and would 
decide to dispense the amount in least number of notes. 
For example, input 540
Output: 3 
1 x 500
2 x 20*/
// #include <iostream>
// using namespace std;

// int main(){
//     int amount,Note5000,amountless5000,Note1000,amountless1000,Note500,Note100,Note50,Note20,Note10;
//     Note5000=Note1000=Note500=Note100=Note50=Note20=Note10=amountless1000=amountless5000=0;
//     cout<<"Enter amount: ";
//     cin >> amount;
//     //If Amount more than 5000
//     if(amount>5000)
//     {
//         Note5000=amount/5000;    //Notes of 5000
//         if(amount%5000<5000)
//         {
//             amountless5000=amount%5000;
//             if(amountless5000%5000<5000 && amountless5000%5000>=1000)
//             {
//                 Note1000=amountless5000/1000;  //note 1000
//             }
//         }
//         if(((amountless5000%1000)>=500) && ((amountless5000%1000)<1000))
//             {
//                 Note500=(amountless5000%1000)/500;     // 500 notes
//             }
//         if(((amountless5000%1000)%500<500) && ((amountless5000%1000)%500>=100))
//             {
//                 Note100=((amountless5000%1000)%500)/100;    //100 notes
//             }
//         if(((((amountless5000%1000)%500)%100)<100) && ((((amountless5000%1000)%500)%100)>=50))
//             {
//                 Note50=(((amountless5000%1000)%500)%100)/50; //50 Notes
//             }
//         if((((((amountless5000%1000)%500)%100)%50)<50) && (((((amountless5000%1000)%500)%100)%50)>=20))
//                 {
//                     Note20=((((amountless5000%1000)%500)%100)%50)/20; //20 Notes
//                 }
//         if(((((((amountless5000%1000)%500)%100)%50)%20)%10==0))
//             {
//                 Note10=(((((amountless5000%1000)%500)%100)%50)%20)/10;   //10 Notes
//             }
//     }
//     //If Amount more than 1000 and less than 5000
//     else if(amount>=1000 && amount<5000)
//     {
//         Note1000=amount/1000;       //Note of 1000
//         if(amount%1000<1000)
//         {
//             amountless1000= amount%1000;
//             if(amountless1000>=500 && amountless1000<1000)
//             {
//                 Note500=amountless1000/500;     // 500 notes
//             }
//             if(amountless1000%500<500 && amountless1000%500>=100)
//             {
//                 Note100=(amountless1000%500)/100;    //100 notes
//             }
//             if((((amountless1000%500)%100)<100) && (((amountless1000%500)%100)>=50))
//             {
//                 Note50=((amount%500)%100)/50; //50 Notes
//             }
//             if(((((amountless1000%500)%100)%50)<50) && ((((amountless1000%500)%100)%50)>=20))
//                 {
//                     Note20=(((amountless1000%500)%100)%50)/20; //20 Notes
//                 }
//             if((((((amountless1000%500)%100)%50)%20)%10==0))
//             {
//                 Note10=((((amount%500)%100)%50)%20)/10;   //10 Notes
//             }
//         }
//     }
//     //below code is only for if amount is less than 1000
//     else if(amount>=500 && amount<1000)
//     {
//         Note500=amount/500;     // 500 notes
//         if(amount%500<500 && amount%500>=100)
//         {
//             Note100=(amount%500)/100;    //100 notes
//         }
//         if((((amount%500)%100)<100) && (((amount%500)%100)>=50))
//             {
//                 Note50=((amount%500)%100)/50; //50 Notes
//             }
//         if(((((amount%500)%100)%50)<50) && ((((amount%500)%100)%50)>=20))
//             {
//                 Note20=(((amount%500)%100)%50)/20; //20 Notes
//             }
//         if((((((amount%500)%100)%50)%20)%10==0))
//         {
//             Note10=((((amount%500)%100)%50)%20)/10;   //10 Notes
//         }
//     }
//     else
//     {
//         cout<<"Sorry! You Can Recieve Minimum 500 Only. Thanks."<<endl;
//     }
//     cout<<Note5000<<" * "<<" 5000"<<endl;
//     cout<<Note1000<<" * "<<" 1000"<<endl;
//     cout<<Note500<<" * "<<" 500"<<endl;
//     cout<<Note100<<" * "<<" 100"<<endl;
//     cout<<Note50<<" * "<<" 50"<<endl;
//     cout<<Note20<<" * "<<" 20"<<endl;
//     cout<<Note10<<" * "<<" 10"<<endl;
//     return 0;
// }

//.........................................................................
//---------------------------------Q2--------------------------------------
/*Task 2: Write a program that would return the most repeated character in an
input string.
For example: school
Output: o, 2
Note: if there is a match, it is up to you which ever you want to print.*/
// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;

// int main()
// {
//     string yourString;
//     int length,max=0,min=0;
//     int ind=0;
//     cout<<"Enter String: ";
//     cin >> yourString;
//     length = yourString.length();
//     int arr[length];
//     for(int i=0; i<length; i++)
//     {
//         int n=0;
//         for(int j=0; j<length; j++)
//         {
//             if(yourString[i]==yourString[j])
//             {
//                 n=n+1;
//                 arr[i]=n;
//             }
//         }
//     }
//     for(int k=0; k<length; k++)
//     {
//         cout<<arr[k]<<" ";
//     }
//     for(int l=0; l<length ;l++)
//     {
//         if(arr[l]>max)
//             max=arr[l];
//         if(arr[l]<min)
//             min=arr[l];
//         else
//         {
//             ind=0;
//         }
//     }
//     cout<<"max: "<<max<<endl;
//     for(int m=0; m<length; m++)
//     {
//         if(arr[m]==max)
//         {
//             ind=m;
//         }
//     }
//     cout<<"Most reapetd Element: "<<yourString[ind]<<", "<<max<<endl;
//     return 0;

// }