#include"Element.cpp"

class Set
{
public:
	Set(int n);
	~Set();
	void print(); //Element의 print()호출
private:
	Element* m_element;
	int m_number; //Element의 갯수
};