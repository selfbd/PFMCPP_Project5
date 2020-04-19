#include <iostream>
#include "ToasterOven.h"

ToasterOven::ToasterOven()
{
    std::cout << "ToasterOven ctor" << std::endl;
    tempOffsetF = 0.02f;
}

ToasterOven::~ToasterOven() { std::cout << "ToasterOven dtor" << std::endl; }

void ToasterOven::returnTempOffset()
{
    std::cout << "ToasterOven returnTempOffsetValue(): " << this->returnTempOffsetValue() << " and ToasterOven tempOffsetF: " << this->tempOffsetF << std::endl;
}

float ToasterOven::returnTempOffsetValue() { return 0.023f; }
