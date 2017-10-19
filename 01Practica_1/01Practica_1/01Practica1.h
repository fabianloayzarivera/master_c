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

const int BULLET_AMOUNT = 266;
const int MAX_BULLETS = 255;

const int LEFT_BULLETS = 8;
const int RIGHT_BULLETS = 24;

const int LEFT_INFINITE_BULLETS = 30;
const int RIGHT_INFINITE_BULLETS = 31;

const int TURN_ON_ACTIVE_BULLETS = 2;

const int RESET_BULLETS_OPERATOR = 4278255615;
const int LEFT_REPLACE_BULLETS = 16;

const int RIGHT_HP = 24;

const int LEFT_ALLIES = 16;
const int RIGHT_ALLIES = 28;

const int LEFT_INVINSIBLE = 31;
const int RIGHT_INVINSIBLE = 31;

const int LEFT_SHIELD = 29;
const int RIGHT_SHIELD = 31;

const int LEFT_BERSEKER = 28;
const int RIGHT_BERSEKER = 31;