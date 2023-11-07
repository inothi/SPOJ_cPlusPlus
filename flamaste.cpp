/*

https://pl.spoj.com/problems/FLAMAST

###################
## NOT COMPLETED ##
###################

*/

#include <iostream>

using namespace std;

int main()
{
    int ilosc_wyrazow;
    cout << "Podaj ilosc wyrazow (od 1 do 50): ";
    cin >> ilosc_wyrazow;
    while ((ilosc_wyrazow > 50) || (ilosc_wyrazow < 1))
    {
        cout << "Bledna ilosc wyrazow." << endl;
        cout << "Podaj ilosc wyrazow (od 1 do 50): ";
        cin >> ilosc_wyrazow;
    }

    string *wyrazy = new string[ilosc_wyrazow];
    for (int i = 0; i < ilosc_wyrazow; i++)
    {
        cin >> wyrazy[i];
    }

    cout << wyrazy[1] << endl;
    cout << wyrazy[3] << endl;

    delete [] wyrazy;
    return 0;
}

/*

###################
## NOT COMPLETED ##
###################

*/
