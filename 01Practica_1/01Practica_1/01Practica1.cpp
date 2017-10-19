// 01Practica1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "01Practica1.h"


int main()
{
	unsigned int metaData = 1996713989;
			
		//1996713989;
		//1996713991;
		//cout << (72 & 184);
		/*•	Los 8 bits de mayor peso contienen la vida del personaje
		•	Los siguientes 8 bits el número de balas.
		•	Los siguientes 4 bits el número de compañeros.
		•	El bit 0 el indicador de modo invulnerable.
		•	El bit 1 el indicador de balas infinitas
		•	El bit 2 el indicador de escudo presente.
		•	El bit 3 el indicador de modo “berseker”.

		TO DO: 

		•	Función que dado el entero anterior retorne el número de balas
		•	Función que dado el entero anterior añada un número de balas a las existentes.
		•	Función que dado el entero anterior retorne si está activo el modo de balas infinitas.
		•	Función que dado el entero anterior active el modo de balas infinitas.
		*/

	//01110111 00000011 0111 00000000 0111
	//01000000 00000000 0000 00000000 0000
	//11111111 00000000 1111 11111111 1111
	//01110111 00000000 0111 00000000 0111    --->1996517383

	displayInfoMetadata(metaData);

	cout << "Numero de balas: " <<numberOfBullets(metaData)<<endl;

	cout << "Cargando: " << BULLET_AMOUNT << " Balas..."<<endl;
	metaData = addBullets(metaData, BULLET_AMOUNT);

	cout << "Numero de balas: " << numberOfBullets(metaData) << endl;

	if (checkInfinteBullets(metaData)) 
		cout << "Modo Balas infinitas esta Activado!"<<endl;
	else 
		cout << "Modo Balas infinitas esta Desactivado!"<<endl;
	

	if (activateInfiniteBullets(metaData))
		cout << "Activando Modo Balas Infinitas... "<<endl;
	else 
		cout << "Modo Balas infinitas ya estaba Activado! "<<endl;

	
	cout << "Metadata Modificado: " << metaData;
	getchar();
    return 0;
}

void displayInfoMetadata(unsigned int metaData) {
	cout << "Tus puntos de vida actuales son: " << checkHp(metaData) << endl;
	cout << "La cantidad de tus balas restantes es: " << numberOfBullets(metaData)<< endl;
	cout << "Tu numero de aliados es: " << checkNumberOfAllies(metaData) << endl;

	if (checkInvinsibleMode(metaData))
		cout << "Modo Invulnerable: Activado" << endl;
	else
		cout << "Modo Invulnerable: Desactivado" << endl;

	if (checkInfinteBullets(metaData))
		cout << "Modo Balas Infinitas: Activado" << endl;
	else
		cout << "Modo Balas Infinitas: Desactivado" << endl;

	if (checkShield(metaData))
		cout << "Escudo: Activado" << endl;
	else
		cout << "Escudo: Desactivado" << endl;

	if (checkBerseker(metaData))
		cout << "Berseker: Activado" << endl;
	else
		cout << "Berseker: Desactivado" << endl;


}

int numberOfBullets(unsigned int metaData) {
	metaData = metaData << LEFT_BULLETS;
	metaData = metaData >> RIGHT_BULLETS;

	return metaData;
}

bool checkInfinteBullets(unsigned int metaData) { 
		
	metaData = metaData << LEFT_INFINITE_BULLETS;
	metaData = metaData >> RIGHT_INFINITE_BULLETS;

	return metaData;
}

bool activateInfiniteBullets(unsigned int &metaData) {
	bool changed = false;
	unsigned int aux = metaData;
	if ((metaData |= TURN_ON_ACTIVE_BULLETS) != aux) {
		changed = true;
	}
	return changed;
}

unsigned int resetBullets(unsigned int metaData) {
	metaData &= RESET_BULLETS_OPERATOR;
	return metaData;
}

unsigned int addBullets(unsigned int metaData, int bulletAmount) {
	bulletAmount += numberOfBullets(metaData);
	if (bulletAmount > MAX_BULLETS) {
		bulletAmount = MAX_BULLETS;
		//we are gonna leave bullets to max capacity
		//Solo podemos cargar hasta 255 balas en los 8 bits
	}
	metaData = resetBullets(metaData);
	bulletAmount = bulletAmount << LEFT_REPLACE_BULLETS;
	metaData |= bulletAmount;

	return metaData;
}

int checkHp(unsigned int metaData) {
	
	metaData = metaData >> RIGHT_HP;
	return metaData;
}

int checkNumberOfAllies(unsigned int metaData) {

	metaData = metaData << LEFT_ALLIES;
	metaData = metaData >> RIGHT_ALLIES;
	return metaData;
}

int checkInvinsibleMode(unsigned int metaData) {
	metaData = metaData << LEFT_INVINSIBLE;
	metaData = metaData >> RIGHT_INVINSIBLE;
	return metaData;
}

int checkShield(unsigned int metaData) {
	metaData = metaData << LEFT_SHIELD;
	metaData = metaData >> RIGHT_SHIELD;
	return metaData;
}

int checkBerseker(unsigned int metaData) {
	metaData = metaData << LEFT_BERSEKER;
	metaData = metaData >> RIGHT_BERSEKER;
	return metaData;
}