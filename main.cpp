/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 The purpose of this project part is to show you how accessing member variables of objects INSIDE member functions is very similar to accessing member variables of objects OUTSIDE of member functions, via 'this->' and via the '.' operator.
 This project part will break the D.R.Y. rule, but that is fine for the purpose of this project part.
 
 
 1) if you don't have any std::cout statements in main() that access member variables of your U.D.Ts
         write some.
    You can copy some from your Project3's main() if needed.
 
 2) For each std::cout statement in main() that accessed member variables of your types or printed out the results of your member function calls,
        a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
        b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
        c) call that member function after your std::cout statement in main.
        d) you should see 2 (almost) identical messages in the program output for each member function you add:
            one for the std::cout line, and one for the member function's output
 
 
 3) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
#include <iostream>
namespace Example
{
    //a User-Defined Type
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
		
		// 2a) the member function whose function body is almost identical to the std::cout statement in main.
        void memberFunc() 
		{ 
            // 2b) explicitly using 'this' inside this member function.
			std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; 
		}  
		
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    
    int main()
    {
        //an instance of the User-Defined Type named mf
        MyFoo mf;
		
        // 1) a std::cout statement that uses mf's member variables
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl; 
		
        // 2c) calling mf's member function.  the member function's body is almost identical to the cout statement above.
        mf.memberFunc();
        return 0;
    }
}

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
