#include<iostream>
#include <iomanip>
#include<conio.h>
#include <stdlib.h>
#include <ctime>
#include<fstream>

using namespace std;

int quantity;
char choice;
time_t now = time(0);
char* dt=ctime(&now);
const float set1=1600.00;
const float set2=2800.00;
const float set3=2200.00;
const float set4=2500.00;
float price,payment,balance;


class cheff                            
public:
    void menu();
    void choosemenu();
};

class cashier:public cheff
{
public:
    void getpayment();
};

class bill                                 
{
    char receipt;
    int input;

public:
    int printreciept();
};

class order                              
{
public:
    void enter_quantity();
};
void order::enter_quantity()
{
    cout << "\n\t\t\tQuantity   : ";
    cin >> quantity;
    system("cls");
}

class Delivery                                
{
    string cus_name,cus_address;
    int no_of_pizzas,rec_no;
    long cus_tel;
    float bill_amount,delivery_fee,km_travelled,total_bill;
    static float charge_per_km;
public:
    void get_details();
    void find_total_bill();
    void show_details();
    Delivery();
    ~Delivery();
};

float Delivery::charge_per_km = 50;

Delivery::Delivery()
{
    this-> bill_amount = bill_amount;
    this-> delivery_fee = delivery_fee;
    this-> km_travelled = km_travelled;
    this-> charge_per_km = charge_per_km;
    this-> total_bill = total_bill;
}

Delivery::~Delivery()
{
}

void Delivery::get_details()
{
    system("COLOR 4");
    cout<<"\n"<<"\t\t\t***************DELIVERY DETAILS****************"<<"\n";
    cout<<"\n"<<"Enter Order Number: ";
    cin>>rec_no;
    cout<<"Enter Customer Name: ";
    cin>>cus_name;
    cout<<"Enter Customer Address: ";
    cin>>cus_address;
    cout<<"Enter Customer Telephone: ";
    cin>>cus_tel;
    cout<<"Enter No. of Pizzas: ";
    cin>>no_of_pizzas;
    cout<<"Enter Bill Amount: Rs.";
    cin>>bill_amount;
    cout<<"Enter Kilometers Traveled: ";
    cin>>km_travelled;
}

void Delivery::find_total_bill()
{
    delivery_fee = km_travelled*charge_per_km;
    total_bill = delivery_fee + bill_amount;
    cout<<"\n"<<"The Total Amount with Delivery Charge is Rs."<<total_bill<<"\n";
}

void Delivery::show_details()
{
    cout<<"\n"<<"Receipt Number    : "<<rec_no;
    cout<<"\n"<<"Customer Mobile   : "<<cus_tel;
    cout<<"\n"<<"Customer Address   : "<<cus_address;
    cout<<"\n"<<"No. of Pizzas     : "<<no_of_pizzas;
    cout<<"\n"<<"Bill Amount       : Rs."<<bill_amount;
    cout<<"\n"<<"Delivery Charge   : Rs."<<delivery_fee;
    cout<<"\n"<<"                    + -----";
    cout<<"\n"<<"Final Bill        : Rs."<<total_bill;
    cout<<"\n"<<"                      -----"<<"\n";
}


class Tandoorichickenorder:public order
{

public:
    void showdetailst();
};

class Beefpepperoniorder:public order
{

public:
    void showdetailsb();
};

class DoubleCheeseorder:public order
{

public:
    void showdetailsd();
};

class HawaiianChickenorder:public order
{

public:
    void showdetailsh();
};






void cheff::menu()
{
    system("COLOR 6");

    cout<< "\n\t\t\t -----------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t|                    Our  Menu                     |"<<endl;
    cout << "\t\t\t -----------------------------------------------------------"<<endl;
    cout << "\n\t\t\t ------------Menu A----------\t ------------Menu B----------"<<endl;
    cout << "\t\t\t| Pizza : Tandoori Chicken  |\t| Pizza : Beef Pepperoni    |"<<endl;
    cout << "\t\t\t| Drink : Pepsi             |\t| Drink : Coca Cola         |"<<endl;
    cout << "\t\t\t| Price : RS 1600.00          |\t| Price : RS 2800.00          |"<<endl;
    cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;

    cout << "\n\t\t\t ------------Menu C----------\t ------------Menu D----------"<<endl;
    cout << "\t\t\t| Pizza : Double Cheese     |\t| Pizza : Hawaiian Chicken  |"<<endl;
    cout << "\t\t\t| Drink : Sprite            |\t| Drink : 7up               |"<<endl;
    cout << "\t\t\t| Price : RS 2200.00          |\t| Price : RS 2500.00          |"<<endl;
    cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;

}

