// PowerAmplifier.h
#pragma once

struct PowerAmplifier
{
    int continuousPowerOutput;

    PowerAmplifier();
    ~PowerAmplifier();

    void returnContinuousPowerOutput();
    int returnContinuousPowerOutputValue();
};

struct PowerAmplifierWrapper
{
    PowerAmplifier* powerAmplifier1;
    PowerAmplifierWrapper(PowerAmplifier* powerAmplifier);
    ~PowerAmplifierWrapper();
};
