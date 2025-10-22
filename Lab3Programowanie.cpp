#include <iostream>
#include <math.h>
using namespace std;
/*     Prosze nie zwracac uwagi tak tylko sie bawilem
int main() {
	string proba;
	string password;
	cout << "Ustaw haslo: ";
	cin >> password;
	while (true) {
		cout << "Podaj haslo: ";
		cin >> proba;
		if (password == proba) {
			cout << "Nieprawidlowe haslo" << endl;
			string try2;
			cin >> try2;
			if (password == try2) {
				cout << "Zalogowano pomyslnie" << endl;
			}
			else {
				cout << "Nieprawidlowe haslo" << endl;
			}
		}
		else {
			cout << "Nieprawidlowe haslo" << endl;
		}
	}
	return 0;
}*/

int main() {

	// Zadanie 1
	/*int a, b;
	cout << "Podaj a i b: ";
	cin >> a >> b;
	if (a > b){
		cout << a << " jest wieksze od " << b << endl;
	}
	else if (a < b) {
		cout << a << " jest mniejsze od " << b << endl;
	}
	else if (a == b) {
		cout << a << " jest rowne " << b << endl;
	}

	// Zadanie 2
	int a, b;
	cout << "Podaj a i b: ";
	cin >> a >> b;
	if (a > b) {
		cout << a << " jest wieksze od " << b << endl;
	}
	else {
		if (a < b) {
			cout << a << " jest mniejsze od " << b << endl;
		}
		else {
			cout << a << " jest rowne " << b << endl;
		}
	}

	// Zadanie 3
	float r;
	cout << "Podaj r: ";
	cin >> r;
	if (r >= 0.7 && r <= 1) {
		cout << "Bardzo silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.5 && r < 0.7) {
		cout << "Silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.3 && r < 0.5) {
		cout << "Umiarkowana korelacja dodatnia" << endl;
	}
	else if (r >= 0.2 && r < 0.3) {
		cout << "Slaba korelacja dodatnia" << endl;
	}
	else if (r >= 0 && r < 0.2) {
		cout << "Brak korelacji" << endl;
	}
	else {
		cout << "Nieprawidlowy zakres" << endl;
	}

	// Zadanie 4
	float a, b;
	char znak;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	cout << "Podaj druga liczbe : " << endl;
	cin >> b;
	cout << "Co mam z nimi zrobic? " << endl;
	cin >> znak;

	switch (znak)
	{
	case '+':
		cout << a << " + " << b << " = " << a + b << endl;
	case '-':
		cout << a << " - " << b << " = " << a - b << endl;
	case '*':
		cout << a << " * " << b << " = " << a * b << endl;
	case '/':
		if (b == 0) {
			cout << "NIE PRZEZ 0!" << endl;
		}
		else {
			cout << a << " / " << b << " = " << a / b << endl;
		}
	}

	// Zadanie 5
	bool stasiu;
	stasiu = true;
	int i;
	i = 0;
	while (stasiu) {
		cout << i;
		i++;
	}

	// Zadanie 6
	while (true) {
		float a, b;
		char znak;
		cout << "Podaj pierwsza liczbe: " << endl;
		cin >> a;
		cout << "Podaj druga liczbe : " << endl;
		cin >> b;
		cout << "Co mam z nimi zrobic? " << endl;
		cin >> znak;

		switch (znak)
		{
		case '+':
			cout << a << " + " << b << " = " << a + b << endl;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
		case '*':
			cout << a << " * " << b << " = " << a * b << endl;
		case '/':
			if (b == 0) {
				cout << "NIE PRZEZ 0!" << endl;
			}
			else {
				cout << a << " / " << b << " = " << a / b << endl;
			}
		}
		cout << "Czy chcesz zakonczyc dzialanie programu? ";
		string odp;
		cin >> odp;
		if (odp == "tak") {
			return 0;
		}
		else if (odp == "nie") {
			continue;
		}
		else {
			cout << "Nie rozumiem" << endl;
		}
	}

	// Zadanie 7
	int i;
	i = 0;
	while (true) {
		if (i >= 200) {
			break;
		}
		else if (i % 2 == 0) {
			i++;
		}
		cout << i << ", ";
		i++;
	}*/

	// Zadanie 8
	int n;

}