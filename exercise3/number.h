#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>

using namespace std;

class Number
{
protected:
    int m_value;

public:
    Number(int value);
    
    virtual void print_it() const = 0;
    
    ~Number();
};

#endif