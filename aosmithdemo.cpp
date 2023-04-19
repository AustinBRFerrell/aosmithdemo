#include "aosmithdemo.h"

int main()
{
    cout << "Welcome to a demonstration of Object Oriented Programming Paradigms!\n\n";

    Mammal myHuman("human","Hello World!");
    Mammal myDog("dog","Woof woof!");
    Mammal myCat("cat","Meow meow!");

    cout << "The " << myHuman.species << " says: " << myHuman.greeting << endl;
    cout << "The " << myDog.species << " says: " << myDog.greeting << endl;
    cout << "The " << myCat.species << " says: " << myCat.greeting << endl;

    myHuman.set_name();
    cout << myHuman.name << " the " << myHuman.species << " goes for a walk." << endl;
    myDog.set_name();
    cout << myDog.name << " the " << myDog.species << " wags his tail." << endl;
    myCat.set_name();
    cout << myCat.name << " the " << myCat.species << " begins to purr." << endl;

}
