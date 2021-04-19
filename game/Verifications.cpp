#include <iostream>
#include "../globalVariables.h"

using namespace std;


bool VerifySelected(int x, int y)
{
    if (tableWithNumbers[x][y] != 0)
        return true;
    else
        return false;
}

bool VerifyWinner()
{
    int sequence = 0;
    // HORIZONTAL
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sequence += tableWithNumbers[i][j];
        }
        if (sequence == 3 || sequence == -3)
            return true;
        sequence = 0;
    }
    // VERTICAL
    for (int i=0; i<3; i++) {
        for (int j=2; j<0; j--) {
            sequence += tableWithNumbers[i][j];
        }
        if (sequence == 3 || sequence == -3)
            return true;
        sequence = 0;
    }
    // DIAGONAL 1
    for (int i=0, j=0; i<3; i++, j++) {
        sequence += tableWithNumbers[i][j];
    }
    if (sequence == 3 || sequence == -3)
        return true;

    sequence = 0;
    // DIAGONAL 2
    for (int i=0, j=2; i<3; i++, j--) {
        sequence += tableWithNumbers[i][j];
    }
    if (sequence == 3 || sequence == -3)
        return true;

    return false;
}

int VerifyAndSwitch(int p)
{
    if (p == 1) {
        p = -1;
        return p;
    }
    else
        p = 1;
    return p;
}