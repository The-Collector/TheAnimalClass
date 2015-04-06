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
#endif /* ANIMAL_H_ */
