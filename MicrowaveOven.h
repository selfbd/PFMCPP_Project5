// MicrowaveOven.h
#pragma once
#include "LeakedObjectDetector.h"

struct MicrowaveOven
{
    int yearManufactured;

    MicrowaveOven();
    ~MicrowaveOven();

    void returnYearManufactured();
    int returnYearManufacturedValue();
    
    JUCE_LEAK_DETECTOR(MicrowaveOven)
};

struct MicrowaveOvenWrapper
{
    MicrowaveOven* microwaveOven1;
    MicrowaveOvenWrapper(MicrowaveOven* microwaveOven);
    ~MicrowaveOvenWrapper();
};
