/*
//  Website: onlinejudge.org
//  Coding Problem: 161 - Traffic Lights

    ah help
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{   vector<int> BaseArray;
    vector<int> CountArray;
    int i;
    int j;

    ifstream file;
    file.open ("in1");

    file >> j;

    while (j=! 0){
        for ( i = 0; i < 100; i++)
        {
            file >> BaseArray[i];
        }
        
    }

    for (i = 0; i < 100; i++)
    {
       cout << BaseArray[i] << endl;
    }

    return 0;
}



