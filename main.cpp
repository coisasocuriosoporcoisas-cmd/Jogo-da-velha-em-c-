#include <iostream>
#include "Functions.hpp"

using namespace std;

int main()
{
    int opcao;
    int matrix[9] = {0};

    do
    {
        cout << "=============================\n";
        cout << "       JOGO DA VELHA\n";
        cout << "=============================\n";
        cout << "1 - Iniciar partida\n";
        cout << "2 - Mostrar tabuleiro\n";
        cout << "3 - Reiniciar tabuleiro\n";
        cout << "4 - Sair\n";
        cout << "=============================\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            int p1, p2;

            cout << "\nJogador 1 (0-8): ";
            cin >> p1;

            cout << "Jogador 2 (0-8): ";
            cin >> p2;

            Jogo(p1, p2, matrix);

            break;
        }

        case 2:
            MostraMatrix(matrix);
            break;

        case 3:
            for (int i = 0; i < 9; i++)
                matrix[i] = 0;

            cout << "\nTabuleiro reiniciado!\n";
            break;

        case 4:
            cout << "\nEncerrando o jogo...\n";
            break;

        default:
            cout << "\nOpcao invalida!\n";
        }

        cout << endl;

    } while (opcao != 4);

    return 0;
}