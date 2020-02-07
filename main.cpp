#include <iostream>

using namespace std;




int main(string PIN)
{
    cout << "Witaj w banku, podaj PIN: " << endl;




    for(string PIN; PIN<=3;PIN++)
    {
        cin >> PIN;
    }


    if (PIN=="0555")
    {
        cout << "poprawny pin, wybierz opcje z listy: ";
    }
        else
    {
        cout << "niepoprawny pin, sprobuj ponownie";
    }











}
