// PowerAmplifier.h
#pragma once
#include "LeakedObjectDetector.h"

struct PowerAmplifier
{
    int continuousPowerOutput;

    PowerAmplifier();
    ~PowerAmplifier();

    void returnContinuousPowerOutput();
    int returnContinuousPowerOutputValue();

    JUCE_LEAK_DETECTOR(PowerAmplifier)    
};
