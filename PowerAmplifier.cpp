#include <iostream>
#include "PowerAmplifier.h"

PowerAmplifier::PowerAmplifier()
{
    std::cout << "PowerAmplifier ctor" << std::endl;
    continuousPowerOutput = 100;
}

PowerAmplifier::~PowerAmplifier() { std::cout << "PowerAmplifier dtor" << std::endl; }

void PowerAmplifier::PowerAmplifier::returnContinuousPowerOutput()
{
    std::cout << "PowerAmplifier returnContinuousPowerOutputValue(): " << this->returnContinuousPowerOutputValue() << " and PowerAmplifier continuousPowerOutput: " << this->continuousPowerOutput  << std::endl;
}

int PowerAmplifier::returnContinuousPowerOutputValue() { return 99; }
