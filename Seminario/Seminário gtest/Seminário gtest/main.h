#ifndef MAIN_H
#define MAIN_H

#include <string>
using namespace std;

class Character {
public:
    Character(const string& name, int health) : name(name), health(health) {} // Construtor

    const string& getName() const { 
        return name; 
    }

    int getHealth() const {
        return health; 
    }

    void takeDamage(int damage) { 
        health -= damage; 
    }

private:
    string name;
    int health;
};

class Item { // Item nomes
public:
    Item(const string& name) : name(name) {}

    const string& getName() const { return name; }

private:
    string name;
};

#endif // MAIN_H
