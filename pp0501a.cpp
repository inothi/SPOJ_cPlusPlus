/*

https://pl.spoj.com/problems/PP0501A

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
    int ile, a, b;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {
        cin >> a; cin >> b;
        cout << nwd (a, b) << endl;
    }

    return 0;
}

/*

###################
#### COMPLETED ####
###################

*/
