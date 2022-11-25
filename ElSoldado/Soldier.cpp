#include<iostream>
#include "Soldier.h"
#include "IWeapon.h"

using namespace std;

Soldier::Soldier() {
	cout << "Soldier Constructor" << endl;
}

Soldier::~Soldier() {
	cout << "Soldier Destructor" << endl;
}

bool Soldier::PickupWeapon(IWeapon* NewWeapon) {
	if (CurrentWeapon == nullptr) {
		CurrentWeapon = NewWeapon;
		return true;
	}
	else {
		return false;
	}
}

bool Soldier::HasWeaponEquiped() {
	return CurrentWeapon != nullptr;
}
	

void Soldier::DropWeapon() {
	CurrentWeapon = nullptr;
}

void Soldier::ShootWeapon() {
	CurrentWeapon->Shoot();
}

std::string Soldier::InspectWeapon() {
	if (CurrentWeapon != nullptr) {
		return CurrentWeapon->GetWeaponType();
	}
	else {
		return "No hay arma equipada";
	}
	
}