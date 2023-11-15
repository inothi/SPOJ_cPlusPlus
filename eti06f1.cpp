/*

https://pl.spoj.com/problems/ETI06F1

###################
#### COMPLETED ####
###################

*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

double zaokraglanie (double poleKola)
{
    return round (poleKola*100) / 100;
}

int main()
{
    double pi = 3.141592654;
    double r;
    double d;
    cin >> r;
    cin >> d;

    double pitagoras;
    pitagoras = ((r * r) - (d / 2) * (d / 2));
    double promienKola = sqrt(pitagoras);
    double poleKola = pi * (promienKola * promienKola);
    double wynik = zaokraglanie(poleKola);

    cout << fixed << setprecision(2) << wynik << endl;
    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
