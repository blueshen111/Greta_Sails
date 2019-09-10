// Jordan Steer-Furderer
// CIS 25
// This program determines how many days a 6064 mile sailing trip with a yacht speed range of 10 - 30 km will take.
//#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

// This functions uses a random number generator to choose a speed for a given day.
int dailySpeed(){
    return  rand() % 20 + 10;
}

int main()
{
srand(time(NULL));
cout << "Please choose number of trials you would like to run" << endl;
// the program begins to converge to the nearest tenth around 650 trials to 12.9 days
int trials;
cin >> trials;

// This while loop multiplies the speed in km/h by 24 hours to represent one full day, and continues looping unitl
// the sum reaches 6064 (miles).
float speedSum = 0;
float  sum = 0;
while (sum < 6064 * trials){

    float speed = dailySpeed();

    //cout << "If Greta travels at " << speed << " km/h" << endl;

    float distance = speed * 24;

    //cout << "then she will travel " << distance << " km that day" << endl;

    speedSum = speedSum + 1;

    sum = sum + distance;

   // cout << "and it will take her " << speedSum/trials << " days on average " << endl;
    if (sum/trials >= 6064){

    cout << "It takes Greta " << speedSum/trials << " days on average" << endl;
    cout << "to travel " << sum/trials << " km" << endl;

    }

sum++;

    }

}
