#include "set.h"
#include "Element.h"

Set::Set(int n)
{
	m_number = n;
}

void Set::print()
{
	for (int i = 0; i < m_number; i++)
	{
		m_element[i].print();
	}
}
