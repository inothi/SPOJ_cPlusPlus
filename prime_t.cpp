//###################//
//#### COMPLETED ####//
//###################//

#include <iostream>
using namespace std;

bool czyPierwsza(int n) //function that will be checks the entered number is prime (bool = true or false only)
{
    if (n <= 1) //condition checks the entered number is lower or equal 1
    {
        return false; //if condition fulfilled return false
    }

    for (int i = 2; i * i <= n; i++) //loop checks the largest divisor from square root of entered number
    {
        if (n % i == 0) //if modulo from entered number and the largest divisor is equal 0 then return false and stop loop
        {
            return false;
            break;
        }
    }
    return true; //if condition is not fulfilled, return true
}

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

    for (int j = 0; j < ileLiczb; j++) //var, check j number from array using 'czyPierwsza' function
    {
        if (czyPierwsza(jakieLiczby[j]) == true) //condition checks that 'j' number from array is prime by 'czyPierwsza' function
        {
            cout << "TAK" << endl; //if condition fulfilled display "TAK"
        }
        else
        {
            cout << "NIE" << endl; //if condition is not fulfilled display "NIE"
        }
    }

    delete [] jakieLiczby; //delete array from memory
    return 0;
}

//###################//
//#### COMPLETED ####//
//###################//
