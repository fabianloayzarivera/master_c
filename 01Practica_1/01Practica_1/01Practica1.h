#pragma once
#include <iostream>

using namespace std;
void displayInfoMetadata(unsigned int metaData);
int numberOfBullets(unsigned int metaData);
bool checkInfinteBullets(unsigned int metaData);
bool activateInfiniteBullets(unsigned int &metaData);
unsigned int resetBullets(unsigned int metaData);
unsigned int addBullets(unsigned int metaData, int bulletAmount);
int checkNumberOfAllies(unsigned int metaData);
int checkHp(unsigned int metaData);
int checkInvinsibleMode(unsigned int metaData);
int checkShield(unsigned int metaData);
int checkBerseker(unsigned int metaData);

const int bulletAmount = 4;

const int leftBullets = 8;
const int rightBullets = 24;

const int leftInfiniteBullets = 30;
const int rightInfiniteBullets = 31;

const int turnOnActiveBullets = 2;

const int resetBulletsOperator = 4278255615;
const int leftReplaceBullets = 16;

const int rightHp = 24;

const int leftAllies = 16;
const int rightAllies = 28;

const int leftInvinsible = 31;
const int rightInvinsible = 31;

const int leftShield = 29;
const int rightShield = 31;

const int leftBerseker = 28;
const int rightBerseker = 31;