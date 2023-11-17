/*

https://pl.spoj.com/problems/PP0504B
Ver. 1.0

###################
#### COMPLETED ####
###################

*/ 

#include <iostream>
using namespace std;

int main()
{
    int t, dlugosc;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string data1, data2;
        cin >> data1; cin >> data2;

        if (data1.length() >= data2.length())
        {
            dlugosc = data2.length();
        }

        else
        {
            dlugosc = data1.length();
        }

        for (int j = 0; j < dlugosc; j++)
        {
            cout << data1[j];
            cout << data2[j];
        }

        cout << endl;
    }

    return 0;

}

/*

https://pl.spoj.com/problems/PP0504B
Ver. 1.0

###################
#### COMPLETED ####
###################

*/ 
