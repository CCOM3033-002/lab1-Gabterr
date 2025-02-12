/*
Lab 1: Box Office
Nombre: Gabriel A. Ramos Rivera
Num. Est: 801-24-0582
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    // Displays the purpose of the program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n\n"; 

    // Declares variables for the movie name, adult and child tickets
    string movie;
    int adult, child;
    // Asks for the movie name
    cout << "Enter the name of the movie: "; 
    getline(cin, movie);
    // Asks for the amount of adult tickets sold
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adult;
    // Asks for the amount of child tickets sold
    cout << "Enter the amount of child tickets sold: ";
    cin >> child;

    // Calculates the GROSS box office profit
    double gross = adult * 10.0 + child * 6.0;
    // Calculates the NET box office profit
    double net = gross * 0.20;
    // Calculates the amount paid to distributor
    double distributor = gross - net;

    // Displays the full table 
    cout << "\nMovie name: " << setw(21) << "\"" << movie << "\"\n" 
    << "\nAdult Tickets Sold: " << setw(21) << adult << endl
    << "Child Tickets Sold: " << setw(21) << child << endl
    << "Gross Box Office Profit: " << setw(11) << "$ " << setw(8) << setprecision(2) << fixed << gross << endl
    << "Net Box Office Profit: " << setw(13) << "$ " << setw(8) << setprecision(2) << fixed << right << net << endl
    << "Amount Paid to Distributor: " << setw(8) << "$ " << setw(8) << setprecision(2) << fixed << distributor << endl;

    return 0;
}