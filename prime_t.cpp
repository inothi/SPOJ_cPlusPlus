#include <iostream>

using namespace std;

int main()
{
    int ileLiczb; //how many numbers will be enter
    cin >> ileLiczb;

    int* jakieLiczby = new int[ileLiczb]; //size of array from 'ileLiczb'

    for (int i = 0; i < ileLiczb;) //loop adding numbers to the array
    {
        cin >> jakieLiczby[i];
        if ((jakieLiczby[i] >= 1) && (jakieLiczby[i] <= 10000)) //check entered numbers
        {
            i++; //if condition fulfilled, increment
        }
    }

    delete [] jakieLiczby; //delete array from memory

    return 0;
}
