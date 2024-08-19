#include <iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
void addmember();
void price();
void showdata();
void pay();
class zym{
    public:
    string name;

    int age,account,amount,adhar;


void nam(){
    while(1){
    int ch;
    cout<<"\nEnter choice:";
    cin>>ch;
    if(ch==1)
    addmember();
    else if(ch==2)
    price();
    else if(ch==3)
    showdata();
    else if(ch==4)
    pay();
    else
    exit(0);


    }

}
void addmember(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"                                            "              <<name  <<"  added_\n         ";
}
void price(){
    string name;
     cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    if(age>=18)
    cout<<"Price is 500\n";
    else
    cout<<"price is:300";
}
void get(){
   showdata();
}
void showdata(){
     cout<<"\nName:"<<name;
     cout<<"\nAge:"<<age;
     if(age>=18)
     cout<<"\nPrice is 500\n";
     else
     cout<<"\nprice is     :300";
     cout<<"\nAadhar Number:"<<adhar;
     cout<<"\nA.c Number   :"<<account;

     if(amount==4198640)
     amount=0;
     else
     cout<<" ";

     cout<<"\nPay Amount   :"<<amount;

}

void money(){
    pay();
}
void pay(){
    // int adhar,amount ,account;
    cout<<"Enter Your name:";
    cin>>name;
    cout<<"Adhar Number:";
    cin>>adhar;
    cout<<"A.C Number:";
    cin>>account;

    cout<<"Amount:";
    cin>>amount;



    cout<<"\n                Transaction is succesfully transfer\n\n   "<<"                 "          <<       "      THANK YOU";
}


};

int main() {

cout<<"--------------------------------------------------GYM MANAGEMENT-------------------------------------\n\n";
cout<<"\n\nOpen 5 TO 10:AM_"<<"                                                       "       <<    "     Close 5 TO 10 :PM_\n \n      ";



cout<<"\n1:Add member\n"<<"2:Check Price\n"<<"3:Show data\n"<<"4:Pay Amount\n"<<"5:Exit\n";
cout<<"------------------------------------------------------------------------------------------------------------\n\n";


   zym z;
   z.nam();
   z.get();
   z.money();
}











