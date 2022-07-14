/*14. (Airplane Seating Assignment) 13 rows, with six columns*/
#include <iostream>
using namespace std;
//char myArr[13][6];
void SeatBooking(char myArr[][6],int r,int c)
{
    //int r,c;
    char seat;
    seat= myArr[r][c];
    cout<<"Seat = "<<seat;
    if(seat=='X')
    {
    	cout<<"\nSorry! sir this seated is already Booked\n";
    	cout<<"TRY AGAIN!";
	}
	else
	{
        cout<<"\nCongrants seat is booked for you! \n";
		myArr[r][c]='X';
		cout<<"\t"<<"A"<<"\t"<<"B"<<"\t"<<"C"<<"\t"<<"D"<<"\t"<<"E"<<"\t"<<"F\n";
	    for(int rows=0;rows<13;rows++)
	    {
	        cout<<"Row "<<rows+1<<"\t";
	        for(int col=0;col<6;col++)
	        {
	            cout<<myArr[rows][col]<<"\t";
	        }
	        cout<<endl;
	    }
	}
}
int main()
{
    int r,c;
    char myArr[13][6]={
        {'*','*','X','*','X','X'},
        {'*','X','*','X','*','X'},
        {'*','*','X','X','*','X'},
        {'X','*','X','*','X','X'},
        {'*','X','*','X','*','*'},
        {'*','X','*','*','*','X'},
        {'X','*','*','*','X','X'},
        {'*','X','*','X','X','*'},
        {'X','*','X','X','*','X'},
        {'*','X','*','X','X','X'},
        {'*','*','X','*','X','*'},
        {'*','*','X','X','*','X'},
        {'*','*','*','*','X','*'},
    };
    cout<<"\t"<<"A"<<"\t"<<"B"<<"\t"<<"C"<<"\t"<<"D"<<"\t"<<"E"<<"\t"<<"F\n";
    for(int rows=0;rows<13;rows++)
    {
        cout<<"Row "<<rows+1<<"\t";
        for(int col=0;col<6;col++)
        {
            cout<<myArr[rows][col]<<"\t";
        }
        cout<<endl;
    }
    string Ticket_type;
    cout<<"Sir Seats Are Available Enter class(first,business or economy): ";
    cin>>Ticket_type;
   if(Ticket_type=="first")
   {
       cout<<"Please Enter Seat No from Row 1 or Row 2  ";
   }
   else if(Ticket_type=="business")
   {
       cout<<"Please Enter Seat No from rows 3 through 7  ";
   }
   else
   {
       cout<<"Please Enter Seat No from rows 8 through 13  ";
   }
   cout<<"row = ";
   cin>>r;
   cout<<"column = ";
   cin>>c;
   r=r-1;
   c=c-1;
   SeatBooking(myArr,r,c);
   return 0;
}
