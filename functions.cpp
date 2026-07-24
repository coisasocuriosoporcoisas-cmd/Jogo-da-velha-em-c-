#include <iostream>
#include <string.h>

int Matrix_de_jogo[9] = {0}; // deveria ser matrix
int *matrix_de_jogo = Matrix_de_jogo;

void PontuacaoJogo(int statusGame)
{
    int pont = 0, pont2 = 0;
    if (statusGame == 1)
    {
        pont += 1;
    }
    else if (statusGame == 2)
    {
        pont2 += 1;
    }
    else
    {
        std::cout << "ninguem marcou ainda" << std::endl;
    }
    std::cout << "|----placa------|" << std::endl;
    std::cout << "|----JOGADOR1---|" << pont << std::endl;
    std::cout << "|----JOGADOR2---|" << pont2 << std::endl;
    std::cout << "\n"
              << std::endl;
}
bool ValidarArray(int posicaoJogo, int *matrix)
{
    if (matrix[posicaoJogo] < 0 || matrix[posicaoJogo] > 8)
    {

        std::cout << "posição invalida" << std::endl;
        return false;
    }
    else if (matrix[posicaoJogo] == 0)
    {
        std::cout << "item add" << std::endl;
        return true;
    }
    else
    {
        std::cout << "posição oculpada" << std::endl;
        return false;
    }
}
int ValidaPosicaoJogo(int *matrix) // valor será x ou o.
{
    const int ValoresVitoria[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}}; // criamos combinações possíveis para o jogo

    for (int i = 0; i < 8; i++)
    {
        int a = ValoresVitoria[i][0];
        int b = ValoresVitoria[i][1];
        int c = ValoresVitoria[i][2];
        if (matrix[a] != 0 && matrix[a] == matrix[b] && matrix[a] == matrix[c])
        {

            return matrix[a]; // retorna o item correspodente.
        }
    }
    return 0;
}
void Jogo(int posicaoJogo1, int posicaoJogo2, int *matrix_de_jogo)
{
    int valor1 = 1;
    int valor2 = 2;

    if (ValidarArray(posicaoJogo1, matrix_de_jogo) == true)
    {
        matrix_de_jogo[posicaoJogo1] = valor1;
    }

    if (ValidarArray(posicaoJogo2, matrix_de_jogo) == true)
    {
        matrix_de_jogo[posicaoJogo2] = valor2;
    }
}

void MostraMatrix(int *matrix)
{
    int status = ValidaPosicaoJogo(matrix);
    PontuacaoJogo(status);

    for (int i = 0; i < 9; i++)
    {
        std::cout << "[" << *(matrix + i) << "]"; // percorre o array, atrás dos items.
        if ((i + 1) % 3 == 0)
        {
            std::cout << std::endl; // verificar se ele já chegou em uma linha multipla de 3, ele chegou, ele quebra a linha.
        }
    }
}
