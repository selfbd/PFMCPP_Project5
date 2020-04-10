/*
Project 5: Part 1 / 4
 video Chapter 2 - Part 12

 Create a branch named Part1

Purpose:  This project continues developing Project3 and will take you through how to write code that doesn't leak as well as how to refactor. 

 Destructors

 If you didn't do Project3, write 3 UDTs below (where it asks for Copied UDTs) that have: 
        member functions,
        member variables, 
        constructors that initialize the members. 
        for() or while() loops that modify member variables
        
 Define your implementations of all functions OUTSIDE of the class. 
 Then do instruction 2)
 
 If you DID do Project 3, do instruction 1)
 
 1) Copy a few of your user-defined types (the ones with constructors and for()/while() loops from Project 3) here
 2) add destructors
        make the destructors do something like print out the name of the class.

	If you already did Chapter2 part 10 on Coliru and don't have a Project3, just grab some UDTs from your Coliru Ch2P10 submission. 
 
 3) add 2 new UDTs that use only the types you copied above.
 4) Add destructors to these 2 new types that do stuff.  
        maybe print out the name of the class being destructed, or call a member function of one of the members.  be creative
 
 5) copy over your main() from the end of Project3 and get it to compile with the types you copied over.
        remove any code in main() that uses types you didn't copy over.
 
 6) Instantiate your 2 UDT's from step 4) in the main() function at the bottom.
 
 7) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

// ======================================================================
#include <iostream>

/*
 copied UDT 1:
 */

struct ToasterOven
{
    int numRacks = 1;
    int numHeatingModes = 2;
    int rackLengthIn = 9;
    int rackWidthIn = 6;
    int cookingTimeMax = 10;
    float temperatureOffsetF = 0.0f;

    struct CookingSpec
    {
        int temperatureF;
        int timeMin;      

        CookingSpec() : temperatureF(400), timeMin(5) {}
    };

    ToasterOven()
    {
        std::cout << "ToasterOven ctor" << std::endl;
        temperatureOffsetF = 0.02f;
    } 
    ~ToasterOven()
    {
        std::cout << "ToasterOven dtor" << std::endl;
    }
    void printTemperatureOffsetF()
    {
        std::cout << "Toaster oven temperatureOffsetF = " << temperatureOffsetF << std::endl;
    }
    void cookItem (CookingSpec cookSpec);
    void timeItemCooking (CookingSpec cookSpec);
    void activateItemDoneNotification (CookingSpec cookSpec);
    void monitorTimeRemainingMin(int cookingTimeMin);

    CookingSpec itemSpec;
};

void ToasterOven::cookItem(CookingSpec cookSpec)
{
    if(cookSpec.temperatureF > 100) {}         // do something
}

void ToasterOven::timeItemCooking(CookingSpec cookSpec)
{
    if(cookSpec.timeMin > 0) {}                // do something
}

void ToasterOven::activateItemDoneNotification(CookingSpec cookSpec)
{
    auto durationMin = 6;
    if(durationMin > cookSpec.timeMin) {}     // do something
}

void ToasterOven::monitorTimeRemainingMin(int cookingTimeMin)
{
    int timeRemaining = cookingTimeMin;

    while (timeRemaining > 0)
    {
        std::cout << "Toaster oven cooking time remaining = " << timeRemaining << std::endl; 
        timeRemaining -= 1;       
    }
    std::cout << "Toaster oven cooking time complete" << std::endl; 
}

// ======================================================================

/*
 copied UDT 2:
 */

 struct MicrowaveOven
 {
    int powerW = 1000;
    int numHeatingModes = 3;
    int platterDiameterIn = 12;
    float weightPounds = 12.5f;
    float volumeCubicIn = 4096.0f;
    int yearManufactured = 1978;

    struct CookingSpec
    {
        int powerLevel;
        int timeMin;  

        CookingSpec() : powerLevel(5), timeMin(5) {}
    };

    MicrowaveOven()
    {
        std::cout << "MicrowaveOven ctor" << std::endl;
        yearManufactured = 1970;
    } 
    ~MicrowaveOven()
    {
        std::cout << "MicrowaveOven dtor" << std::endl;
    }
    void printYearManufactured()
    {
        std::cout << "MicrowaveOven yearManufactured = " << yearManufactured << std::endl;
    }
    void cookItem (CookingSpec cookSpec);
    void timeItemCooking (CookingSpec cookSpec);
    void activateItemDoneNotification (CookingSpec cookSpec);
    void monitorTimeRemainingMin(int cookingTimeMin);
    void rampPowerLevelUp(int powerLevel, int rampStep);
    void rampPowerLevelDown(int powerLevel, int rampStep);
    void printPowerLevel(int powerLevel);

    CookingSpec itemSpec;
 };

void MicrowaveOven::cookItem(CookingSpec cookSpec)
{
    if(cookSpec.powerLevel > 1) {}             // do something
}

void MicrowaveOven::timeItemCooking(CookingSpec cookSpec)
{
    if(cookSpec.timeMin > 0) {}                // do something
}

void MicrowaveOven::activateItemDoneNotification(CookingSpec cookSpec)
{
    auto durationMin = 6;
    if(durationMin > cookSpec.timeMin) {}     // do something
}

