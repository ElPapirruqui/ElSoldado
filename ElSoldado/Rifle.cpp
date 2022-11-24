#include<iostream>
#include "Rifle.h"
#include "IWeapon.h"

using namespace std;

Rifle::Rifle() {}

Rifle::~Rifle() {}

void Rifle::Shoot() {
	cout << "Ratatatata!";
}