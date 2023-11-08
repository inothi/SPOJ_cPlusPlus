/*

https://pl.spoj.com/problems/PRZEDSZK

###################
#### COMPLETED ####
###################

*/
  
#include <iostream>
using namespace std;

int nwd (int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b, d;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cin >> a; cin >> b;
        cout << (a * b) / nwd(a, b) << endl;
    }

    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
