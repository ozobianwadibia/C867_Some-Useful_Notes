/* Write a copy assignment operator for CarCounter that assigns objToCopy.carCount to the new objects's carCount, then returns *this. Sample output for the given program:
Cars counted: 12 */

#include <iostream>
using namespace std;

class CarCounter
{
public:
    CarCounter();
    CarCounter &operator=(const CarCounter &objToCopy);
    void SetCarCount(const int setVal)
    {
        carCount = setVal;
    }
    int GetCarCount() const
    {
        return carCount;
    }

private:
    int carCount;
};

CarCounter::CarCounter()
{
    carCount = 0;
    return;
}

// FIXME write copy assignment operator

/* Your solution goes here  */
CarCounter &CarCounter::operator=(const CarCounter &objToCopy)
{
    carCount = objToCopy.carCount;
}

int main()
{
    CarCounter frontParkingLot;
    CarCounter backParkingLot;

    frontParkingLot.SetCarCount(12);
    backParkingLot = frontParkingLot;

    cout << "Cars counted: " << backParkingLot.GetCarCount();

    return 0;
}

/* 
#include <iostream>
using namespace std;

class MyClass {
public:
   MyClass();
   ~MyClass();
   MyClass& operator=(const MyClass& objToCopy);
   
   // Set member value dataObj
   void SetDataObj(const int setVal) {
      *dataObj = setVal;
   }
   
   // Return member value dataObj
   int GetDataObj() const {
      return *dataObj;
   }
private:
   int* dataObj;// Data member
};

// Default constructor
MyClass::MyClass() {
   cout << "Constructor called." << endl;
   dataObj = new int; // Allocate mem for data
   *dataObj = 0;

   return;
}

// Destructor
MyClass::~MyClass() {
   cout << "Destructor called." << endl;
   delete dataObj;

   return;
}

MyClass& MyClass::operator=(const MyClass& objToCopy) {
   cout << "Assignment op called." << endl;
   
   if (this != &objToCopy) {           // 1. Don't self-assign
      delete dataObj;                  // 2. Delete old dataObj
      dataObj = new int;               // 3. Allocate new dataObj
      *dataObj = *(objToCopy.dataObj); // 4. Copy dataObj
   }
   
   return *this;
}

int main() {
   MyClass tempClassObj1; // Create object of type MyClass
   MyClass tempClassObj2; // Create object of type MyClass
   
   // Set and print object 1 data member value
   tempClassObj1.SetDataObj(9);
   
   // Copy class object using copy assignment operator
   tempClassObj2 = tempClassObj1;
   
   // Set object 1 data member value
   tempClassObj1.SetDataObj(1);
   
   // Print data values for each object
   cout << "obj1:" << tempClassObj1.GetDataObj() << endl;
   cout << "obj2:" << tempClassObj2.GetDataObj() << endl;
   
   return 0;
}
*/