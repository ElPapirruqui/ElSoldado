#pragma once

class IWeapon;

class Soldier{
public:
	Soldier();
	~Soldier();
	bool PickupWeapon(IWeapon* NewWeapon);
	bool HasWeaponEquiped();
	void DropWeapon();
	void ShootWeapon();
	std::string InspectWeapon();
private:
	IWeapon* CurrentWeapon = nullptr;
};