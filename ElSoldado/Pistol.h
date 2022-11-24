#pragma once

class IWeapon;

class Pistol: public IWeapon {
public:
	Pistol();
	~Pistol();
	void Shoot();
};