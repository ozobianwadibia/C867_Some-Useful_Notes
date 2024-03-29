/* Overload the + operator as indicated. Sample output for the given program:
First vacation: Days: 7, People: 3
Second vacation: Days: 12, People: 3 */

#include <iostream>

using namespace std;

class FamilyVacation
{
public:
    void SetNumDays(int dayCount);
    void SetNumPeople(int peopleCount);
    void Print() const;
    FamilyVacation operator+(int moreDays);

private:
    int numDays;
    int numPeople;
};

void FamilyVacation::SetNumDays(int dayCount)
{
    numDays = dayCount;
    return;
}

void FamilyVacation::SetNumPeople(int peopleCount)
{
    numPeople = peopleCount;
    return;
}

// FIXME: Overload + operator so can write newVacation = oldVacation + 5,
//        which adds 5 to numDays, while just copying numPeople.

/* Your solution goes here  */

FamilyVacation FamilyVacation::operator+(int moreDays)
{
    FamilyVacation fv;
    fv.numDays = numDays + moreDays;
    fv.numPeople = numPeople;
    return fv;
}

void FamilyVacation::Print() const
{
    cout << "Days: " << numDays << ", People: " << numPeople << endl;
    return;
}

int main()
{
    FamilyVacation firstVacation;
    FamilyVacation secondVacation;

    cout << "First vacation: ";
    firstVacation.SetNumDays(7);
    firstVacation.SetNumPeople(3);
    firstVacation.Print();

    cout << "Second vacation: ";
    secondVacation = firstVacation + 6;
    secondVacation.Print();

    return 0;
}