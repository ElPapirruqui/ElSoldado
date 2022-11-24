#pragma once

class IWeapon;

class Shotgun : public IWeapon {
public:
	Shotgun();
	~Shotgun();
	void Shoot();
};