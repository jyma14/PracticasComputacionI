/* Author: Joshelyn Yanori Mendoza Alfaro
 * josh14mndz@gmail.com
 * September 15, 2021
 */
#include <iostream>
using namespace std;

int main() {
   //Primero defino las variables
  int a, b, c; float result = 0; // int a = 0,b = 0; float result = 0; string c;
  do{
     //Parametros de entrada
    cout << "1. Sumar" << endl;
    cout << "2. Restar"<< endl;
    cout << "3. Multiplicar"<< endl;
    cout << "4. Dividir" << endl;
    cout << "5. Modulo" << endl;
  cout << "c ";
  cin>>c;
  //Se comparan los signos de los condicionales y se imprimen los elementos 
  if (c==1){
  cin>>a;
  cin>>b;
  cout << "La Suma es: "<< a+b <<endl;
  }
  if (c==2){
  cin>>a;
  cin>>b;
  cout << "La Resta es: "<< a-b <<endl;
  }
  if (c==3){
  cin>>a;
  cin>>b;
  cout << "La Multiplicacion es: "<< a*b <<endl;
  }
  if (c==4){
  cin>>a;
  cin>>b;
  cout << "La Division es: "<< a/b <<endl;
  }
  if (c==5){
  cin>>a;
  cin>>b;
  cout << "El Modulo es: "<< a%b <<endl;
  }
  } while ( c != 5);
  return 0;
}
