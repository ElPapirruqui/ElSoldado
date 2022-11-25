#pragma once
#include "IWeapon.h"

class Shotgun : public IWeapon {
public:
	Shotgun();
	~Shotgun();
	void Shoot();
	std::string GetWeaponType();
};