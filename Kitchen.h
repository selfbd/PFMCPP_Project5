#pragma once
#include "ToasterOven.h"
#include "MicrowaveOven.h"
#include "PowerAmplifier.h"
#include "LeakedObjectDetector.h"

struct Kitchen
{
    ToasterOven toasterOven;
    MicrowaveOven microwaveOven;
    PowerAmplifier powerAmplifier;

    Kitchen();
    ~Kitchen();

    JUCE_LEAK_DETECTOR(Kitchen)    
};
