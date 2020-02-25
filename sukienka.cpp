#include "sukienka.h"
#include <string>

///konstrunkor parametryczny
sukienka::sukienka(char r, string k, float d, string m, float w)
{
	m_rozmiar = r;
	m_kolor = k;
	m_dlugosc = d;
	m_material = m;
	m_waga = w;

}
//destruktor domyœlny
sukienka::~sukienka()
{

}