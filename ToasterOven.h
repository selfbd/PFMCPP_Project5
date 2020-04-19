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
