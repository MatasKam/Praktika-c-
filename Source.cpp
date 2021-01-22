#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <random>
#include <chrono>
#include <numeric>
#include <list>

using namespace std;
class elektros_prietaisas {
	string prod;
	int galia =3;
	int aukstis =5;
	int plotis =6;
	int gylis =6;
	elektros_prietaisas(string pr) : prod(pr) {}
public:
	elektros_prietaisas(string a) :prod{ a } {}
	friend elektros_prietaisas operator+(const elektros_prietaisas& produktas) {
		return elektros_prietaisas{ produktas};
	}
	friend ostream& operator<<(ostream& out, const elektros_prietaisas& produktas) {
		out << produktas << "i\n";
		return out;
	}
	string getPrietaisas() const { return prod; }
	int getGalia() const { return galia; }
	int getAukstis() const { return aukstis; }
	int getPlotis() const { return plotis; }
	int getGylis() const { return gylis; }
};

class virykle :public elektros_prietaisas {
public:
	string marke;
};

void vykdo(elektros_prietaisas &el) {
	cout << el.getPrietaisas() << " galia: " << el.getGalia() << el.getAukstis() << el.getPlotis() << el.getGylis() << endl;
}

int main ()
{
	string produktas;
	cout << "Iveskite penkis produktus: " << endl;
	for (int i = 0; i < 5; i++) { 
		cin >> produktas; 
		vykdo(produktas);
	}
}