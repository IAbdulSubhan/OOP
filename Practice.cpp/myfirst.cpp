#include <iostream> 
using namespace std; 
class product 
{ 
private: 
string name; 
int Regularprice;
int discount; 
public: 
void prdname() 
{ 
cout<<"Enter product name :"; 
cin>>name; 
} 
void getproduct() 
{ 
cout<<"Enter product price :"; 
cin>>Regularprice; 
discount=(Regularprice/100)*80; 
cout<<"Product Name :"<<name<<endl 
<<"Product Price :"<<Regularprice<<endl 
<<"After 20% Discount :"<<discount<<endl; } 
void setproduct(string name,int Regularprice,int discount) { 
this->name=name; 
this->Regularprice=Regularprice; 
this->discount=discount; 
} 
}; 
class Book:public product 
{ 
private: 
string name; 
string Aurthorname; 
public: 
void setBook(string name,string Aurthorname) { 
this->name=name; 
this->Aurthorname=Aurthorname; 
} 
void getBook() 
{ 
product::prdname(); 
cout<<"Enter Book Name :"; 
cin>>name; 
cout<<"Enter Author Name :"; 
cin>>Aurthorname; 
product::getproduct(); 
} 
}; 
class Electronic:public product 
{ 
    private:
    string manufacture;
public: 

void getelectrnic() 
{ 
product::prdname(); 
cout<<"Enter Name of  Manufacturer :";
cin>>manufacture;
product::getproduct();
} 
}; 
class TV:public Electronic 
{ 
private: 
int size; 
public: 
void getTv() 
{ 
product::prdname(); 
cout<<"Ebter size of Tv in inch :"; 
cin>>size; 
product::getproduct(); 
} 
}; 
class Mp3Player:public Electronic { 
private: 
string colour; 
int capacity; 
public: 
void getmp3() 
{ 
product::prdname(); 
cout<<"Enter colour of Mp3 :"; 
cin>>colour; 
cout<<"Enter capacity of Mp3(gigabyte) :"; cin>>capacity; 
product::getproduct(); 
} 
};  
int main() 
{ 
Book s1; 
Mp3Player s2; 
Electronic s3; 
TV s4; 
int x; 
do 
{ 
cout<<"Enter the product item :"<<endl; cout<<"Press 1). Book"<<endl; 
cout<<"Press 2). Electronics"<<endl; cout<<"Press 3). MP3 Player "<<endl; cout<<"press 4). TV "<<endl; 
cout<<"Press 5). to Exit"<<endl; cin>>x; 
if(x==1) 
{ 
s1.getBook();
} 
else if(x==2) 
{ 
s3.getelectrnic(); 
} 
else if(x==3) 
{ 
s2.getmp3(); 
} 
else if(x==4) 
{ 
s4.getTv(); 
} 
else 
cout<<"invalid choice !!!!"<<endl; } 
while(x!=5); 
return 0; 
} 
