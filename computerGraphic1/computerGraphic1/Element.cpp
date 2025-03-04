#include "Element.h"
#include<iostream>
using namespace std;


void Element::set_id(int n)
{
	m_id = n;
}

void Element::print()
{
	cout << m_id << endl;
}