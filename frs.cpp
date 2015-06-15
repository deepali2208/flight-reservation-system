#include<iostream>
using namespace std;
 class flight
 {
 public:
    int tickets;
    int n;
    void book();
    void availability();
 };


 void flight::book()
 {
 cout<<"Enter number of tickets:";
        cin>>n;

    if(tickets<=100 && tickets>0)
    {

        if(tickets>=n)
        {
        tickets=tickets-n;
        cout<<"Your bookings have been confirmed.";
        }
        else
        cout<<"Sorry,no tickets available.";

    }

    }

    void flight::availability()
    {
        cout<<"Number of tickets available in the flight:"<<tickets;
    }

    int main()
    {
        flight f;
        int c;
        cout<<"Welcome to Jet Airways!";
        do
        {
        cout<<"1.Book your tickets. \n 2.Check availability. \n 3.I am done.";
        cout<<"\nEnter your choice:";
        cin>>c;
        f.tickets=100;

        switch(c)
        {
            case 1:f.book();
            break;
            case 2:f.availability();
            break;
            case 3:
            break;
            default:cout<<"Please enter a valid option.";
        }
        cout<<"Thank you for using our services.";
        } while(0);
    }



