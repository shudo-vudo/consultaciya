#ifndef POSETITEL_H
#define POSETITEL_H

#include <iostream>
#include <vector>

using namespace std;

class gaySportzal {
protected:
	gaySportzal();
public:
	static vector<Posetitel> posetiteli;
	int amountPos();
	int minAge();
	int maxAge();
	int midAge();
};

class Posetitel {
public:
	int age;
	Posetitel();
	Posetitel(int, gaySportzal);
};

#endif

