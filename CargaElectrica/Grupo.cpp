//
// Created by josh1 on 06/11/2021.
//

#include "Grupo.h"

Grupo::Grupo( )
{
    nombre = " ";
    pka = 0;
    carga = 0;
}
Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo)
{
    nombre =  nombreGrupo;
    pka= pkGrupo;
    carga = cargaGrupo;
}
//Con esta función obtengo el pka de cada grupo de la molécula.
float Grupo::Getpk()
{
return pka;
}
//Con esta función obtengo la carga de cada grupo de la molécula.
int Grupo::GetCarga( )
{
    return carga;
}
