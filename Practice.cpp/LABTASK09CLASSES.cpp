// #include<iostream>      //including my header files
// using namespace std;

// class Rectangle         //class defination
// {
// 	private:
// 		float length;       //these are private date mambers
// 		float width;
// 	public:             //Below data is public data and public member functions prototypes(defined after main function)
// 		void Setlength(float lenth);    //by this function we will set length
// 		void Setwidth(float widh);      //by this function we will set width
// 		float Perimeter();              //by this function we will return perimeters
// 		float Area();                   //by this function we will calculate the area
// 		void Show();                    //Here we will show the size of length and width
// 		int SameArea(Rectangle);        //Here we will show that the two rectangales are equal or not
// };  //End of the class defination

// int main()          //start of main function
// {
// 	Rectangle myfirst;      //defining class variable 
// 	Rectangle mysecond;     //defining class variable 
// 	myfirst.Setlength(5);   //setting data by passing value to member functions
// 	myfirst.Setwidth(2.5);  //setting data by passing value to member functions
// 	mysecond.Setlength(5);  //setting data by passing value to member functions
// 	mysecond.Setwidth(18.9);    //setting data by passing value to member functions
// 	cout << "1st rectangle: ";
// 	myfirst.Show();             //showing the length and width of 1st
// 	cout << endl << "Area= " << myfirst.Area() <<" "<< "Perimeter= " <<" "<< myfirst.Perimeter() << endl << endl;
// 	cout << "2nd rectangle: ";
// 	mysecond.Show();            //showing the length and width of 2nd
// 	cout << endl << "Area= " << mysecond.Area() <<" "<< "Perimeter= " <<" "<< mysecond.Perimeter() << endl << endl;
// 	if (myfirst.SameArea(mysecond))         //comparing Rectangles have the same area or not
// 		cout << "Rectangles have the same area\n"<< endl << endl;
// 	else
// 		cout << "Rectangles do not have the same area\n"<< endl << endl;
//     //...................................................same like above aetting data show data and comparing 
// 	myfirst.Setlength(15);
// 	myfirst.Setwidth(6.3);
// 	cout << "1st rectangle: ";
// 	myfirst.Show();
// 	cout << endl << "Area= " << myfirst.Area() <<" "<< "Perimeter= "<< myfirst.Perimeter() << endl << endl;
// 	cout << "2nd rectangle: ";
// 	mysecond.Show();
// 	cout << endl << "Area= " << mysecond.Area() <<" "<< "Perimeter= "<< mysecond.Perimeter() << endl << endl;
// 	if (myfirst.SameArea(mysecond))
// 		cout << "Rectangles have the same area\n";
// 	else
// 		cout << "Rectangles do not have the same area\n";
// 	return 0;
// }       //end of main functions


// void Rectangle::Setlength(float lenth)      //defination of Setlength member function
// {
// 	length = lenth;
// }
// void Rectangle::Setwidth(float widh)       //defination of Setwidth member function
// {
// 	width = widh;
// }
// float Rectangle::Perimeter()                //defination of Perimeter member function
// {
// 	return (2 * length + 2 * width);
// }
// float Rectangle::Area()     //defination of Area member function
// {
// 	return length * width;
// }
// void Rectangle::Show()      //defination of Show member function
// {
// 	cout << "Length: " << length << " Width: " << width;
// }
// int Rectangle::SameArea(Rectangle other)    //defination of SameArea member function
// {
// 	float areaf = length * width;
// 	float areas = other.length * other.width;
// 	if (areaf == areas)
// 		return 1;
// 	return 0;
// }
// //-----------------------------------------------------------------------------------------------------------------
#include <iostream>         //including my header files
using namespace std;

class Complex       //class defination
{
   private:
	float a;        //these are private date mambers
	float b;
   public:          //Below data is public data and public member functions prototypes(defined after main function)
	void set(float real, float img);  //setting real and imagenary values prototype
	Complex sum(Complex);   //this is defulat constructor prototype
	void disp();                //Displaying the data prototype
};
Complex Complex::sum(Complex C)     //this is defulat constructor definning
{
	Complex n;
	n.a = b + C.a;
	n.b = b + C.b;
	return n;
}

int main()      //start of main function
{
	Complex C1,C2,C3;       //defining class variable 
	C1.set(9.5,6.1);        //setting data by passing value to member functions
	C2.set(9.2,6.5);        //setting data by passing value to member functions
	C3=C1.sum(C2);          //setting data by passing value to member functions
	cout<<"\n 1st complex num = ";C1.disp();        //Displaying complex number by calling function 1st time
	cout<<"\n 2nd complex num = ";C2.disp();        //Displaying complex number by calling function 2nd time
	cout<<"\n 3rd complex num = ";C3.disp();        //Displaying complex number by calling function 3rd time
	return 0;
}       //End of main function


void Complex::set(float real, float img)      //function defination to set data
	{
		a=real; b=img;
	}
void Complex::disp()                           //function defination to get data
{
	cout<<a<<" + j"<<b<<endl;
}
