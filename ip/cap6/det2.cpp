// ******************************
// Author: SM
// Programma che, letta una matrice di float A, quadrata di dimensione 2x2, calcola il determinante 
// di tale matrice e lo stampa in uscita dopo la matrice.
// ******************************

#include<iostream>

int main()
{
    // input
    const int R = 2, C = 2;
    float mat[R][C];
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            std::cin >> mat[i][j];
        }
    }

    // print mat
    std::cout << "the matrix is" << std::endl;
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            std::cout << mat[i][j] << (j == C-1 ? "\n" : " ");
        }
    }

    // output
    std::cout << "the determinant is " << (mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]) << std::endl;

    return 0;
}