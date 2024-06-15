
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <conio.h>
#include <windows.h>

using namespace std;

int pk1 = 0, pk2 = 0, pk3 = 0;

void login()
{
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                   AIRLINE RESERVATION SYSTEM                          |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                            Made by AIZA EJAZ AND AREEBA JAMIL         |@@\n";
    cout << "\t\t\t\t\t@@|_|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    cout << "Press any key to continue...";
    getch();
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
    Sleep(500);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
    Sleep(500);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
    Sleep(500);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
    Sleep(2000);
}

class Member {
public:
    void main_menu();
    void reservation();
    void seat();
    void edit();
    void view_reservation();
    void load_data();
    void save_data();
    void schedule();
    void exit1();
    void instructions();
    void cancel_reservation();
    void cancel_reservation2();
    void view_reservation_by_id();
    void  view_as();

private:
    struct MemberInfo {
        string id;
        string name;
        string address;
        string contact;
        string depar;
        string desti;
        string seat_type;
    };

    vector<MemberInfo> m;
    int memberid = 0;
    int pk1 = 0, pk2 = 0, pk3 = 0,pk4=0;
    int choice;
};

void Member::instructions()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t   The most important thing to note while running this software is that first of all enter into main menu   " << endl;
    cout << "\t\t\t\t   and start with entering the members and than afterwards you can register the employes. This is a data    " << endl;
    cout << "\t\t\t\t   recording system in which you can easily record data of members and employes also if you enter into the  " << endl;
    cout << "\t\t\t\t   monetary database where you can also record the fee received from the members and calculate all the fee  " << endl;
    cout << "\t\t\t\t   received. This system also allows you to record the pay schedle of the employes that to which employe you" << endl;
    cout << "\t\t\t\t   have made the payment and which are left. At the end it also shows you that how much you have received   " << endl;
    cout << "\t\t\t\t   income from the members and how much you have paid. Than it shows the message that either you are in     " << endl;
    cout << "\t\t\t\t   Profit or Loss" << endl << endl;
    cout << "\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tPress any key to continue...";
    getch();
     main_menu();
}

void Member::schedule()
{

    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Flight Schedule ***" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t    Read the Schedule CAREFULLY before reserving your seat" << endl << endl;
    cout << "\t\t\t\t\t\t******************************************************************************" << endl << endl;
    cout << "\t\t\t\t\t\tNumber count        Flight Name        DEPARTURE       DESTINATION         Seats Left" << endl << endl;
    cout << "\t\t\t\t\t\t<1>                 pk001              Lahore          Karachi" << "\t\t" << 40 - pk1 << endl << endl;
    cout << "\t\t\t\t\t\t<2>                 pk001              Karachi         Lahore" << "\t\t" << 40 - pk2 << endl << endl;
    cout << "\t\t\t\t\t\t<3>                 pk002              Lahore          Sialkot" << "\t\t" << 60 - pk3 << endl << endl;
    cout << "\t\t\t\t\t\t<4>                 pk003              Sialkot         Lahore" << "\t\t" << 120 - pk4 << endl << endl;
    cout << "\t\t\t\t\t\t*******************************************************************************" << endl << endl;
    cout << "\t\t\t\t\t\tPress any key to continue...";
    getch();
     main_menu();
}

void Member::load_data() {
    ifstream infile("members.txt");
    if (infile.is_open()) {
        MemberInfo temp;
        while (getline(infile, temp.id)) {
            getline(infile, temp.name);
            getline(infile, temp.address);
            getline(infile, temp.contact);
            getline(infile, temp.depar);
            getline(infile, temp.desti);
            getline(infile, temp.seat_type);
            m.push_back(temp);
            memberid++;
        }
        infile.close();
    }
}

void Member::exit1()
{
     system("color 0C");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                              AIRLINE RESERVATION SYSTEM                               |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                               Made by AIZA EJAZ AND AREEBA JAMIL      |@@\n";
    cout << "\t\t\t\t\t@@|_|@@\n";
    cout <<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    exit(0);
    
}

