/* Author: Joshelyn Yanori Mendoza Alfaro
 * josh14mndz@gmail.com
 * September 15, 2021
 */
#include <iostream>
using namespace std;
int main() {
     //Primero defino mis variables
    int x = 0, y = 0; float result = 0; string z; 
    //Luego establezco los parametros de entrada
    cout <<"Insertar el primer numero: "; cin >> x; cout << "Insertar el operador: "; cin >> z; cout << "Inserte el segundo numero: "; cin >> y; 
   //Posteriormente, se comparan los signos de los condicionales
    if (z == "+"){result = x + y;}
    if (z == "-"){result = x - y;}
    if (z == "*"){result = x * y;}
    if (z == "/"){result = x / y;}
    if (z == "%"){result = x % y;}
    //Finalmente, se imprimen los elementos
    cout <<"Primer numero: " << x << endl;
    cout << "Operador matematico: " << z << endl;
    cout << "Segundo numero: " << y << endl;
    cout << "Resultado final: " << endl;
    cout << x << " " << z <<" "<< y << " = " << result << endl;
    return 0;

    
    
   
