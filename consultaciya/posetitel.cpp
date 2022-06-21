#include "posetitel.h"

gaySportzal::gaySportzal() {
	posetiteli.shrink_to_fit();
}

int gaySportzal::amountPos()
{
	return posetiteli.size();
}

int gaySportzal::minAge()
{
	int min = 1000;
	for (int i = 0; i < posetiteli.size(); i++) {
		if (posetiteli[i].age < min) {
			min = posetiteli[i].age;
		}
	}
	return min;
}

int gaySportzal::maxAge()
{
	int max = 0;
	for (int i = 0; i < posetiteli.size(); i++) {
		if (posetiteli[i].age > max) {
			max = posetiteli[i].age;
		}
	}
	return max;
}

int gaySportzal::midAge()
{
	int sum = 0;
	for (int i = 0; i < posetiteli.size(); i++) {
		sum += posetiteli[i].age;
	}
	return sum / posetiteli.size();
}

Posetitel::Posetitel() {
	age = 0;
}

Posetitel::Posetitel(int a, gaySportzal da) {
	age = a;
	da.posetiteli.push_back(*this);
}