

//-------------------------------------------------------------------------------------------------------------------------
// //single level
// #include <iostream>          //constructor in single level inheritance
// using namespace std;
// #include<string.h>


// class Student
// {
//     private:
//     char name[15], address[25];
    
//     public:
//     Student(char nm[], char add[])
//     {
//         strcpy(name,nm);
//         strcpy(address, add);
//     }
//     void show()
//     {
//         cout<<"Name is: "<<name<<endl;
//         cout<<"Address is: "<<address<<endl;
//     }
// }; // end of Student class


// class Marks
// {
//     private:
//     int sub1, sub2, sub3, total;


//     public:
//     Marks(int a, int b, int c)
//     {
//         sub1=a;
//         sub2=b;
//         sub3=c;
//         total=a+b+c;
//     }
   
// void show_marks()
// {
//     cout<<"Marks of 1st subject: "<<sub1<<endl;
//     cout<<"Marks of 1st subject: "<<sub2<<endl;
//     cout<<"Marks of 1st subject: "<<sub3<<endl;
//     cout<<"Total Marks         : "<<total<<endl;
// }
// };  // end of Marks class


// class Show : public Student, public Marks
// {
// public:
// Show(char nm[], char add[], int s1, int s2, int s3) : Student(nm, add), Marks(s1, s2, s3)  //constructors calling is sy -->yeah Student(nm, add) constructor call ho ga   -->then yeahMarks(s1, s2, s3)
// {


//             show();           // calling show() method of student class 
// show_marks();   // calling show_detail() of marks class
// }
 

// };  // end of Show class


// int main() {


//     Show marks("Amir", "Kohat", 66,99,88);
//     return 0;
// }  // end of main() function

//--------------------------------------------------------------------------------
//Multiple inheritance
// #include <iostream>
// using namespace std;

// class A
// {
//     public:
//     A()
//     {
//     cout<<"I am class A\n";
//     }
// };
// class B
// {
//     public:
//     B()
//     {
//     cout<<"I am class B\n";
//     }
// };
// class C : public A, public B
// {
//     public:
//     C() : A() , B()
//     {
//     cout<<"I am class C\n";
//     }
// };

// int main()
// {
//     C obj;
//     return 0;
// }
//-------------------

// #include <iostream>
// using namespace std;
// #include<string.h>


// class Student
// {
//     private:
//     char name[15], address[25];
    
//     public:
//     Student(char nm[], char add[])
//     {
//         strcpy(name,nm);
//         strcpy(address, add);
//     }
//     void show()
//     {
//         cout<<"Name is: "<<name<<endl;
//         cout<<"Address is: "<<address<<endl;
//     }
// }; // end of Student class


// class Marks
// {
//     private:
//     int sub1, sub2, sub3, total;


//     public:
//     Marks(int a, int b, int c)
//     {
//         sub1=a;
//         sub2=b;
//         sub3=c;
//         total=a+b+c;
//     }
   
// void show_marks()
// {
//     cout<<"Marks of 1st subject: "<<sub1<<endl;
//     cout<<"Marks of 1st subject: "<<sub2<<endl;
//     cout<<"Marks of 1st subject: "<<sub3<<endl;
//     cout<<"Total Marks         : "<<total<<endl;
// }
// };  // end of Marks class


// class Show : public Student, public Marks
// {
// public:
// Show(char nm[], char add[], int s1, int s2, int s3) : Student(nm, add), Marks(s1, s2, s3)
// {


//     show();           // calling show() method of student class 
//     show_marks();   // calling show_detail() of marks class
// }
 

// };  // end of Show class


// int main() {


//     Show marks("Amir", "Kohat", 66,99,88);
//     return 0;
// }  // end of main() function
//--------------------------------------------------
//Lab 15
// Complie time calling /Early Binding /static binding  polymorphism
// #include <iostream>
// using namespace std;

// class A
// {
//     public:
//     void print()
//     {
//         cout<<"class A\n";
//     }
// };
// class B : public A
// {
//     public:
//     void print()
//     {
//         cout<<"class B\n";
//     }
// };
// int main()
// {
//     A *a;       //obj of class a through poniter
//     B b;
//     a=&b;
//     a ->print();        // wo function call ho ga jis ka pointer use ho ga call k liya or pointer access those fuction jis ka type match ho rha hai variable sy
// }
//-----------------------------------------------
//Virtual function
// #include<iostream>
// using namespace std;
// class BB        //parent
// {
//     public:
//     virtual void ppp()
//     {
//     cout<<"Hello, it is the base class"<<endl;
//     }
// };
// class d1 : public BB        //first child
// {
//     public:
//     void ppp()
//     {
//     cout<<"It is the first derived class"<<endl;
//     }
// };
// class d2 : public BB        //2nd child
// {
//  public:
//  void ppp()
//  {
//  cout<<"It is the second derived class"<<endl;
//  }
// };
// int main() 
//     {
//     BB *p;
//     d1 a;
//     d2 b;
//     p = &a;
//     p->ppp();
//     p=&b;
//     p->ppp();
//     return 0;
//     }
/*
// Output
// It is the first derived class
// It is the second derived class
// */
//--------------------------------------------
// Pure virtual Function
/*The pure virtual function simply tells the compiler that the function is pure. The class that contains the
pure virtual function exists only to act as a parent or base of the derived classes. The function is
implemented in the derived classes.*/
#include<iostream>
using namespace std;
class BB
    {
    public:
    virtual void ppp()=0;
    };
class d1 : public BB
    {
    public:
    void ppp()
    {
    cout<<"It is the first derived class"<<endl;
    }
};
class d2 : public BB
    {
    public:
    void ppp()
    {
    cout<<"It is the second derived class"<<endl;
    }
};
int main() {
 BB *p;
 d1 a;
 d2 b;
 p = &a;
 p->ppp();
 p=&b;
 p->ppp();
 return 0;
}
// /*
// Output
// It is the first derived class
// It is the second derived class

//=========================================================================================