void Member:: view_as()
{
     system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
     string pass;
     int ch;
    cout<<"\t\t\t\t\t**********************************************************"<<endl;
    cout<<"\t\t\t\t\t* Press 1 if u are controller and press 2 if u are user: *"<<endl;
    cout<<"\t\t\t\t\t**********************************************************"<<endl;

     cin>>ch;

     switch(ch){

      case 1:
      

       cout<<"Enter your password:"<<endl;
       cin>>pass;

       if(pass=="admin")
       {
        int a;
        cout<<"Press 1 to view all reservations and press 2 to cancel any reservation:"<<endl;
        cin>>a;
       if(a==1)

        view_reservation();
        else if(a==2)
        cancel_reservation2();
        else
        cout<<"invalid option"<<endl;
       }
     else
      {
      cout<<"Wrong password!!!"<<endl;
      cout<<"Press any key to go back:"<<endl;
      
      getch();
      
      view_as();
      
    }
    break;

     case 2:

        main_menu();

        break;

     default:
            cout << "\n\t\t\t\t\t\t\tInvalid choice! Please try again.";
            getch();

     }

}

void Member::save_data() {
    ofstream outfile("members.txt");
    if (outfile.is_open()) {
        for (const auto& member : m) {
            outfile << member.id << endl;
            outfile << member.name << endl;
            outfile << member.address << endl;
            outfile << member.contact << endl;
            outfile << member.depar << endl;
            outfile << member.desti << endl;
            outfile << member.seat_type << endl;
        }
        outfile.close();
    }
}

void Member::reservation() {
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tWelcome to the Airline Reservation System" << endl;
    cout << "\t\t\t\t\t\t\t*****************************************" << endl << endl;
    cout << "\t\t\t\t\t\t\tEnter your details to reserve a seat" << endl << endl;

    MemberInfo newMember;
    cout << "\t\t\t\t\t\t\tEnter Your ID: ";
    cin >> newMember.id;
    cout << "\t\t\t\t\t\t\tEnter Your Name: ";
    cin.ignore();
    getline(cin, newMember.name);
    cout << "\t\t\t\t\t\t\tEnter Your Address: ";
    getline(cin, newMember.address);
    cout << "\t\t\t\t\t\t\tEnter Your Contact Number: ";
    getline(cin, newMember.contact);
    cout << "\t\t\t\t\t\t\tEnter Your Departure Location: ";
    getline(cin, newMember.depar);
    cout << "\t\t\t\t\t\t\tEnter Your Destination Location: ";
    getline(cin, newMember.desti);
    cout << "\t\t\t\t\t\t\tEnter Your Seat Type (first-class/economy/Business): ";
    getline(cin, newMember.seat_type);

    m.push_back(newMember);

    // Update seat count based on destination and departure
    if (newMember.depar == "Lahore" && newMember.desti == "Karachi" ) {
        pk1++;
    }
    else if (newMember.depar == "Karachi" && newMember.desti == "Lahore") {
        pk2++;
    }
     else if (newMember.depar == "Lahore" && newMember.desti == "Sialkot") {
        pk3++;
    } else if (newMember.depar == "Sialkot" && newMember.desti == "Lahore") {
        pk4++;
    }

    // Save data to file
    save_data();

    cout << "\t\t\t\t\t\t\tYour seat has been reserved successfully!" << endl;
    cout << "\t\t\t\t\t\t\tPress any key to return to the main menu...";
    getch();
    main_menu();
}

void Member::view_reservation() {
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAll Reservations" << endl;
    cout << "\t\t\t\t\t\t\t****************" << endl << endl;

    for (const auto& member : m) {
        cout << "\t\t\t\t\t\t\tID: " << member.id << endl;
        cout << "\t\t\t\t\t\t\tName: " << member.name << endl;
        cout << "\t\t\t\t\t\t\tAddress: " << member.address << endl;
        cout << "\t\t\t\t\t\t\tContact: " << member.contact << endl;
        cout << "\t\t\t\t\t\t\tDeparture: " << member.depar << endl;
        cout << "\t\t\t\t\t\t\tDestination: " << member.desti << endl;
        cout << "\t\t\t\t\t\t\tSeat Type: " << member.seat_type << endl;
        cout << "\t\t\t\t\t\t\t----------------------------------------" << endl;
    }

    cout << "\t\t\t\t\t\t\tPress any key to return to the main menu...";
    getch();
    view_as();
}

