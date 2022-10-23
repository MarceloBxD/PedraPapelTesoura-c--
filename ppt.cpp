// Incluindo bibliotecas utilizadas
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX 3
#define MAX_NOME 10

char player(int);
int computador();

using namespace std;

int main()
{
    int num;

    cout << "\n<----- Pedra Papel Tesoura (c++) ----->" << endl;

    do
    {
        cout << "\nDigite o numero da sua jogada: (1) Pedra | (2) Papel | (3) Tesoura" << endl;
        cin >> num;

        if (num < 1 || num > 3)
        {
            cout << "Numero invalido!" << endl;
        }
    } while (num < 1 || num > 3);

    player(num);

    // cout << "\nVoce jogou " << num << endl;

    computador();

    system("pause");
    system("cls");

    return 0;
}

char player(int jogada)
{
    if (jogada == 1)
    {
        cout << "\nVoce jogou pedra" << endl;
    }
    else if (jogada == 2)
    {
        cout << "\nVoce jogou papel" << endl;
    }
    else if (jogada == 3)
    {
        cout << "\nVoce jogou tesoura" << endl;
    }
}

int computador()
{

    int numero;
    srand(time(NULL));

    numero = rand() % 3 + 1;

    if (numero == 1)
    {
        cout << "O computador jogou pedra" << endl;
    }
    else if (numero == 2)
    {
        cout << "O computador jogou papel" << endl;
    }
    else if (numero == 3)
    {
        cout << "O computador jogou tesoura" << endl;
    }

    return numero;
}