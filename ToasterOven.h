// ToasterOven.h
#pragma once
#include "LeakedObjectDetector.h"

struct ToasterOven
{
    float tempOffsetF;

    ToasterOven();
    ~ToasterOven();

    void returnTempOffset();
    float returnTempOffsetValue();

    JUCE_LEAK_DETECTOR(ToasterOven)    
};

struct ToasterOvenWrapper
{
    ToasterOven* toasterOven1;
    ToasterOvenWrapper(ToasterOven* toasterOven);
    ~ToasterOvenWrapper();
};
