#include <iostream>
#include <string>

using namespace std;
/*demonstrating the concept of inheritance in c++*/


/// we are creating a class named Details with course, age and a name method

class Details
{
public:
    string course = "Information Technology";
    int age = 21;
    void name()
    {
        cout << "Andrew Kimwetich";
    };
};

// Creating a class of Friends which inherits course, age and name method from the previous Details class . on top of that, adds a bestfriend field.
class Friends : public Details
{
public:
    string bestFriend = "George";
};

int main()
{
    Friends friend1;
    friend1.name();
    cout << friend1.bestFriend;
    return 0;
}
