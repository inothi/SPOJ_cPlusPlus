/*

https://pl.spoj.com/problems/RNO_DOD/

###################
#### COMPLETED ####
###################

*/

#include <iostream>

using namespace std;

int main()
{
    int testy, liczby, wartosci, suma;
    int* temp = new int[wartosci];

    cout << "podaj liczbe testow: ";
    cin >> testy;

    if ((testy > 100) || (testy < 0))
    {
        return 0;
    }

    for (int i = 0; i < testy; i++)
    {
        cout << "ile liczb: ";
        cin >> liczby;

        for (int j = 0; j < liczby; j++)
        {
            cin >> temp[j];
            suma += temp[j];
        }
        cout << suma << endl;
        suma = 0;
    }


    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
