#include <iostream>
using namespace std;

class Stove
{
    private: // Encapsulation, data hiding
        int temperature;
        bool on;
    
    public:

        Stove(int tempreture) // Constructor
        {
            setTemperature(temperature);
        }

        int getTemperature() // getter
        {
            return temperature;
        }

        void setTemperature(int temperature) // setter
        {
            if (temperature < 0)
            {
                this -> temperature = 0;
            }
            else if (temperature > 20)
            {
                this -> temperature = 10;
            }
            else
            {
                this -> temperature = temperature; // this -> is a pointer to the object
            }
            
        }

        bool isOn()
        {
            return on;
        }

        void setOn(bool on)
        {
            this->on = on;
        }
};

int main()
{
    /*
    Abstraction = hiding the complex implementation details and showing only the necessary features of an object
    getters = methods that get the value of a variable
    setters = methods that set the value of a variable

    syntax:

    getter:
    dataType getVariable()
    {
        return variable;
    }
    
    setter:
    void setVariable(dataType variable)
    {
        this->variable = variable;
    }
    */

    Stove stove(200);
    stove.setTemperature(12);
    cout << stove.getTemperature() << '\n';


    return 0;
}