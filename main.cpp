#include <iostream>
#include "globalVariables.h"
#include "game/Start.cpp"

using namespace std;

bool Restart(void);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    bool x;
    do {
        Start();
        bool x = Restart();
    } while (x == true);

    return 0;
}
bool Restart()
{
    char resposta;
    cout  << "Deseja continuar jogando? [S/N]" << endl;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        return true;
    else
        return false;

    return false;
}