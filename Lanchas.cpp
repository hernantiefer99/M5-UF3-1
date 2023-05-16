#include <iostream>
#include "Header.h"
using namespace std;

int cantiJugadores;
string nombrej[4];

//lista de las funciones
void inicio();

void inicio() {
    cout << "---------------------------------------------------------------------------" << endl;     
    cout << "--                                                                       --" << endl;
    cout << "--                           Carrera sobre agua                          --" << endl;
    cout << "--                               Bienvenido                              --" << endl;
    cout << "--                                                                       --" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

}

int main()
{
    srand(time(NULL));

    int option = 0;
    Lancha lancha1("lancha1", 0, 0, 0);
    Lancha lancha2("lancha2", 0, 0, 0);

    inicio();
    // jugadores();

    cout << "Introduzaca el numero de jugadores, de momento, estan permitidos 2 como maximo " << endl;
    cout << "Aquí-->" << endl; cin >> option;

    if (option == 2) {
        for (int turno = 1; turno <= 5; turno++) {
            cout << "--- Turno " << turno << " ---" << endl;
           ///Lanzar el dado para la lancha 1

           // lancha1.puntosDado();
            lancha1.getSpeed();
            //lancha1.getDistancia();
            lancha1.nuevaDistancia();

            int opcion;
            cout << "Quiere usar el nitro? (1 = si, 0 = no)" << endl;
            cin >> opcion;
            if (opcion == 1) {
                lancha1.usarNitro();
            }

            //Esto sirve para actualizar la distancia de cada lancha
        }

        lancha1.estadoJugador();

        for (int turno = 1; turno <= 5; turno++) {
            cout << "=== Turno " << turno << " ===" << endl;
            //Lanzar el dado para la lancha 2

            //lancha2.puntosDado();
            lancha2.getSpeed();
            //lancha2.getDistancia();
            lancha2.nuevaDistancia();

            int opcion;
            cout << "Quieres usar tu nitro? (1 = si, 0 = no)" << endl;
            cin >> opcion;
            if (opcion == 1) {
                lancha2.usarNitro();
            }


        }

        lancha2.estadoJugador();

    }
    else if (option == 3) {

    }
    else if (option == 4) {


    }
    else if (option == 5) {


    }
    else {
        cout << "opcion no valida, como maximo, 2 jugadores" << endl;
    }