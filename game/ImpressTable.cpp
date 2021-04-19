#include <iostream>
#include "../globalVariables.h"

using namespace std;

void ImpressTable()
{
    for (int i=0; i<3; i++) {
        cout << "|";
        for (int j=0; j<3; j++) {
            cout << " " << table[i][j] << " ";
        }
        cout << "|" << endl;
    }
}