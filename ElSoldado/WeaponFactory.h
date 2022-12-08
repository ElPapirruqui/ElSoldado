#pragma once

enum class EWeaponType { Pistol, Rifle, Shotgun };

class IWeapon;

class WeaponFactory {
private:
	std::unique_ptr<IWeapon> CurrentWeapon;
public:
	WeaponFactory();
	~WeaponFactory();
	IWeapon* CreateWeapon(EWeaponType WeaponType);
};