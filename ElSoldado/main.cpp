#include<iostream>
#include<memory>
#include<string>
#include<cstdlib>

#include "Soldier.h"
#include "Pistol.h"
#include "Rifle.h"
#include "Shotgun.h"
#include "WeaponFactory.h"

using namespace std;

int main()
{

    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    int Option = -1;
    int WeapOption = -1;
    std::unique_ptr<Soldier> SoldierUP = std::make_unique<Soldier>();
    Soldier* Soldier = SoldierUP.get();
    std::unique_ptr<WeaponFactory> WeaponFactoryUP = std::make_unique<WeaponFactory>();
    WeaponFactory* WeaponFactory = WeaponFactoryUP.get();
    
    while (Option != 0)
    {
        cout << "Bienvenido al campo de entrenamiento soldado bla bla bla...\n" << endl;
        cout << "¿Que desea hacer?" << endl;
        cout << "(Seleccionar opcion)\n" << endl;
        cout << "1 - Recoger arma" << endl;
        cout << "2 - Dejar arma" << endl;
        cout << "3 - Disparar" << endl;
        cout << "4 - Ver arma en uso" << endl;
        cout << "0 - Salir" << endl;
        cin >> Option;

        switch (Option) {
        case 1:
            std::system("CLS");
            WeapOption = -1;
            while (WeapOption != 0)
            {
                cout << "Por favor, escoja el arma que desea utilizar:\n" << endl;
                cout << "(Seleccionar opcion)\n" << endl;
                cout << "1 - Pitsola" << endl;
                cout << "2 - Metralleta" << endl;
                cout << "3 - Escopeta" << endl;
                cout << "0 - Volver" << endl;
                cin >> WeapOption;

                if (Soldier->HasWeaponEquiped()) {
                    std::system("CLS");
                    cout << "Parece que el soldado ya esta equipado con otra arma" << endl;
                } else {
                    switch (WeapOption) {
                    case 1:
                        {
                            Pistol* Pitsola = static_cast<Pistol*>(WeaponFactory->CreateWeapon(EWeaponType::Pistol));
                            Soldier->PickupWeapon(Pitsola);
                            break;
                        }
                    case 2:
                        {
                            Rifle* Metralleta = static_cast<Rifle*>(WeaponFactory->CreateWeapon(EWeaponType::Rifle));
                            Soldier->PickupWeapon(Metralleta);
                            break;
                        }
                    case 3:
                        {
                            Shotgun* Escopeta = static_cast<Shotgun*>(WeaponFactory->CreateWeapon(EWeaponType::Shotgun));
                            Soldier->PickupWeapon(Escopeta);
                            break;
                        }
                    }
                    std::system("CLS");
                    cout << "Arma actual: " << Soldier->InspectWeapon() << endl;
                }
            }
            std::system("CLS");
            break;
        case 2:
            std::system("CLS");
            if (Soldier->HasWeaponEquiped()) {
                cout << "Soltando arma: " << Soldier->InspectWeapon() << endl;
                Soldier->DropWeapon();
            }
            else {
                cout << "Parece que el soldado no tiene arma equipada" << endl;
            }
            break;
        case 3:
            std::system("CLS");
            if (Soldier->HasWeaponEquiped()) {
                Soldier->ShootWeapon();
            } else {
                cout << "Parece que el soldado no tiene arma equipada" << endl;
            }
            break;
        case 4:
            std::system("CLS");
            if (Soldier->HasWeaponEquiped()) {
                cout << "Arma actual: " << Soldier->InspectWeapon() << endl;
            }
            else {
                cout << "Parece que el soldado no tiene arma equipada" << endl;
            }
            break;
        }
    }
	
	return 0;
}