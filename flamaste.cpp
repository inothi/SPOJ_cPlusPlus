/*

https://pl.spoj.com/problems/FLAMAST

###################
#### COMPLETED ####
###################

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int ilosc_wyrazow;
    cin >> ilosc_wyrazow;

    for (int i = 0; i < ilosc_wyrazow; i++)
    {
        string slowo;
        cin >> slowo;
        string przechowalnia = "";
        int licznik = 1, j = 0;

        while (j < slowo.length())
        {
            licznik = 1;
            char litera = slowo[j];
            j++;

            for (; j < slowo.length() && slowo[j] == litera; j++)
            {
                licznik++;
            }

            if (licznik == 1)
            {
                przechowalnia += toupper(litera);
            }

            else if (licznik == 2)
            {
                przechowalnia += toupper(litera);
                przechowalnia += toupper(litera);
            }

            else if (licznik > 2)
            {
                przechowalnia += toupper(litera);
                przechowalnia += to_string(licznik);
            }
        }

        cout << przechowalnia;
    }

    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
