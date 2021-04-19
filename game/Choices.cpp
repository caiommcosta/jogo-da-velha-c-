#include <iostream>
#include "../globalVariables.h"

using namespace std;

void GetChoice(int &x, int &y)
{
    cout << "Jogador " << player << ": digite a LINHA de escolha [1,2,3]: ";
    cin >> x;
        cout << "Jogador " << player << ": digite a COLUNA de escolha [1,2,3]: ";
    cin >> y;
}

void SetChoice(int x, int y)
{
    tableWithNumbers[x][y] = player;
    if (player == 1)
        table[x][y] = 'O';
    else
        table[x][y] = 'X';
}