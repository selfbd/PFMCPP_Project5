// Wrappers.h
#pragma once

struct MicrowaveOven;
struct PowerAmplifier;
struct ToasterOven; 

struct MicrowaveOvenWrapper
{
    MicrowaveOven* microwaveOven1;
    MicrowaveOvenWrapper(MicrowaveOven* microwaveOven);
    ~MicrowaveOvenWrapper();
};

struct PowerAmplifierWrapper
{
    PowerAmplifier* powerAmplifier1;
    PowerAmplifierWrapper(PowerAmplifier* powerAmplifier);
    ~PowerAmplifierWrapper();
};

struct ToasterOvenWrapper
{
    ToasterOven* toasterOven1;
    ToasterOvenWrapper(ToasterOven* toasterOven);
    ~ToasterOvenWrapper();
};
