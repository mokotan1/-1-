#include"Element.cpp"

class Set
{
public:
	Set(int n);
	~Set();
	void print(); //Element�� print()ȣ��
private:
	Element* m_element;
	int m_number; //Element�� ����
};