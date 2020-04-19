// MicrowaveOven.h
#pragma once

struct MicrowaveOven
{
    int yearManufactured;

    MicrowaveOven();
    ~MicrowaveOven();

    void returnYearManufactured();
    int returnYearManufacturedValue();
};

struct MicrowaveOvenWrapper
{
    MicrowaveOven* microwaveOven1;
    MicrowaveOvenWrapper(MicrowaveOven* microwaveOven);
    ~MicrowaveOvenWrapper();
};
