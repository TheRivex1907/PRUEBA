#include <iostream>
using namespace std;

int main()
{
    int cantidadT, contadorT, i, j, suma;

    cout << "Ingrese cantidad de términos";

    cin >> cantidadT;

    j = 1;

    contadorT = 0;

    while (contadorT < cantidadT)
    {
        i = 1;

        while (contadorT < cantidadT & i <= 9)
        {
            suma = j / i + suma;
            
            cout << "j/i : " << j << "/" << i << endl;

            i++;

            contadorT;

            suma = j / i + suma;
        }

        j++;
    }




}
