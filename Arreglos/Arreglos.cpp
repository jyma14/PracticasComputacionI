*/ Author: Joshelyn Yanori Mendoza Alfaro
*/ josh14mndz@gmail.com
*/ September 23, 2021

#include <iostream>
#include <array>

#define LEN 3 //Número de elementos en los arreglos

// Añadir std para fácil llamado de funciones
using namespace std;

// Declaración de funciones
void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void);
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2);

int main()
{
    char decision;
    array<float, LEN> arr = { 0 }; // Inicializamos el arreglo con ceros como buena práctica
    array<float, LEN> arrs = { 0 };
    array<float, LEN> arrm = { 0 }
    arr = LlenarArreglo(); // Solicitamos al usuario que llene un arreglo y lo asignamos a nuestro arreglo principal
    cout << "Operación: ";
    cin >> decision;
    // Si la operación no es '+' de suma, o '*' de multiplicación, seguimos preguntando al usuario.
    while (decision != '+' && decision != '*')
    {
        cout << "Operación: ";
        cin >> decision;
    }
    // Si se ingresa la multiplicación
    if (decision == '*') {
        float factor;
        cout << "Factor: ";
        cin >> factor;  // Pedimos el factor a multiplicar
        arrm = MultiplicarArreglo(arr, factor); // Multiplicamos nuestro arreglo principal por el factor y el resultado lo asignamos a nuestro arreglo principal.
        // Lo asigno al arreglo principal
        cout << "Resultado: ";
        ImprimirArreglo(arm);
    }
        // Si se ingresa la suma
    else if (decision == '+') {
        array<float, LEN> arr2 = {0}; // Creamos el segundo arreglo y lo inicializamos en ceros
        arr2 = LlenarArreglo(); // Pedimos al usuario que llene otro arreglo y lo asignamos a nuetsro nuevo arreglo
        arrs = SumarArreglos(arr, arr2); // Sumamos ambos arreglos elemento a elemento, y reasignamos el resutlado a nuestro arreglo principal
        cout << "Resultado: ";
        ImprimirArreglo(arrs); // Imprimimos el resultado de la operación sobre el arreglo principal
    return 0; // Indicamos que salimos del programa con éxito
}

// Imprime los elementos del arreglo 'arreglo' separando cada elemento con un espacio en blanco
void ImprimirArreglo(array<float, LEN> arreglo)
{
    for (int i = 0; i < LEN; i++)
        cout << arreglo[i] << ' ';
    cout << '\n';
}

// Llena un arreglo de tamaño LEN y lo "regresa" como resultado
array<float, LEN> LlenarArreglo()
{
    array < float, LEN> arreglito= {0};
    for(int i=0; i < LEN ; i++ {
        cout << "Valor del elemento [" << i >> "]:";
        cin >> arreglito[i];
    }
    return arreglito;
}

// Multiplica cada elemento del arreglo 'arreglo' por el factor 'mult'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arr, float factor)
{
    array<float, LEN> multip= {0};
    for(int i=0; i<LEN; i++){
        multip[i]= arr[i]*factor;
    }
    return multip;
}

// Suma elemento a elemento los arreglos 'arr1' y 'arr2' y regresa el arreglo resultante
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2)
{
    array<float, LEN> sumita= {0};
    for(int i=0; 1<LEN; i++){
       sumita[i]=arr1[i]+arr2[i];
    }
    return sumita
}