void MicrowaveOven::monitorTimeRemainingMin(int cookingTimeMin)
{
    int timeRemaining = cookingTimeMin;

    while (timeRemaining > 0)
    {
        std::cout << "Microwave oven cooking time remaining = " << timeRemaining << std::endl; 
        timeRemaining -= 1;       
    }
    std::cout << "Microwave oven cooking time complete" << std::endl; 
}

void MicrowaveOven::printPowerLevel(int powerLevel)
{
    std::cout << "Microwave oven power level = " << powerLevel << std::endl; 
}

void MicrowaveOven::rampPowerLevelUp(int powerLevel, int rampStep)
{
    int currentLowerLevel = 0;

    for (int i = 0; i <= powerLevel; ++i)
    {
        if (currentLowerLevel > 0) printPowerLevel(currentLowerLevel); 
        currentLowerLevel += rampStep;
    }
}

void MicrowaveOven::rampPowerLevelDown(int powerLevel, int rampStep)
{
    int currentLowerLevel = powerLevel;

    for (int i = currentLowerLevel; i >= 0; --i)
    {
        if (currentLowerLevel > 0) printPowerLevel(currentLowerLevel); 
        currentLowerLevel -= rampStep;
    }
}

// ======================================================================
/*
 copied UDT 3:
 */

// (BDS 4/1092020)
// Modified from completed project 3 submission for this project5-part1 requirements

struct PowerAmplifier
{
    int continuousPowerOutputRmsW = 100;
    float thdPct = 0.002f;
    int snrDb = 93;
    float inputSensitivityV = 1.09f;
    float weightPounds = 51.9f;
    int yearManufactured = 1960;
    int onDelay = 1;
    int offDelay = 1;

    PowerAmplifier()
    {
        std::cout << "PowerAmplifier ctor" << std::endl;
    }
    ~PowerAmplifier()
    {
        std::cout << "PowerAmplifier dtor" << std::endl;
    }
    int setOutputStandby();
    int setOutputLevel(float level = 10.2f);
    int setOutputOff(); 
    int setOutputOn(); 
    void powerOnDelay(int delay);
    void powerOffDelay(int delay);
};

int PowerAmplifier::setOutputStandby()
{
    // do something
    return 0;
}

int PowerAmplifier::setOutputLevel(float level)
{
    if(level > 0.0f) {}     // do something
    return 0;
}

// Future refactor opportunity to re-use a single more generic "power ON/OFF state transition" and delay functions

int PowerAmplifier::setOutputOff()
{
    std::cout << "PowerAmplifier output OFF" << std::endl;
    return 0;
}

int PowerAmplifier::setOutputOn()
{
    std::cout << "PowerAmplifier output ON" << std::endl;
    return 0;
}

void PowerAmplifier::powerOnDelay(int delay)
{
    onDelay = delay;
    for (int i = delay; i >= 0; --i)
    {
        if (i > 0) std::cout << "Power ON delay time remaining = " << i << std::endl;
    }
}

void PowerAmplifier::powerOffDelay(int delay)
{
    offDelay = delay;
    for (int i = delay; i >= 0; --i)
    {
        if (i > 0) std::cout << "Power OFF delay time remaining = " << i << std::endl;
    }
}

// ======================================================================
/*
 new UDT 4:
 */

struct Kitchen
{
    ToasterOven toasterOven;
    MicrowaveOven microwaveOven;
    PowerAmplifier powerAmplifier;

    Kitchen()
    {
        std::cout << "Kitchen ctor" << std::endl;
    }
    ~Kitchen()
    {
        std::cout << "Kitchen dtor" << std::endl;
    }
};

// ======================================================================

/*
 new UDT 5:
 */

struct AudioRig
{
    PowerAmplifier powerAmplifier;

    AudioRig()
    {
        std::cout << "AudioRig ctor" << std::endl;
    }
    ~AudioRig()
    {
        powerAmplifier.powerOffDelay(5);
        powerAmplifier.setOutputOff();
        std::cout << "AudioRig dtor" << std::endl;
    }
};

// ======================================================================

int main()
{
    std::cout << std::endl;

    ToasterOven toasterOven;
    toasterOven.printTemperatureOffsetF();
    toasterOven.itemSpec.timeMin = 10;
    toasterOven.monitorTimeRemainingMin(toasterOven.itemSpec.timeMin);

    std::cout << std::endl;
    MicrowaveOven microwaveOven;
    microwaveOven.printYearManufactured();
    microwaveOven.itemSpec.powerLevel = 10;
    microwaveOven.itemSpec.timeMin = 5;
    microwaveOven.rampPowerLevelUp(microwaveOven.itemSpec.powerLevel, 1);
    microwaveOven.monitorTimeRemainingMin(toasterOven.itemSpec.timeMin);
    microwaveOven.rampPowerLevelDown(microwaveOven.itemSpec.powerLevel, 1);

    std::cout << std::endl;
    PowerAmplifier powerAmp;
    powerAmp.powerOnDelay(2);
    powerAmp.setOutputOn();

    std::cout << std::endl;
    Kitchen kitchen;
    AudioRig audioRig;

    std::cout << std::endl;
}
