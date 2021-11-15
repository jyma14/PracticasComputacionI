//
// Created by josh1 on 06/11/2021.
//

#include <iostream>
#include <array>
#include <string>

// Incluimos nuestra clase Grupo
#include "Grupo.h"

using namespace std;

// Declaración de funciones
void PedirpH(float& ph);
Grupo CrearGrupo(int numGrupo);

template <typename grupos>
int CalcularCargaApH(float& ph, grupos todosGrupos);


int main()
{
    // Indicamos el número de grupos que va a tener nuestra molécula
    const int numGrupos = 3;
    float phMolecula; // pH al que va a estar sometida la molécula
    string nombreMolecula;

    // Pedimos al usuario el nombre de la molécula
    cout << "Nombre de la molecula: ";
    cin >> nombreMolecula;

    // Creamos un arreglo de 'Grupos' para los grupos de la molécula
    array <Grupo, numGrupos> todosGrupos;
    // Pedimos información de cada grupo al usuario
    for (int i = 0; i < numGrupos; i++)
        todosGrupos[i] = CrearGrupo(i);

    // Pedimos al usuario indicar el pH al que está la molécula
    PedirpH(phMolecula);

    // Calculamos la carga neta de la molécula a un cierto pH
    int cargaMolecula = CalcularCargaApH(phMolecula, todosGrupos);
    cout << "Carga neta de la molecula: " << cargaMolecula << endl;

    // Si terminamos correctamente la ejecución del programa, regresamos 0
    return 0;
}

//Crea un nuevo 'Grupo' con la información ingresada por el usuario.
Grupo CrearGrupo(int i)
{
    string nombreGrupo;
    float pkGrupo;
    int cargaGrupo;
    cout << "Nombre grupo " << i << ": ";
    cin >> nombreGrupo;
    cout << "pK del grupo " << nombreGrupo << ": ";
    cin >> pkGrupo;
    cout << "Carga del grupo " << nombreGrupo << " a pH mayor a " << pkGrupo << ": ";
    cin >> cargaGrupo;
    Grupo miGrupo(nombreGrupo, pkGrupo, cargaGrupo);
    return miGrupo;
}

// Solicita al usuario el valor de pH
void PedirpH(float& ph)
{
    cout << "pH de la solucion (buffer): ";
    cin >> ph;
}

// Calculo la carga eléctrica de la molécula, tomando en cuenta la carga eléctrica de cada uno de sus grupos a un cierto pH y la regreso.
template <typename grupos>
int CalcularCargaApH(float& ph, grupos todosGrupos)
{
    int carga = 0;
    int cargaMolecula = 0;

    for(int i = 0; i < todosGrupos.size( ); i++ ){
         //Si el pka del grupo es mayor que el pH de la solución, sé que el que predomina es el grupo protonado (HA).
        if(ph < todosGrupos[i].Getpk( )){
            carga = todosGrupos[i].GetCarga( )+1;
        }
         //Si el pka del grupo es menor que el pH de la solución, sé que el que predomina es el grupo desprotonado (A-).
        if (ph > todosGrupos[i].Getpk( )){
            carga = todosGrupos[i].GetCarga( );
        }
        //La carga neta de mi molécula es igual a la suma de cada carga de los grupos.
        cargaMolecula += carga;
    }
    return cargaMolecula;
}

