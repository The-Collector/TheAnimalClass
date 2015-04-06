/**********************************************************
* AUTHOR			: TC & Druox 2.0
* STUDENT ID		: 366084 & 1010141
* Lab 12			: Intro to OOP
* CLASS 			: CS1B
* SECTION 			: M W 8:30a - 12:20p
* DUE DATE 			: 4/6/15
**********************************************************/
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include "header.h"
class Animal
{
  public:
    Animal ();
    ~Animal ();

    void InitializeAll(int nAge, float nValue, string nName, string nType);
    void ChangeAge(int newAge);
    void ChangeValue(float newValue);
    void DisplayAnimal();
    void ChangeName(string newName);
    void AnimalType(string type);
    bool IsInitialized();
    void DisplayName();

  private:
    int    age;
    double value;
    string name;
    string animal;
    bool   isInitialized;
};

void Initialize(Animal &fluffy, Animal &maa, Animal &babe);
void AgeChange(Animal &fluffy, Animal &maa, Animal &babe);
void DisplayAllAnimals(Animal fluffy, Animal maa, Animal babe);
void ValueChange(Animal &fluffy, Animal &maa, Animal &babe);

#endif /* ANIMAL_H_ */
