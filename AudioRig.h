#pragma once
#include "PowerAmplifier.h"
#include "LeakedObjectDetector.h"

struct AudioRig
{
    PowerAmplifier powerAmplifier;

    AudioRig();
    ~AudioRig();

    JUCE_LEAK_DETECTOR(AudioRig)    
};
