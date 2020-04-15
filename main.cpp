/*
 Project 5: Part 4 / 4
 video: Chapter 3 Part 7

 Create a branch named Part4
 
 Don't #include what you don't use
 
 1) Your task is to refactor your Chapter 3 Part 4 task into separate source and header files.
         Add files via the pane on the left.
 
 2) Put all of your declarations for each class in .h files
         One header file per class ( i.e. Raider.h for a class named "Raider" )
 
 3) Put all of your implementations in .cpp files.
         one cpp file per class ( i.e. Raider.cpp for a class named "Raider" )
 
 4) Put all of your Wrapper classes in a single Wrappers.h file
         if you implemented your wrapper class functions in-class, you'll need to move them to Wrappers.cpp
 
 5) NO IN-CLASS IMPLEMENTATION ALLOWED.
         the only exception is the existing Atomic.h and LeakedObjectDetector.h
 
 6) for every .cpp file you have to make, insert it into the .replit file after 'main.cpp'.  Don't forget the spaces between file names.
 If you need help with this step, send me a DM.
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 Remember, your Chapter 3 Part 4 task worked when it was all in one file. so you shouldn't need to edit any of it.  
         just split it up into source files and provide the appropriate #include directives.
 */


// ======================================================================

#include <iostream>
#include "LeakedObjectDetector.h"

struct ToasterOven
{
    float tempOffsetF;

    ToasterOven()
    {
        std::cout << "ToasterOven ctor" << std::endl;
        tempOffsetF = 0.02f;
    } 
    ~ToasterOven() {std::cout << "ToasterOven dtor" << std::endl;}

    void returnTempOffset()
    {
        std::cout << "ToasterOven returnTempOffsetValue(): " << this->returnTempOffsetValue() << " and ToasterOven tempOffsetF: " << this->tempOffsetF << std::endl;
    }
    float returnTempOffsetValue() {return 0.023f;}

    JUCE_LEAK_DETECTOR(ToasterOven)
};

struct ToasterOvenWrapper
{
    ToasterOvenWrapper(ToasterOven* toasterOven) : toasterOven1(toasterOven) { }
    ~ToasterOvenWrapper() { delete toasterOven1; }
    ToasterOven* toasterOven1 = nullptr;
};

// ======================================================================

 struct MicrowaveOven
 {
    int yearManufactured;

    MicrowaveOven()
    {
        std::cout << "MicrowaveOven ctor" << std::endl;
        yearManufactured = 1990;
    } 
    ~MicrowaveOven() {std::cout << "MicrowaveOven dtor" << std::endl;}

    void returnYearManufactured()
    {
        std::cout << "MicrowaveOven returnYearManufacturedValue(): " << this->returnYearManufacturedValue() << " and MicrowaveOven yearManufactured: " << this->yearManufactured  << std::endl;
    }
    int returnYearManufacturedValue() {return 1992;}

    JUCE_LEAK_DETECTOR(MicrowaveOven)
 };

struct MicrowaveOvenWrapper
{
    MicrowaveOvenWrapper(MicrowaveOven* microwaveOven) : microwaveOven1(microwaveOven) { }
    ~MicrowaveOvenWrapper() { delete microwaveOven1; }
    MicrowaveOven* microwaveOven1 = nullptr;
};

// ======================================================================

struct PowerAmplifier
{
    int continuousPowerOutput;

    PowerAmplifier()
    {
        std::cout << "PowerAmplifier ctor" << std::endl;
        continuousPowerOutput = 100;
    }
    ~PowerAmplifier() {std::cout << "PowerAmplifier dtor" << std::endl;}

    void returnContinuousPowerOutput()
    {
        std::cout << "PowerAmplifier returnContinuousPowerOutputValue(): " << this->returnContinuousPowerOutputValue() << " and PowerAmplifier continuousPowerOutput: " << this->continuousPowerOutput  << std::endl;
    }
    int returnContinuousPowerOutputValue() {return 99;}

    JUCE_LEAK_DETECTOR(PowerAmplifier)
};

struct PowerAmplifierWrapper
{
    PowerAmplifierWrapper(PowerAmplifier* powerAmplifier) : powerAmplifier1(powerAmplifier) { }
    ~PowerAmplifierWrapper() { delete powerAmplifier1; }
    PowerAmplifier* powerAmplifier1 = nullptr;
};

// ======================================================================

int main()
{
    std::cout << std::endl;
    ToasterOvenWrapper toasterOven11Wrapper( new ToasterOven() );
    std::cout << "toasterOven11Wrapper.toasterOven1->returnTempOffsetValue(): " << toasterOven11Wrapper.toasterOven1->returnTempOffsetValue() << " and toasterOven11Wrapper.toasterOven1->tempOffsetF: " << toasterOven11Wrapper.toasterOven1->tempOffsetF << std::endl;
    toasterOven11Wrapper.toasterOven1->returnTempOffset();

    std::cout << std::endl;
    MicrowaveOvenWrapper microwaveOven1Wrapper( new MicrowaveOven() );
    std::cout << "microwaveOven1Wrapper.microwaveOven1->returnYearManufactured(): " << microwaveOven1Wrapper.microwaveOven1->returnYearManufacturedValue() << " and microwaveOven1Wrapper.microwaveOven1->yearManufactured: " << microwaveOven1Wrapper.microwaveOven1->yearManufactured << std::endl;
    microwaveOven1Wrapper.microwaveOven1->returnYearManufactured();

    std::cout << std::endl;
    PowerAmplifierWrapper powerAmp1Wrapper( new PowerAmplifier() );
    std::cout << "powerAmp1Wrapper.powerAmplifier1->returnContinuousPowerOutputValue(): " << powerAmp1Wrapper.powerAmplifier1->returnContinuousPowerOutputValue() << " and powerAmp1Wrapper.powerAmplifier1->continuousPowerOutput: " << powerAmp1Wrapper.powerAmplifier1->continuousPowerOutput << std::endl;
    powerAmp1Wrapper.powerAmplifier1->returnContinuousPowerOutput();

    std::cout << std::endl;
    return 0;
}

