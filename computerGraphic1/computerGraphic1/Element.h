#pragma once

class Element
{
public:
    Element();
    ~Element();

    void print(); // print the element
    void set_id(int n); // set the id of the element
private:
    int m_id;
};
