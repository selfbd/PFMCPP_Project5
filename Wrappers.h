#pragma once

struct AudioRig;
struct Kitchen;
struct MicrowaveOven;
struct PowerAmplifier;
struct ToasterOven; 

struct AudioRigWrapper
{
    AudioRig* audioRig1;
    AudioRigWrapper(AudioRig* audioRig);
    ~AudioRigWrapper();
};

struct KitchenWrapper
{
    Kitchen* kitchen1;
    KitchenWrapper(Kitchen* kitchen);
    ~KitchenWrapper();
};

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
