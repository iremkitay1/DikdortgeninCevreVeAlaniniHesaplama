#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int kisaKenar, uzunKenar, alan, cevre;
	cout << "Kýsa kenarý giriniz : ";
	cin >> kisaKenar;
	cout << "Uzun kenarý giriniz : ";
	cin >> uzunKenar;
	alan = kisaKenar * uzunKenar;
	cevre = 2 * (uzunKenar + kisaKenar);
	cout << "Dikdörtgenin alaný : " << alan << endl;
	cout << "Dikdörtgenin çevresi : " << cevre << endl;

	return 0;
}