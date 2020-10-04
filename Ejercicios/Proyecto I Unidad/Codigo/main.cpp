#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while(true) {
        system("cls");
        cout << endl;

        cout << " ******************** " << endl;
        cout << "    MENU DE JUEGOS    " << endl;
        cout << " ******************** " << endl << endl;
        cout << " Seleccione un juego: " << endl << endl;

        cout << " 1 - Nave estelar " << endl << endl;
        cout << " 2 - Serpiente " << endl << endl;
        cout << " 0 - Salir " << endl << endl;

        cout << " Ingrese numero para seleccionar el juego:  " <<endl;
        cin >> opcion;

        system("cls");
        switch (opcion)
        {
        case 1: 
            starShip();            
            break;
        case 2:
            snake();
            break;
        default:
            break;
        }
    
        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
   }
    return 0;
}
