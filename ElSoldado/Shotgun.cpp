#include<iostream>
#include "Shotgun.h"
#include "IWeapon.h"

using namespace std;

Shotgun::Shotgun() {}

Shotgun::~Shotgun() {}

void Shotgun::Shoot() {
	cout << "Chikibun!";
}