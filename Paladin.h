#pragma once
#include<iostream>
using namespace std;
class paladin {
private:
	string name;
	int hp;
	int damage;
	int armor;
	int crit;
public:
	paladin(string fname, int fhp, int fdamage, int farmor, int fcrit) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		crit = fcrit;
	}
	~paladin() {
		cout << "paladin destroyed\n";
	}
	string getName() { return name; }
	int getHp() { return hp; }
	int getDamage() {
		return damage;
	}
	int getArmor() { return armor; }
	int getCrit() { return crit; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamage(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCrit(int fcrit) { crit = fcrit; }
	void printPaladin() {
		cout << "Paladin" << ' ' << name << ' ' << "has" << ' ' << hp << ' ' << "hp\n";
	}
};
