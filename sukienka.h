#ifndef SUKIENKA
#define SUKIENKA
#include <string>
using namespace std;

///Maciej Tarnowski 1g
///
///Klasa reprezentuje sukienkê
///


class sukienka
{
private:
	char m_rozmiar;
	string m_kolor;
	float m_dlugosc;
	string m_material;
	float m_waga;

public:

	///konstruktor parametryczny
	///r (rozmiar) - litera
	///k (kolor) - napis
	///d (dlugosc) - liczba
	///m (materia³) - napis
	///w (waga) - liczba
	sukienka(char r, string k, float d, string m, float w);


	///destruktor domyœlny

	~sukienka();





};
#endif//SUKIENKA
