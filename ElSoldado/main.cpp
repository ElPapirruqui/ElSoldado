#include<iostream>
#include<memory>
#include<string>
#include<cstdlib>

#include "Soldier.h"
#include "Pistol.h"
#include "Rifle.h"
#include "Shotgun.h"

using namespace std;

int main()
{
    int Option = -1;
    int WeapOption = -1;
    std::unique_ptr<Soldier> SoldierUP = std::make_unique<Soldier>();
    std::unique_ptr<Pistol> PitsolaUP = std::make_unique<Pistol>();
    std::unique_ptr<Rifle> MetralletaUP = std::make_unique<Rifle>();
    std::unique_ptr<Shotgun> EscopetaUP = std::make_unique<Shotgun>();
    Soldier* Soldier = SoldierUP.get();
    Pistol* Pitsola = PitsolaUP.get();
    Rifle* Metralleta = MetralletaUP.get();
    Shotgun* Escopeta = EscopetaUP.get();
    
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
            system("CLS");
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
                    system("CLS");
                    cout << "Parece que el soldado ya esta equipado con otra arma" << endl;
                } else {
                    switch (WeapOption) {
                    case 1:
                        Soldier->PickupWeapon(Pitsola);
                        break;
                    case 2:
                        Soldier->PickupWeapon(Metralleta);
                        break;
                    case 3:
                        Soldier->PickupWeapon(Escopeta);
                        break;
                    }
                    system("CLS");
                    cout << "Arma actual: " << Soldier->InspectWeapon() << endl;
                }
            }
            system("CLS");
            break;
        case 2:
            system("CLS");
            if (Soldier->HasWeaponEquiped()) {
                cout << "Soltando arma: " << Soldier->InspectWeapon() << endl;
                Soldier->DropWeapon();
            }
            else {
                cout << "Parece que el soldado no tiene arma equipada" << endl;
            }
            break;
        case 3:
            system("CLS");
            if (Soldier->HasWeaponEquiped()) {
                Soldier->ShootWeapon();
            } else {
                cout << "Parece que el soldado no tiene arma equipada" << endl;
            }
            break;
        case 4:
            system("CLS");
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