void Member::cancel_reservation() {
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tCancel Reservation" << endl;
    cout << "\t\t\t\t\t\t\t******************" << endl << endl;

    string cancel_id;
    cout << "\t\t\t\t\t\t\tEnter the ID of the reservation you want to cancel: ";
    cin >> cancel_id;
  //This line uses the find_if algorithm to search for the reservation in the m vector (which holds all reservations).
    auto it = find_if(m.begin(), m.end(), [&cancel_id](const MemberInfo& member) {
        return member.id == cancel_id;
    });

    if (it != m.end()) {
        m.erase(it);
        cout << "\t\t\t\t\t\t\tReservation cancelled successfully!" << endl;

        // Save data to file
        save_data();
    } else {
        cout << "\t\t\t\t\t\t\tReservation ID not found!" << endl;
    }

    cout << "\t\t\t\t\t\t\tPress any key to return to the main menu...";
    getch();
    main_menu();
}
void Member::cancel_reservation2() {
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tCancel Reservation" << endl;
    cout << "\t\t\t\t\t\t\t******************" << endl << endl;

    string cancel_id;
    cout << "\t\t\t\t\t\t\tEnter the ID of the reservation you want to cancel: ";
    cin >> cancel_id;
  //This line uses the find_if algorithm to search for the reservation in the m vector (which holds all reservations).
    auto it = find_if(m.begin(), m.end(), [&cancel_id](const MemberInfo& member) {
        return member.id == cancel_id;
    });

    if (it != m.end()) {
        m.erase(it);
        cout << "\t\t\t\t\t\t\tReservation cancelled successfully!" << endl;

        // Save data to file
        save_data();
    } else {
        cout << "\t\t\t\t\t\t\tReservation ID not found!" << endl;
    }

    cout << "\t\t\t\t\t\t\tPress any key to return to the main menu...";
    getch();
    view_as();

}


void Member::view_reservation_by_id() {
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tView Reservation by ID" << endl;
    cout << "\t\t\t\t\t\t\t***********************" << endl << endl;

    string search_id;
    cout << "\t\t\t\t\t\t\tEnter your ID: ";
    cin >> search_id;

    auto it = find_if(m.begin(), m.end(), [&search_id](const MemberInfo& member) {
        return member.id == search_id;
    });

    if (it != m.end()) {
        cout << "\t\t\t\t\t\t\tID: " << it->id << endl;
        cout << "\t\t\t\t\t\t\tName: " << it->name << endl;
        cout << "\t\t\t\t\t\t\tAddress: " << it->address << endl;
        cout << "\t\t\t\t\t\t\tContact: " << it->contact << endl;
        cout << "\t\t\t\t\t\t\tDeparture: " << it->depar << endl;
        cout << "\t\t\t\t\t\t\tDestination: " << it->desti << endl;
        cout << "\t\t\t\t\t\t\tSeat Type: " << it->seat_type << endl;
    } else {
        cout << "\t\t\t\t\t\t\tReservation ID not found!" << endl;
    }

    cout << "\t\t\t\t\t\t\tPress any key to return to the main menu...";
    getch();
    main_menu();
}

void Member::main_menu()
{
    system("cls");
   
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************" << endl;
    cout << "\t\t\t\t\t\t\t\t*                                                   *" << endl;
    cout << "\t\t\t\t\t\t\t\t*              AIRLINE RESERVATION SYSTEM           *" << endl;
    cout << "\t\t\t\t\t\t\t\t*                                                   *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    1. Reserve a Seat                              *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    2. View Reservations                           *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    3. Cancel Reservation                          *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    4. View Instructions                           *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    5. Flight Schedule                             *" << endl;
    cout << "\t\t\t\t\t\t\t\t*    6. Exit                                        *" << endl;
    cout << "\t\t\t\t\t\t\t\t*                                                   *" << endl;
    cout << "\t\t\t\t\t\t\t\t*****************************************************" << endl;
    cout << "\t\t\t\t\t\t\t\t* Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            reservation();
            break;
        case 2:
            view_reservation_by_id();
            break;
        case 3:
            cancel_reservation();
            break;
        case 4:
            instructions();
            break;
        case 5:
            schedule();
            break;
        case 6:
            exit1();
            break;
        default:
            cout << "\n\t\t\t\t\t\t\tInvalid choice! Please try again.";
            getch();
            main_menu();
            break;
    }
}

int main()
{
      system("color 0B");
    Member member;
    member.load_data();
    login();
    member.view_as();
    member.main_menu();
    return 0;
}
