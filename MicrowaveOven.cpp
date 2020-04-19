// MicrowaveOven.cpp
#include <iostream>
#include "MicrowaveOven.h"

MicrowaveOven::MicrowaveOven()
{
    std::cout << "MicrowaveOven ctor" << std::endl;
    yearManufactured = 1990;
}

MicrowaveOven::~MicrowaveOven() {std::cout << "MicrowaveOven dtor" << std::endl;}

void MicrowaveOven::returnYearManufactured()
{
    std::cout << "MicrowaveOven returnYearManufacturedValue(): " << this->returnYearManufacturedValue() << " and MicrowaveOven yearManufactured: " << this->yearManufactured  << std::endl;
}

int MicrowaveOven::returnYearManufacturedValue() {return 1992;}

