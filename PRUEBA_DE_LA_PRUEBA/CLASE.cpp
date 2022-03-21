#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
    int i, suma = 0, cont1 = 0, cont2 = 0, cont3 = 0;
    int* precio = NULL;
    precio = new int[5];
    float prom;

    //for (i = 0; i < 5; i++)
    //{
    //    cout << "Ingrese precio [" << i + 1 << "] : "; cin >> precio[i];
    //}

    for (i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Precio [" << i + 1 << "] : ";
        precio[i] = rand() % 11;
        cout << precio[i];
    }

    cout << "Datos al revez: " << endl;

    for (i = 4; i >= 0; i--)
    {
        cout << endl;
        cout << "Precio [" << i + 1 << "] : ";
        cout << precio[i];
    }

    for (i = 0; i < 5; i++)
    {
        suma += precio[i];
    }

    prom = suma / 5;

    cout << "\nPromedio: " << prom << endl;

    for (i = 0; i < 5; i++)
    {
        if (precio[i] > prom)
            cont1++;
    }

    for (i = 0; i < 5; i++)
    {
        if (precio[i] < prom)
            cont2++;
    }

    for (i = 0; i < 5; i++)
    {
        if (precio[i] == prom)
            cont3++;
    }

    cout << "Mayores al promedio: " << cont1 << endl;
    cout << "Menores al promedio: " << cont2 << endl;
    cout << "Iguales al promedio: " << cont3 << endl;

    delete[] precio;

    return 0;
}
