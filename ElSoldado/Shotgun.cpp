#include<iostream>
#include "Shotgun.h"

using namespace std;

Shotgun::Shotgun() {}

Shotgun::~Shotgun() {
	cout << "Escopeta Destructor" << endl;
}

void Shotgun::Shoot() {
	cout << "Chikibun!\n" << endl;
}

std::string Shotgun::GetWeaponType() {
	return "Escopeta";
}