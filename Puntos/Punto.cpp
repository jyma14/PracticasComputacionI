
/*
 * Author: Joshelyn Yanori Mendoza Alfaro
 * josh14mndz@gmail.com
 * October 13, 2021
 */

#incluide <iostream>
#incluide <math.h>
#define PI 3.141592
#incluide "Punto.h"

using namespace std;

Punto2D: :Punto2D() {
	a = 0;
	b = 0;
	c = 0;
}

 void Punto2D: :SetPosition(float x, float y) {
 	a = x;
 	b = y;
 }

 void Punto2D: :Trasladar(float temp1, float temp2) {
 	a = a + temp1;
 	b = b + temp2;
}

void Punto2D: :RotarRespectoAlOrigen(float temp1){
	c = a;
	a = c*cos(temp1*PI/180) - b*sen(temp1*PI/180);
	b = c*sen(temp1*PI/180) + b*cos(temp1*PI/180);
}

void Punto2D: :Escalar(float temp1, float temp2){
	a = a*temp1;
	b = b*temp2;
}

float Punto2D: :GetX(){
	return a;
}

float Punto2D: :GetY(){
	return b;
}










