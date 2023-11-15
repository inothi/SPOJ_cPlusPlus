/*

https://pl.spoj.com/problems/PP0502B

###################
#### COMPLETED ####
###################

*/

#include <iostream>

using namespace std;

int main()
{
    int ileTestow;
    cin >> ileTestow;

    for (int i = 0; i < ileTestow; i++)
    {
        int ileLiczb;
        cin >> ileLiczb;
        int* tablicaLiczb = new int[ileLiczb];

        for (int j = 0; j < ileLiczb; j++)
        {
            cin >> tablicaLiczb[j];
        }

        for (int k = ileLiczb - 1; k >= 0; k--)
        {
            cout << tablicaLiczb[k] << " ";
        }

        cout << endl;
        delete [] tablicaLiczb;
    }

    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
