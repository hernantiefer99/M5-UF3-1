#pragma once
#include "Header.h"
#include <iostream>
using namespace std;

//constructor
Lancha::Lancha(string pNombre, int pSpeed, int pDistancia, int pNitro) {

	nombre = pNombre;
	speed = pSpeed;
	distancia = pDistancia;
	nitro = pNitro;

}

//Getters
string Lancha::getNombre() {
	return nombre;
}

int Lancha::getSpeed() {
	speed = speed + puntosDado();
	return speed;
};

int Lancha::getDistancia() {

	distancia = distancia + speed * 100;

	return distancia;
}

int Lancha::getNitro() {

	return nitro;
}



//SETTERS	

void Lancha::setNombre(string pNombre) {
	nombre = pNombre;
}

void Lancha::setSpeed(int pSpeed) {
	speed = pSpeed;
}
void Lancha::setDistancia(int pDistancia) {
	distancia = pDistancia;
}
void Lancha::setNitro(int pNitro) {
	nitro = pNitro;
}


//METODOS PROPIOS

void Lancha::estadoJugador() {
	cout << "El jugador " << getNombre() << " ha recorrido una distancia de "
		<< getDistancia() << ". a una velocidad de " << getSpeed() << ". el nitro " << getNitro() << "\n\n";
}

int Lancha::puntosDado() {
	int puntoDado = (rand() % 6 + 1);
	cout << "DADO: " << puntoDado << " puntos ";
	return puntoDado;

}
int Lancha::usarNitro() {
	if (nitro > 0) {
		nitro = 0;
		int r = rand() % 2;
		if (r == 0) {
			 speed /= 2;
			std::cout << "El jugador " << nombre << " ha usado el nitro, pero ha salido 0 en la ruleta. Su velocidad se divide por la mitad." << std::endl;
			return nitro;
		}

		else {
			speed *= 2;
			std::cout << "El jugador " << nombre << " ha usado el nitro y ha salido 1 en la ruleta. Su velocidad se multiplica por dos." << std::endl;
		}
	}
	else {
		std::cout << "El jugador " << nombre << " no tiene nitro para usar." << std::endl;
	}
}

void Lancha::nuevaDistancia() {
	distancia += speed * 100;
	std::cout << nombre << " ha recorrido " << distancia << " metros." << std::endl;
}