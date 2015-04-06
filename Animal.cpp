/**********************************************************
* AUTHOR			: TC & Druox 2.0
* STUDENT ID		: 366084 & 1010141
* Lab 12			: Intro to OOP
* CLASS 			: CS1B
* SECTION 			: M W 8:30a - 12:20p
* DUE DATE 			: 4/6/15
**********************************************************/
#include "Animal.h"

Animal::Animal ()
{
    age           = 0;
    value         = 0;
    isInitialized = false;

    name.clear();
    animal.clear();
}

Animal::~Animal ()
{
    age           = 0;
    value         = 0;
    isInitialized = false;

    name.clear();
    animal.clear();
}

void Animal::DisplayAnimal()
{
    const int NAME_WID  = 19;
    const int PRECISION = 2;
    const int VAL_WID   = 13;

    cout << left << fixed    << setprecision(PRECISION);
    cout << setw(ANIMAL_WID) << animal << setw(NAME_WID)
         << name  << age     << right  << setw(VAL_WID)
         << value << endl;
}

void Animal::ChangeValue(float newValue)
{
    value = newValue;
}

void Animal::ChangeAge(int newAge)
{
    age = newAge;
}

void Animal::ChangeName(string newName)
{
    name = newName;
}

void Animal::AnimalType(string type)
{
    animal = type;
}

bool Animal::IsInitialized()
{
    return isInitialized;
}

void Animal::InitializeAll(int nAge, float nValue, string nName, string nType)
{
    age    		  = nAge;
    value  	  	  = nValue;
    name     	  = nName;
    animal		  = nType;
    isInitialized = true;


}

void Animal::DisplayName()
{
    cout << name;
}

