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
#include "MicrowaveOven.h"
#include "PowerAmplifier.h"
#include "ToasterOven.h"
#include "Wrappers.h"

int main()
{
    std::cout << std::endl;
    ToasterOvenWrapper toasterOven1Wrapper( new ToasterOven() );
    std::cout << "toasterOven1Wrapper.toasterOven1->returnTempOffsetValue(): " << toasterOven1Wrapper.toasterOven1->returnTempOffsetValue() << " and toasterOven1Wrapper.toasterOven1->tempOffsetF: " << toasterOven1Wrapper.toasterOven1->tempOffsetF << std::endl;
    toasterOven1Wrapper.toasterOven1->returnTempOffset();

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

