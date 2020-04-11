/*
 Project 5: Part 3 / 4
 video: Chapter 3 Part 4: 

Create a branch named Part3

 the 'new' keyword

 1) add #include "LeakedObjectDetector.h" to main
 
 3) Add 'JUCE_LEAK_DETECTOR(OwnerClass)' at the end of your UDTs.
 
 4) write the name of your class where it says "OwnerClass"
 
 5) write wrapper classes for each type similar to how it was shown in the video
 
 7) update main to use your wrapper classes, which have your UDTs as pointer member variables.
 
 8) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 see here for an example: https://repl.it/@matkatmusic/ch3p04example
 */











// ======================================================================

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
};

// ======================================================================

int main()
{
    std::cout << std::endl;
    ToasterOven toasterOven;
    std::cout << "toasterOven returnTempOffsetValue(): " << toasterOven.returnTempOffsetValue() << " and toasterOven tempOffsetF: " << toasterOven.tempOffsetF << std::endl;
    toasterOven.returnTempOffset();

    std::cout << std::endl;
    MicrowaveOven microwaveOven;
    std::cout << "microwaveOven returnYearManufacturedValue(): " << microwaveOven.returnYearManufacturedValue() << " and microwaveOven yearManufactured: " << microwaveOven.yearManufactured << std::endl;
    microwaveOven.returnYearManufactured();

    std::cout << std::endl;
    PowerAmplifier powerAmp;
    std::cout << "powerAmp returnContinuousPowerOutputValue(): " << powerAmp.returnContinuousPowerOutputValue() << " and powerAmp continuousPowerOutput: " << powerAmp.continuousPowerOutput << std::endl;
    powerAmp.returnContinuousPowerOutput();

    std::cout << std::endl;
}
