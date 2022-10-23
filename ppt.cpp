// Incluindo bibliotecas utilizadas
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX 3
#define MAX_NOME 10

char usuario(int);
int computador();

using namespace std;

int usuario()
{
    int num;

    do
    {
        cout << "\nSua jogada: ";
        cin >> num;

        if (num < 1 || num > 3)
        {
            cout << "INVALIDO! DIGITE OUTRO" << endl;
        }
    } while (num < 1 || num > 3);

    return num;
}

char jogada(int j)
{
    if (j == 1)
    {
        cout << "\nVoce jogou pedra" << endl;
    }
    else if (j == 2)
    {
        cout << "\nVoce jogou papel" << endl;
    }
    else if (j == 3)
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

char resultado(int a, int b)
{

    int empate = 0;

    if (a == 1 && b == 2)
    {
        cout << "\nPapel cobre pedra" << endl;
        cout << "\nComputador Wins!" << endl;
    }
    else if (a == 1 && b == 3)
    {
        cout << "\nPedra amassa tesoura" << endl;
        cout << "\nVoce ganhou!" << endl;
    }
    else if (a == 2 && b == 1)
    {
        cout << "\nPapel cobre pedra!" << endl;
        cout << "\nVoce ganhou!" << endl;
    }
    else if (a == 2 && b == 3)
    {
        cout << "\nTesoura corta papel" << endl;
        cout << "\nComputador Wins!" << endl;
    }
    else if (a == 3 && b == 1)
    {
        cout << "\nPedra amassa tesoura" << endl;
        cout << "\nComputador Wins!" << endl;
    }
    else if (a == 3 && b == 2)
    {
        cout << "\nTesoura corta papel!" << endl;
        cout << "\nVoce ganhou!" << endl;
    }
    else
    {
        cout << "\nEMPATE! JOGUE NOVAMENTE!!!" << endl;
        empate = 1;
    }
}

int main()
{
    srand(time(NULL));
    int jogada_usuario, jogada_computador, empate;

    cout << "<---------- (1) Pedra | (2) Papel | (3) Tesoura ---------->" << endl;

    do
    {
        jogada_usuario = usuario();
        jogada(jogada_usuario);
        jogada_computador = computador();
        empate = resultado(jogada_usuario, jogada_computador);
    } while(empate == 1);

    system("pause");
    system("cls");

    return 0;
}