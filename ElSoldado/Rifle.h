#pragma once
#include "IWeapon.h"

class Rifle : public IWeapon {
public:
	Rifle();
	~Rifle();
	void Shoot();
	std::string GetWeaponType();
};