#pragma once
#include<iostream>
#include<ctime>
using namespace std;
class knight {
private:
	string name;
	int hp;
	int damage;
	int armor;
	int crit;
public:
	knight(string fname, int fhp, int fdamage, int farmor, int fcrit) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		crit = fcrit;
	}
	~knight() {
		cout << "Knight destroyed\n";
	}
	string getName() { return name; }
	int getHp() { return hp; }
	int getDamage() { return damage; }
	int getArmor() { return armor; }
	int getCrit() { return crit; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamage(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCrit(int fcrit) { crit = fcrit; }
	void printKnight() {
		cout << "Knight"<< ' ' << name << ' ' << "has" << ' '  << hp << ' ' << "hp\n";
	}
};
