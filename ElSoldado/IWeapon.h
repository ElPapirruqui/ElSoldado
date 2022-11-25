#pragma once

class IWeapon {
public:
	virtual void Shoot() = 0;
	virtual std::string GetWeaponType() = 0;
};