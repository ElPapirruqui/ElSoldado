#include<iostream>
#include "Pistol.h"
#include "IWeapon.h"

using namespace std;

Pistol::Pistol(){}

Pistol::~Pistol() {}

void Pistol::Shoot() {
	cout << "PAH!";
}