#include <iostream>

int main()
{
    //int n = 6;
    //int** m = nullptr;

    //m = new int* [n];
    //for (int i = 0; i < n; ++i)
    //    m[i] = new int[n];

    //for (int i = 0; i < n; ++i)
    //    for (int j = 0; j < n; ++j)
    //        m[i][j] = i + j;

    //for (int i = 0; i < n; ++i)
    //{
    //    for (int j = 0; j < n; ++j)
    //        std::cout << m[i][j] << " ";

    //    std::cout << std::endl;
    //}

    //for (int i = 0; i < n; ++i)
    //{
    //    delete[] m[i];
    //    m[i] = nullptr;
    //}

    //delete[] m;
    //m = nullptr;


    //std::cout << std::endl;

        int lignes = 6;
        int colonnes = 10;
        int** b = nullptr;

        b = new int* [lignes];

        for (int i = 0; i < lignes; ++i)
        {
            b[i] = new int[colonnes];
        }

        for (int i = 0; i < lignes; ++i)
        {
            for (int j = 0; j < colonnes; ++j)
            {
                b[i][j] = i + j;
            }
        }

        for (int i = 0; i < lignes; ++i)
        {
            for (int j = 0; j < colonnes; ++j)
            {
                std::cout << b[i][j] << " ";
            }
            std::cout << std::endl;
        } 

        std::cout << *b << std::endl;
        std::cout << **b << std::endl;
        std::cout << b << std::endl;
                     

    for (int i = 0; i < lignes; ++i)
    {
        delete[] b[i];
        b[i] = nullptr;
    }

    delete[] b;
    b = nullptr;

    return 0;
}



