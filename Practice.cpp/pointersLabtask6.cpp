///*Q No.1: Write a program to input data into an array (Take value from user at runtime 
//for inserting into array using loop) and find out the maximum value and minimum value 
//from array through pointer?*/
// #include <iostream>
// using namespace std;
// void Maxmin(int *Parr,int *n)
// {
// 	int small,large,val;
//     cout<<"Enter the values "<<*n<<" times.\n";
//    for(int i=0;i<*n;i++)
//    {
//        cin >> *(Parr+i);   //Entering Values in array by pointer variable
//    }
//    small=Parr[0];
//    large=Parr[0];
//    //cout<<small<<" "<<large<<endl;
//    cout<<"Values are:\n";
//    for(int i=0;i<*n;i++)
//    {
//        val=Parr[i];
//        cout<<val<<endl;
//        if(val>large)
//        {
//            large=val;
//        }
//        if(val<small)
//        {
//            small=val;
//        }
//    }
//    cout<<"Maximum value = "<<large<<endl;
//    cout<<"Minimum value = "<<small<<endl;
// }
// int main()
// {
//    int myArr[100],size;
//    //int myArr[100]={1,3,4,5,6,77}
//    cout<<"Enter the size of array: ";
//    cin >> size;
//    Maxmin(myArr,&size);
//    return 0;
// }
//----------------------------------------------------------------------------------------------
//Q No.2: Write a program to convert Fahrenheit to Celsius degrees by passing pointers 
//as arguments to the function?   -Formula--(32�F - 32) � 5/9 = 0�C---
//(Take value from user at runtime)
// #include <iostream>
// using namespace std;

// float Conversion(float *Fpointer)
// {
// 	float Cval;    //converted value
// 	Cval = (*Fpointer -32) * 0.5556;     // -Formula--(32�F - 32) � 0.5556 = 0�C---
// 	return Cval;
// }
// int main()
// {
// 	float Fval;
// 	cout<<"Enter the input to convert Fahrenheit to Celsius: ";
// 	cin >> Fval;
// 	cout<<"Conversion "<<Fval<<" Fahrenheit to Celsius = "<<Conversion(&Fval)<<"Celsius"<<endl;
// 	return 0;
// }

//------------------------------------------------------------------------------------------------------
/*Q No.3: Write a program to convert kilogram into grams by passing pointers as arguments 
to the function? 
(Take values from user at runtime)*/
// #include <iostream>
// using namespace std;

// float Conversion(float *Kpointer)
// {
// 	float Cval;    //converted value
// 	Cval = (*Kpointer * 1000);     // -Formula--multiply the mass value by 1000---
// 	return Cval;
// }
// int main()
// {
// 	float Kval;
// 	cout<<"Enter the input to convert  kilogram into grams: ";
// 	cin >> Kval;
// 	cout<<"Conversion "<<Kval<<" kilogram into grams = "<<Conversion(&Kval)<<"grams"<<endl;
// 	return 0;
// }
//----------------------------------------------------------------------------------------------------------
/*Q No.4: Write a program to find out the length of string by using pointers? 
(Take string value from user at runtime)*/
// #include <iostream>
// #include <cstring>
// using namespace std;
 
// int main() {
 
//     char text[100];
//     char * str = text;
//     int count = 0;
 
//     // Inputtin string from user
//     cout<<"Enter any string: ";
//     cin>>text;
 
//     // Iterating though last element of the string
//     while(*(str++) != '\0') count++;
 
//     cout<<"Length of "<<text<<" is "<<count;
 
//     return 0;
// }
 
//--------------------------------------------------------------------------------------------------------------
//*Q No.5: Write a program to copy one string to another string by using pointers? 
//(Take string value from user at runtime)*/
//  #include <iostream>
// #include <cstring>
// using namespace std;
 
// int main() {
 
//     char text1[100],text2[100];
//     char *str1 = text1;
// 	char *str2 = text2;
 
//     // Inputtin string from user
//     cout<<"Enter any string: ";
//     cin>>str1;
 
//     // Iterating though last element of the string
//     while(*(str1) != '\0')
// 	{
// 		*str2++=*str1++; 
// 		*str2='\0';
// 	}
 
//     cout<<"copy of "<<text1<<" is: "<<text2<<endl;
 
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------------
/*Q No.6: Write a program to combine two strings by using pointers? 
(Take both strings value from user at runtime*/
// #include <iostream>
// #include <string>
// using namespace std;
 
// int main () 
// {
// //   string firstName = "Subhan ";
// //   string lastName = "Khalid";
// //   cout<<firstName + lastName;
// string firststr,secondstr,sum,*firstp,*secondp,*sump;
// firstp=&firststr;
// secondp=&secondstr;
// cout<<"Enter firststr and secondstr: ";
// cin >> *firstp >> *secondp;
// cout<<"Concatinantion of strings = "<<*firstp+*secondp<<endl;
// return 0;
// }
//--------------------------------------------------------
/*Returning Array by user defined futn*/
// #include <iostream>
// using namespace std;

// int Maxmin(int *Parr,int *n)
// {
//     cout<<"Enter the values "<<*n<<" times.\n";
//    for(int i=0;i<*n;i++)
//    {
//        cin >> *(Parr+i);   //Entering Values in array by pointer variable
//    }
// return *Parr;
// }

// int main()
// {
//    int myArr[100],size,sub;
//    cout<<"Enter the size of array: ";
//    cin >> size;
//    sub=Maxmin(myArr,&size);
//     for(int i=0;i<size;i++)
//    {
//        cout<<*(myArr+i)<<" ";  //Displaying array by pointer variable
//    }
//    return 0;
// }

//#include <iostream>
//using namespace std;
//int main(){
//	int totValue=5;
//	 cout <<"The total value of the numbers is "<<totValue<<"\a \n\n";  // \a is used for beep when program succesfully runs complete
//}
	


