/*

https://pl.spoj.com/problems/BFN1/

###################
#### COMPLETED ####
###################

*/ 

#include <iostream>
using namespace std;

int main()
{
    int ileLiczb;
    cin >> ileLiczb;

    for (int i = 0; i < ileLiczb; i++)
    {
        int licznik = 0;
        string liczbaTekstowo;
        cin >> liczbaTekstowo;
        int liczba = stoi(liczbaTekstowo);
        int odwrocona = 0;
        string temp = "";

        do
        {
            for (int j = liczbaTekstowo.length() - 1; j >= 0; j--)
            {
                temp += liczbaTekstowo[j];
            }

            odwrocona = stoi(temp);

            if (liczba == odwrocona)
            {
                break;
            }

            licznik++;
            liczba += odwrocona;
            liczbaTekstowo = to_string(liczba);
            temp = "";
        }

        while (true);

        cout << liczba << " " << licznik << endl;
    }

    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/ 