void cheff::choosemenu()
{
    Tandoorichickenorder a;
    Beefpepperoniorder b;
    DoubleCheeseorder c;
    HawaiianChickenorder d;

    cout << "\n\t\t\tChoose Menu : ";
    cin >> choice;
    switch(choice)
    {
    case 'a' :
    case 'A' :

        a.showdetailst();

        break;

    case 'b':
    case 'B' :

        b.showdetailsb();
        break;
    case 'c':
    case 'C' :

        c.showdetailsd();
        break;

    case 'd':
    case 'D' :

        d.showdetailsh();
        break;


    }
}

void Tandoorichickenorder::showdetailst()
{
    system("COLOR 0A");
    enter_quantity();
    cout << "\n\t\t\tYou pick Menu : A"<<endl;
    cout << "\n\t\t\t ---------------------------"<<endl;
    cout << "\t\t\t| Pizza : Tropical Chicken  |"<<endl;
    cout << "\t\t\t| Drink : Pepsi             |"<<endl;
    cout << "\t\t\t| Price : RS 1600.00          |"<<endl;
    cout << "\t\t\t ---------------------------"<<endl;
    cout << fixed<<showpoint<<setprecision(2);
    cout << "\t\t\tQuantity  : "<<quantity<<endl;
    price=(set1*quantity);
    cout << "\n\t\t\tYour total cost is RS "<<(set1*quantity)<<endl;
}
void Beefpepperoniorder::showdetailsb()
{
    system("COLOR 0B");
    enter_quantity();
    cout << "\n\t\t\tYou pick Menu : B"<<endl;
    cout << "\n\t\t\t ---------------------------"<<endl;
    cout << "\t\t\t| Pizza : Beef Pepperoni    |"<<endl;
    cout << "\t\t\t| Drink : Coca COla         |"<<endl;
    cout << "\t\t\t| Price : RS 2800.00          |"<<endl;
    cout << "\t\t\t ---------------------------"<<endl;
    cout << fixed<<showpoint<<setprecision(2);
    cout << "\t\t\tQuantity  : "<<quantity<<endl;
    price=(set2*quantity);
    cout << "\n\t\t\tYour total cost is RS "<<(set2*quantity)<<endl;
}
void DoubleCheeseorder::showdetailsd()
{
     system("COLOR 0C");
    enter_quantity();
    cout << "\n\t\t\tYou pick Menu : C"<<endl;
    cout << "\n\t\t\t ---------------------------"<<endl;
    cout << "\t\t\t| Pizza : Deluxe Cheese     |"<<endl;
    cout << "\t\t\t| Drink : Sprite            |"<<endl;
    cout << "\t\t\t| Price : RS 2200.00          |"<<endl;
    cout << "\t\t\t ---------------------------"<<endl;
    cout << fixed<<showpoint<<setprecision(2);
    cout << "\t\t\tQuantity  : "<<quantity<<endl;
    price=(set3*quantity);
    cout << "\n\t\t\tYour total cost is Rs "<<(set3*quantity)<<endl;
}
void HawaiianChickenorder::showdetailsh()
{
     system("COLOR 0D");
    enter_quantity();
    cout << "\n\t\t\tYou pick Menu D"<<endl;
    cout << "\n\t\t\t ---------------------------"<<endl;
    cout << "\t\t\t| Pizza : Hawaiian Chicken  |"<<endl;
    cout << "\t\t\t| Drink : 7up               |"<<endl;
    cout << "\t\t\t| Price : RS 2500.00          |"<<endl;
    cout << "\t\t\t ---------------------------"<<endl;
    cout << fixed<<showpoint<<setprecision(2);
    price=(set4*quantity);
    cout << "\n\t\t\tYour total cost is RS "<<(set4*quantity)<<endl;
}

void cashier::getpayment()
{
    cout << "\n\t\t\tPlease make your payment to continue: ";
    cin  >> payment;

    if	(payment>=(price))
    {

        balance=payment-(price);


        cout << fixed<<showpoint<<setprecision(2);
        cout << "\n\t\t\tYour total balance is RS: " << balance;
        bill a;
        a.printreciept();
    }

    else
    {

        cout<< "\n\t\t\tPayment not enough";
    }

};

