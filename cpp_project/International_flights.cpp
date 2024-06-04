#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string air_l[19]=
    {{"Airline         Departure  Arrival   Price     Category"},
    {"Qatar Airways      10:00     14:10   US$1000   Refundable"},
    {"Qatar Airways      10:00     14:10   US$700    Refundable"},
    {"Qatar Airways      10:00     14:10   US$800    Refundable"},
    {"Qatar Airways      10:00     14:10   US$1100   Refundable"},
    {"Qatar Airways      10:00     14:10   US$650    Refundable"},
    {"Qatar Airways      10:00     14:10   US$950    Refundable"},
    {"Etihad Airways     14:00     18:05   US$980    Refundable"},
    {"Etihad Airways     14:00     18:05   US$700    Refundable"},
    {"Etihad Airways     14:00     18:05   US$850    Refundable"},
    {"Etihad Airways     14:00     18:05   US$1000   Refundable"},
    {"Etihad Airways     14:00     18:05   US$700    Refundable"},
    {"Etihad Airways     14:00     18:05   US$980    Refundable"},
    {"Emirates           18:00     22:05   US$950    Refundable"},
    {"Emirates           18:00     22:05   US$680    Refundable"},
    {"Emirates           18:00     22:05   US$800    Refundable"},
    {"Emirates           18:00     22:05   US$1000   Refundable"},
    {"Emirates           18:00     22:05   US$600    Refundable"},
    {"Emirates           18:00\    22:05   US$1000   Refundable"}};
    string initial,destination,choicei,time_of_departure,time_of_arrival,flight_selected;

    while(true){
        if((initial=="Islamabad" && destination=="Moscow") || (initial=="Moscow" && destination=="Islamabad"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[1]<<endl<<air_l[7]<<endl<<air_l[13]<<endl;
            break;}
        else if((initial=="Moscow" && destination=="Beijing") || (initial=="Beijing" && destination=="Moscow"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[2]<<endl<<air_l[8]<<endl<<air_l[14]<<endl;
            break;}
        else if((initial=="Newyork" && destination=="Islamabad") || (initial=="Islamabad" && destination=="Newyork"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[3]<<endl<<air_l[9]<<endl<<air_l[15]<<endl;
            break;}
        else if((initial=="Newyork" && destination=="Beijing") || (initial=="Beijing" && destination=="Newyork"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[4]<<endl<<air_l[10]<<endl<<air_l[16]<<endl;
            break;}
        else if((initial=="Islamabad" && destination=="Beijing") || (initial=="Beijing" && destination=="Islamabad"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[5]<<endl<<air_l[11]<<endl<<air_l[17]<<endl;
            break;        }
        else if((initial=="Newyork" && destination=="Moscow") || (initial=="Moscow" && destination=="Newyork"))//condition
        {
            cout <<air_l[0]<<endl<<air_l[6]<<endl<<air_l[12]<<endl<<air_l[18]<<endl;
            break;}
        else if(initial==destination)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            }
}
    while(true){
        cout << "\nEnter Airline choice(Airline Name)" << endl;
        getline(cin,choicei);
        transform(choicei.begin(),choicei.end(),choicei.begin(),::tolower);
        if(choicei=="qatar airways"){//condition
            cout << "\nFlight selected:" <<endl;
            cout << "Qatar Airways" << endl;
            flight_selected="Qatar Airways";//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            time_of_departure="10:00";//copy to string
            time_of_arrival="14:05";//copy to string
            break;
        }
        else if(choicei=="etihad airways"){//condition
            cout << "\nFlight selected:" << endl;
            cout << "Etihad Airways" << endl;
            flight_selected="Etihad Airways";//copy to string
            cout << "Departure Time: 14:00" << endl;
            cout << "Arrival Time: 18:05" << endl;
            time_of_departure="14:00";//copy to string
            time_of_arrival="18:05";//copy to string
            break;}
        else if(choicei=="emirates"){//condition
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            flight_selected="Emirates";//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            time_of_departure="18:00";//copy to string
            time_of_arrival="22:05";//copy to string
            break;}
        else{//condition
            cout << "Wrong input entered" << endl;
        }
    }
    return 0;
}
