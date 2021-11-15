//
// Created by josh1 on 06/11/2021.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include <string>
using namespace std;

class Grupo {
private:
    string nombre;
    float pka;
    int carga;

public:
    //En public agrego mis constructores.
    Grupo(string, float, int);
    Grupo( );
    //Ahora agrego mis funciones:
    int GetCarga( );
    float Getpk( );
};
#endif //CARGAELECTRICA_GRUPO_H
