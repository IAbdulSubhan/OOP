// //LAB 13 OOP
// #include <iostream>
// using namespace std ;

// class A
// {
// public:
//     void print ()
//     {
//         cout<<"parent class\n";
//     }
// };
// class B : public A
// {
// public:
//     void print ()
//     {
//         A::print();
//         cout<<"child / derrived class\n";
//     }
// };
// int main()
// {
//     B obj;
//     //obj.print();        // methode overriding
//     //obj.A :: print();
//     A *p = &obj;      //saving adress of child class in parent class pointer variable to call parent class in overriding 
//     p->print();
//     return 0;
// }
//-----------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std ;

// class A
// {
// public:
//     void Display()
//     {
//         cout<<"Class A\nGrandFather class content.\n";
//     }
// };
// class B : public A
// {
// public:
//     void Display()
//     {
//         cout<<"Class B\nFather class content.\n";
//     }
// };
// class C : public B
// {
// public:
//     void Display()
//     {
//         cout<<"Class C\n";
//     }
// };
// int main()
// {
//     C obj;
//     obj.Display();
//     return 0;
// }
//-------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// class person
// {
//     private:
//     char name[20];
//     long phno;
// public:
//     void read()
//     {
//         cout<<"Enter name and phno= ";
//         cin>>name>>phno;
//     }
//     void show()
//     {
//     cout<<"\nName= "<<name;
//     cout<<"\nPhone number= "<<phno<<endl;
//     }
// }; // end of person class

// // // int main()
// // // {
// // //     person obj;
// // //     obj.read();
// // //     obj.show();
// // //     return 0;
// // // }
// // //-----------------------------------------------------------------------------------------------

// class student: public person
// {
// private:
//     int rollno;
//     char course[20];
// public:
//     void read()
//     {
//         person::read();//Access person's read()
//         cout<<"Enter rollno and course=";
//         cin>>rollno>>course;
//     }
//     void show()  {
//         person::show(); //Access person's show()
//         cout<<"\nRollno= "<<rollno;
//         cout<<"\nCourse ="<<course;
//     }
// }; // end of student class

// // int main()
// // {
// //     student obj;
// //     obj.read();
// //     obj.show();
// //     return 0;
// // }
// //------------------------------------------------------------------------------
// // #include <iostream>
// // using namespace std; 

// class exam : public student {
// private:
// int m[4];
// double per;
// public:
// void read() ;
// void cal();
// void show() ;
// }; // end of exam class

// // Function definitions
// void exam::read() 
// {
//     student::read();//Access student's read()
//     cout<<"Enter marks :";
//     for(int i=0;i<4;i++)
//     cin>>m[i];
// }
// void exam::cal() 
// {
//     int tot_marks=0;
//     for(int i=0;i<4;i++)
//     tot_marks+=m[i];
//     per=double(tot_marks)/4;
// }

// void exam::show() 
// {
//     student::show();//Access student's show()
//     cout<<"\nMarks :";
//     for(int i=0;i<4;i++)
//     cout<<m[i]<<"\t";
//     cout<<"\nPercentage = "<<per;
// }
// //main function
// int main() 
// {
//     exam e1;
//     e1.read();
//     e1.cal();
//     e1.show();
//     return 0;
// }
//---------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// #include<iostream>
// using namespace std;
// class base1
// {
// protected:      //protected is not eccsessible in child class but protected accessible in child class 
//     int x;
// public:
//     void readx()
//     {
//     cout<<"Enter value of x: ";
//     cin>>x;
//     }
// void showx() 
//     {
//         cout<<"x= "<<x;
//     }
// void fast()
// {
//     cout<<"base1\n";
// }
// }; // end of class base1

// class base2
// {
// protected:      //protected is not eccsessible in child class but protected accessible in child class 
//     int y;
// public:
//     void ready()
//     {
//     cout<<"Enter value of y: ";
//     cin>>y;
//     }
// void showy() 
//     {
//         cout<<"y= "<<y;
//     }
// void fast()
// {
//     cout<<"base2\n";
// }
// }; // end of class base1

// class der : public base1, public base2      //last/child class ko private bnaya karna in inheritance
// {
//     private:
//     int z;
//     public:
//     void add()
//     {
//         z=x+y;  //Accessing protected members of base classes
//     }
//     void showz ()
//     {
//     cout<<"\nz = "<<z;
//     }
// }; // end of class der1


// //main function
// int main() 
// {
//     der d1;
//     d1.readx();//calling readx() of basel
//     cout<<endl;
//     d1.ready();//calling ready() of base2
//     cout<<endl;
//     d1.add();//calling add() of der
//     d1.showx();//calling showx() of basel
//     cout<<endl;
//     d1.showy();//calling showy() of base2
//     cout<<endl;
//     d1.showz();//calling showz() of der
//     cout<<endl;
//     //d1.fast();                           //ambiguity error
//     //its solution is belloew functions
//     d1.base1::fast( ); // Function of base1 class is called
//     d1.base2::fast( ); // Function of base1 class is called

//     return 0;
// }
//-------------------------------------------------------------------------------------------------
// // C++ program to demonstrate hierarchical inheritance
// #include <iostream>
// using namespace std;
// // base class
// class Animal {
// public:
//     void info() 
//     {
//         cout << "I am an animal." << endl;
//     }
// };
// // derived class 1
// class Dog : public Animal {
// public:
//     void bark() 
//     {
//         cout << "I am a Dog. Woof woof." << endl;
//     }
// };
// // derived class 2
// class Cat : public Animal {
// public:
//     void meow() 
//     {
//         cout << "I am a Cat. Meow." << endl;
//     }
// };

// int main() {
//     // Create object of Dog class
//     Dog dog1;
//     cout << "Dog Class:" << endl;
//     dog1.info(); // Parent Class function
//     dog1.bark();
//     // Create object of Cat class
//     Cat cat1;
//     cout << "\nCat Class:" << endl;
//     cat1.info(); // Parent Class function
//     cat1.meow();
//     return 0;
// }
//----------------------------------
//Both conctructor calls in inheritance
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"I am construcror of class A\n";
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"I am construcror of class A\n";
    }
};

int main()
{
    B obj;
    return 0;
}
