/*
 * Author: Joshelyn Yanori Mendoza Alfaro
 * josh14mndz@gmail.com
 * October 13, 2021
 */

#ifdef PUNTOS_PUNTOS_H
#define PUNTOS_PUNTOS_H
#include <vector>

using namespace std;

class Punto2D;
public:
	Punto2D;
	void SetPosition(float x, float y);
	void Trasladar(float temp1, float temp2);
	void RotarRespectoAlOrigen(float temp1);
	void Escalar(float temp1, float temp2);
	float GetX();
	float GetY();

private:
	float a, b, c;
};

// PUNTOS_PUNTOS_H
#endif 
