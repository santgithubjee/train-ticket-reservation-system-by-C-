#include <iostream>
#include <fstream>// for files handling operation
#include <iomanip>// floating point values

using namespace std;

void mainMenu();


class management
{
    public:
       management ()

           {

             mainMenu();

           }
};
class Details
{
     public:

         static string name , gender ;
         int phoneNo;
         int age;
         string address;
         static int cId;
         char arr[100];

    void information()
    {
      cout<<"\n Enter the Customer ID : ";
      cin>> cId;

      cout<<"\n Enter your good Name :";
      cin>>name ;

      cout<<"\n Enter your Age :";
      cin>>age ;

      cout<<"\n Address :";
      cin>>address;

      cout<<"\n Gender :";
      cin>>gender;

      cout<<"\n your details are saved with us \n"<<endl;
      }


};
int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:

      static int choice;
      int choice1;
      int back;
      static float charges;

    void trains()
          {
            string trainN[]={"Delhi", "Mumbai", "Kolkata", "Hyderabad", "Pune", "Bengaluru"};


            for(int a=0; a<6; a++)
              {
                cout << (a+1)<<".Train to "<<trainN[a]<<endl;
              }
            cout <<"\n Welcome to the train ticket booking!"<<endl;
            cout << "Press the name of the station of which you want too book the ticket : ";
            cin >> choice;
            switch(choice)
            {
            case 1:

              {
              cout<<"_____________Welcome to Delhi______________\n"<<endl;
              cout << "Your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" Floowing are the trains \n "<<endl;

              cout << "1. DEL-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:30 AM 17hrs Rs-1350 "<<endl;
              cout << "1. DEL-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. DEL-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:30 AM 17hrs Rs-1300 "<<endl;
              cout << "1. DEL-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:00 AM 17hrs Rs-1350 "<<endl;

              cout <<"\n Select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1350;
                  cout<<"\n You have successfully booked the train DEL-EXP1"<<endl;
                  cout<<"You can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n You have successfully booked the train DEL-EXP2"<<endl;
                  cout<<"You can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1300;
                  cout<<"\n you have successfully booked the train DEL-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1350;
                  cout<<"\n you have successfully booked the train DEL-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "Invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
              case 2:
              { cout<<"_____________welcome to Mumbai trains______________\n"<<endl;
              cout << "your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" floowing are the trains \n "<<endl;

              cout << "1. MUM-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:50 AM 17hrs Rs-1550 "<<endl;
              cout << "1. MUM-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. MUM-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:45 AM 17hrs Rs-1500 "<<endl;
              cout << "1. MUM-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:35 AM 17hrs Rs-1650 "<<endl;

              cout <<"\n select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1550;
                  cout<<"\n you have successfully booked the train MUM-EXP1"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n you have successfully booked the train MUM-EXP2"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1500;
                  cout<<"\n you have successfully booked the train MUM-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1650;
                  cout<<"\n you have successfully booked the train MUM-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
            case 3:
              { cout<<"_____________welcome to Kolkata trains______________\n"<<endl;
              cout << "your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" floowing are the trains \n "<<endl;

              cout << "1. KOL-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:50 AM 17hrs Rs-1550 "<<endl;
              cout << "1. KOL-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. KOL-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:45 AM 17hrs Rs-1500 "<<endl;
              cout << "1. KOL-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:35 AM 17hrs Rs-1650 "<<endl;

              cout <<"\n select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1550;
                  cout<<"\n you have successfully booked the train KOL-EXP1"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n you have successfully booked the train KOL-EXP2"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1500;
                  cout<<"\n you have successfully booked the train KOL-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1650;
                  cout<<"\n you have successfully booked the train KOL-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
              case 4:
              { cout<<"_____________welcome to Hydrabad trains______________\n"<<endl;
              cout << "your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" floowing are the trains \n "<<endl;

              cout << "1. HYD-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:50 AM 17hrs Rs-1550 "<<endl;
              cout << "1. HYD-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. HYD-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:45 AM 17hrs Rs-1500 "<<endl;
              cout << "1. HYD-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:35 AM 17hrs Rs-1650 "<<endl;

              cout <<"\n select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1550;
                  cout<<"\n you have successfully booked the train HYD-EXP1"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n you have successfully booked the train HYD-EXP2"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1500;
                  cout<<"\n you have successfully booked the train HYD-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1650;
                  cout<<"\n you have successfully booked the train HYD-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
              case 5:
              { cout<<"_____________welcome to pune trains______________\n"<<endl;
              cout << "your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" floowing are the trains \n "<<endl;

              cout << "1. PUN-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:50 AM 17hrs Rs-1550 "<<endl;
              cout << "1. PUN-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. PUN-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:45 AM 17hrs Rs-1500 "<<endl;
              cout << "1. PUN-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:35 AM 17hrs Rs-1650 "<<endl;

              cout <<"\n select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1550;
                  cout<<"\n you have successfully booked the train PUN-EXP1"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n you have successfully booked the train PUN-EXP2"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1500;
                  cout<<"\n you have successfully booked the train PUN-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1650;
                  cout<<"\n you have successfully booked the train PUN-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
              case 6:
              { cout<<"_____________welcome to Bengaluru trains______________\n"<<endl;
              cout << "your comfort is our priority .Enjoy the journey! "<<endl;

              cout <<" floowing are the trains \n "<<endl;

              cout << "1. BEN-EXP1"<<endl;
              cout <<"\t 08-10-2022 7:50 AM 17hrs Rs-1550 "<<endl;
              cout << "1. BEN-EXP2"<<endl;
              cout <<"\t 08-10-2022 9:00 AM 17hrs Rs-1450 "<<endl;
              cout << "1. BEN-EXP3"<<endl;
              cout <<"\t 08-10-2022 10:45 AM 17hrs Rs-1500 "<<endl;
              cout << "1. BEN-EXP4"<<endl;
              cout <<"\t 08-10-2022 11:35 AM 17hrs Rs-1650 "<<endl;

              cout <<"\n select the train you want to book :";
                cin >> choice1;
                if (choice1==1)
                {
                  charges=1550;
                  cout<<"\n you have successfully booked the train BEN-EXP1"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;

                }
                else if (choice1==2)
                {
                  charges=1450;
                  cout<<"\n you have successfully booked the train BEN-EXP2"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==3)
                {
                  charges=1500;
                  cout<<"\n you have successfully booked the train BEN-EXP3"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else if (choice1==4)
                {
                  charges=1650;
                  cout<<"\n you have successfully booked the train BEN-EXP4"<<endl;
                  cout<<"you can go back to the menu and take the ticket "<<endl;
                }
                else
                {
                  cout << "invalid input ,shifting to the previous menu"<<endl;
                  trains();

                }
                  cout<< "press any key to go back to the main menu"<<endl;
                  cin >> back;
                if(back == 1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu();
                }

              }
              default:
              {
                cout <<"invalid input ,shifting to the mainMenu :"<<endl;
                mainMenu();
                break;
              }
            }


          }


};
float registration::charges;
int registration::choice;
class ticket: public registration, Details
{
    public:

  void Bill()
  {
       string destination="";
       ofstream outf("records.txt");
    {
       outf <<"___________Indian trains _________________"<<endl;
       outf <<"______________ticket____________________"<<endl;
       outf << "________________________________________"<<endl;


      outf << "Customer id :" << Details::cId<<endl;
      outf << "customer name :"<< Details::name<<endl;
      outf << "customer gender: "<<Details::gender<<endl;
      outf << "\t Deacription :"<<endl<<endl;

      if (registration::choice==1)
      {
        destination ="Delhi";

      }
      else if (registration::choice==2)
      {
        destination ="Mumbai";

      }
       else if (registration::choice==3)
      {
        destination ="Kolkata";

      }
       else if (registration::choice==4)
      {
        destination ="Hudrabad";

      }
       else if (registration::choice==5)
      {
        destination ="Pune";

      }
       else if (registration::choice==6)
      {
        destination ="Bengaluru";

      }
      outf << "Destination\t\t"<<destination<<endl;
      outf <<"train cost:\t\t"<<registration::charges<<endl;


    }
     outf.close();

  }
  void dispBill()
  {
    ifstream ifs("records.txt");
    {
      if (!ifs)
      {
        cout <<"fike error !"<<endl;


      }
      while(!ifs.eof())
        {
          ifs.getline(arr,100);
          cout<<arr<<endl;

        }


    }
    ifs.close();
  }






};





void mainMenu()
{
   int lchoice;
   int schoice;
   int back;


   cout <<" \t        Indian trains       \n" << endl;
   cout <<"\t_________Main Menu________________________" << endl;
   cout <<"______________________________________________" << endl;
   cout <<"\t|\t\t\t\t|\t" << endl;

   cout << "\t|\t press 1 to enter the customer Details   \t|"<< endl;
   cout << "\t|\t press 2 for train ticket registration   \t|"<< endl;
   cout << "\t|\t press 3 ticket and charges    \t|"          << endl;
   cout << "\t|\t press 4 to exit   \t|"                      << endl;
   cout <<"\t|\t\t\t\t|\t"                                    << endl;
   cout <<"____________________________________________"      << endl;
   cout << "Enter your choice : ";
   cin >> lchoice;


  Details d;
  registration r;
  ticket t;


  switch(lchoice)
    {
      case 1:
        {
        cout << "____________Coustomers_______________\n"<< endl;
            d.information();
            cout << " press any key to go back to the main menu ";
            cin >> back;
            if(back==1)
            {
              mainMenu();

            }
            else
            {
              mainMenu();
            }
          break;
        }
      case 2:
      {
        cout <<"_________Book a train ticket using this system_______\n"<< endl;
        r.trains();
        break;

      }
      case 3:
      {
        cout <<"______GET YOUR BOOKED TICKET______\n"<< endl;
        t.Bill();

        cout <<" your ticked is booked ,you can print your ticket \n"<< endl;
        cout << "press 1 to display your ticket ";

        cin >> back;
        if(back==1)
        {
          t.dispBill();
          cout << "press any key to go back to main menu : ";
          cin >> back;
          if(back==1)
          {
            mainMenu();
          }
          else
          {
            mainMenu();

          }
        }
        else
        {
          mainMenu();
        }
        break;

      }
      case 4:
      {
        cout <<"\n\n\t____________Thank You !_____________"<<endl;
        break;
      }
      default :
      {
        cout << " please give a valid input !\n"<< endl;
        mainMenu();
        break;

      }
    }
}
int main ()
{
  management Mobj;
  return 0;
}