int bill::printreciept()
{

    cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
    cin >> receipt;
    if(receipt=='Y'||receipt=='y')
    {
        system("cls");
        cout << "\n\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t|         Broadway Food Ordering System                 |"<<endl;
        cout << "\t\t\t ------------------------------------------------"<<dt<<endl;
        cout << endl;
        cout << "                      "<<dt<<endl;
        cout << "                      "<<endl;
        cout << "\t\t\t  Tel  : 0344100100    Fax   : 0344100100"<<endl;
        cout << "\t\t\t  Task : Online Order    Order_No : 0080"<<endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t  Cashier :  Janith"<<endl;
        cout << "\t\t\t  Shift   :  Evening Shift 1"<<endl;
        cout << endl;
        cout << "\n\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t| Description      Qty     Price      Amount     |"<<endl;
        cout << "\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t  Menu  "<<"   	    "<<quantity<<" 	   "<<price<<"      "<<price<<"	   "<<endl;
        cout << "                                                "<<endl;
        cout << "\t\t\t  Cash Paid "<<"                          "<<payment<<endl;
        cout << "\t\t\t  Total "<<"                              "<<price<<endl;
        cout << "\t\t\t  Balance "<<"                            "<<balance<<endl;
        cout << "\t\t\t ------------------------------------------------"<<endl;

        Delivery del;
        del.get_details();
        del.find_total_bill();
        del.show_details();

    }
    else if(receipt=='N'||receipt=='n')
    {
        cout<<"\n";
        system("PAUSE");
        cout << "\n\n\t\t\tMenu : "<<endl;
        cout << endl;
        cout << "\t\t\t1. Order again"<<endl;
        cout << "\t\t\t2. Exit"<<endl;

        cout << "\n\t\t\tEnter choice :";
        cin >> input;

        switch(input)
        {
        case 1 :
            break;
        case 2 :
            cout << "\n\t\t\t -----------------------------"<< endl;
            cout << "\t\t\t| Thank you please come again |"<<endl;
            cout << "\t\t\t -----------------------------"<<endl;
            system("PAUSE");
            exit(EXIT_SUCCESS);
            break;
        default :
            cout << "\n\t\t\tYou enter wrong input"<<endl;
            printreciept();
            break;
        }
    }

    else
    {
        cout << "\n\t\t\tYou enter wrong input!!!"<<endl;
        printreciept();
    }

};





class taxi                 
{
    int driver_ID,phone_number;
    string driver_name,vehicle_number;
public:
    void taxi_driver();
    void show();
};
void taxi::taxi_driver()
{
    fstream t;
    t.open("taxi",ios::app);
    cout<<"\n\t Enter Taxi Driver Name =";
    cin>>driver_name;
    cout<<"\n\t Enter Driver ID =";
    cin>>driver_ID;
    cout<<"\n\t Enter Driver Phone Number =";
    cin>>phone_number;
    cout<<"\n\t Enter Vehicle Number =";
    cin>>vehicle_number;
    t<<setw(10)<<driver_name<<setw(10)<<driver_ID<<setw(10)<<phone_number<<setw(20)<<vehicle_number;
    t.close();

    cout<<"\n"<<"You have succesfully Placed The Order!"<<"\n\n";
}




class loginmaneger   
{
public:
    string usernameattempt;
    string passwordattempt;
    loginmaneger()
{
usernameattempt = "\0";
passwordattempt = "\0";
};
bool IsLogin();

};

bool loginmaneger:: IsLogin()
{
    string ch_username = "user", ch_password = "1234";
    cout<<"Enter Your User Name::\t";
    cin>>usernameattempt;
    cout<<"Enter Password::\t";
    cin>>passwordattempt;

    if(usernameattempt == ch_username && passwordattempt == ch_password)
    {
        return true;
    }
    else
    {
     return false;
    }



}



int main()
{
    loginmaneger l1;
   bool status = l1.IsLogin();
    if(!status)
    {
        system("COLOR 1F");
        cout<<"\nlog in failed\n";
        return 1;
    }

       else

       {
char character;
    cashier a;
    taxi ta;
  system("COLOR 8F");

    cout<<"\n\n\n\t\t\t-----------Broadway Food Ordering System-------"<<endl;
    cout<<"\t\t\t|                                             |"<<endl;
    cout<<"\t\t\t|            Welcome to our Shop!             |"<<endl;
    cout<<"\t\t\t|    Press Y to continue and press N to exit  |"<<endl;
    cout<<"\t\t\t|                                             |"<<endl;
    cout<<"\t\t\t ---------------------------------------------"<<endl;

input:
    cout<< "\n\t\t\tPlease Enter  [y/n] : ";
    cin>> character;

    switch(character)
    {

    case 'y' :

        a.menu();
        a.choosemenu();
        a.getpayment();
        ta.taxi_driver();

    case 'n' :
        system("PAUSE");
        exit(EXIT_SUCCESS);
        break;
    default :

        cout << "\n\t\t\tYou enter wrong input"<<endl;
        goto input;
        break;


    }
       }
       return 0;
}
