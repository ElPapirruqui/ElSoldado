#include<iostream>
#include "Rifle.h"

using namespace std;

Rifle::Rifle() {}

Rifle::~Rifle() {
	cout << "Metralleta Destructor" << endl;
}

void Rifle::Shoot() {
	cout << "Ratatatata!\n" << endl;
}

std::string Rifle::GetWeaponType() {
	return "Metralleta";
}