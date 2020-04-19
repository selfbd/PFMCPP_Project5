#include "AudioRig.h"
#include "Kitchen.h"
#include "MicrowaveOven.h"
#include "PowerAmplifier.h"
#include "ToasterOven.h"
#include "Wrappers.h"

AudioRigWrapper::AudioRigWrapper(AudioRig* audioRig) : audioRig1(audioRig) {}
AudioRigWrapper::~AudioRigWrapper() { delete audioRig1; audioRig1 = nullptr; }

KitchenWrapper::KitchenWrapper(Kitchen* kitchen) : kitchen1(kitchen) {}
KitchenWrapper::~KitchenWrapper() { delete kitchen1; kitchen1 = nullptr; }

MicrowaveOvenWrapper::MicrowaveOvenWrapper(MicrowaveOven* microwaveOven) : microwaveOven1(microwaveOven) {}
MicrowaveOvenWrapper::~MicrowaveOvenWrapper() { delete microwaveOven1; microwaveOven1 = nullptr; }

PowerAmplifierWrapper::PowerAmplifierWrapper(PowerAmplifier* powerAmplifier) : powerAmplifier1(powerAmplifier) {}
PowerAmplifierWrapper::~PowerAmplifierWrapper() { delete powerAmplifier1; powerAmplifier1 = nullptr; }

ToasterOvenWrapper::ToasterOvenWrapper(ToasterOven* toasterOven) : toasterOven1(toasterOven) {}
ToasterOvenWrapper::~ToasterOvenWrapper() { delete toasterOven1; toasterOven1 = nullptr; }
