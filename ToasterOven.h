// ToasterOven.h
#pragma once

struct ToasterOven
{
    float tempOffsetF;

    ToasterOven();
    ~ToasterOven();

    void returnTempOffset();
    float returnTempOffsetValue();
};

struct ToasterOvenWrapper
{
    ToasterOven* toasterOven1;
    ToasterOvenWrapper(ToasterOven* toasterOven);
    ~ToasterOvenWrapper();
};
