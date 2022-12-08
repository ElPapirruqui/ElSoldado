#include<iostream>
#include "WeaponFactory.h"
#include "Pistol.h"
#include "Rifle.h"
#include "Shotgun.h"

using namespace std;

WeaponFactory::WeaponFactory() {}

WeaponFactory::~WeaponFactory() {
	cout << "Factory Destructor" << endl;
}

IWeapon* WeaponFactory::CreateWeapon(EWeaponType WeaponType){
	IWeapon* CurrentWeaponPtr = nullptr;
	switch (WeaponType)
	{
		case EWeaponType::Pistol:
			CurrentWeapon = std::make_unique<Pistol>();
			CurrentWeaponPtr = CurrentWeapon.get();
		break;
		case EWeaponType::Rifle:
			CurrentWeapon = std::make_unique<Rifle>();
			CurrentWeaponPtr = CurrentWeapon.get();
			break;
		case EWeaponType::Shotgun:
			CurrentWeapon = std::make_unique<Shotgun>();
			CurrentWeaponPtr = CurrentWeapon.get();
			break;
	}
	return CurrentWeaponPtr;
}