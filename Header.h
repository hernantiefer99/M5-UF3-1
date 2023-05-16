#pragma once
#include <iostream>
using namespace std;

class Lancha
{
private:
	string nombre;
	int speed;
	int distancia;
	int nitro;


public:
	//constructor
	void lancha(string pNombre, int pSpeed, int pDistancia, int pNitro);

	//getters
	Lancha(string pNombre, int pSpeed, int pDistancia, int pNitro);
	string getNombre();
	int getSpeed();
	int getDistancia();
	int getNitro();


	//setters
	void setNombre(string pNombre);
	void setSpeed(int pSpeed);
	void setDistancia(int pDistancia);
	void setNitro(int pNitro);


	// metodos propios
	void estadoJugador();
	int puntosDado();
	int usarNitro();
	void nuevaDistancia();
};