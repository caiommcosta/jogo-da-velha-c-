#include <iostream>
#include "../globalVariables.h"
#include "ImpressTable.cpp"
#include "Choices.cpp"
#include "Verifications.cpp"

using namespace std;

int VerifyTime(int);
void Choices();

void Start()
{
    int i, x, y;
    bool isSelected, winner = 0;
    ImpressTable();
    do{
        GetChoice(x, y);

        isSelected = VerifySelected(x-1, y-1);
        if (isSelected) {
            cout << "Escolha um lugar não preenchido" << endl;
            continue;
        }
        else
            SetChoice(x-1, y-1);

        i++;    
        ImpressTable();
        if (i >= 5)
            winner = VerifyWinner();
        if (winner) {
            cout << "Jogador " << player << " venceu!!!" << endl;
        }
        if (i == 9 && !winner) {
            cout << "Ningúem venceu!!!" << endl;
        }
        player = VerifyAndSwitch(player);

    } while (!winner || i < 9);
}