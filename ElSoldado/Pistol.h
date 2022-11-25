#pragma once
#include "IWeapon.h"

class Pistol: public IWeapon {
public:
	Pistol();
	~Pistol();
	void Shoot();
	std::string GetWeaponType();
};