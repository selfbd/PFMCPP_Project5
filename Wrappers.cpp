// Wrappers.cpp
#include "ToasterOven.h"
#include "MicrowaveOven.h"
#include "PowerAmplifier.h"
#include "Wrappers.h"

ToasterOvenWrapper::ToasterOvenWrapper(ToasterOven* toasterOven) : toasterOven1(toasterOven) {}
ToasterOvenWrapper::~ToasterOvenWrapper() { delete toasterOven1; toasterOven1 = nullptr; }

MicrowaveOvenWrapper::MicrowaveOvenWrapper(MicrowaveOven* microwaveOven) : microwaveOven1(microwaveOven) {}
MicrowaveOvenWrapper::~MicrowaveOvenWrapper() { delete microwaveOven1; microwaveOven1 = nullptr; }

PowerAmplifierWrapper::PowerAmplifierWrapper(PowerAmplifier* powerAmplifier) : powerAmplifier1(powerAmplifier) {}
PowerAmplifierWrapper::~PowerAmplifierWrapper() { delete powerAmplifier1; powerAmplifier1 = nullptr; }
