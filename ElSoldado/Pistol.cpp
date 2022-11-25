#include<iostream>
#include "Pistol.h"

using namespace std;

Pistol::Pistol(){}

Pistol::~Pistol() {
	cout << "Pitsola Destructor" << endl;
}

void Pistol::Shoot() {
	cout << "PAH!\n" << endl;
}

std::string Pistol::GetWeaponType() {
	return "Pitsola";
}