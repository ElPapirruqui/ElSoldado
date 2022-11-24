#pragma once

class IWeapon;

class Rifle : public IWeapon {
public:
	Rifle();
	~Rifle();
	void Shoot();
};