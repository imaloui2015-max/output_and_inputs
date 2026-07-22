#include <iostream>
#ifndef PERSON_H
#define PERSON_H


/*
double scores {91.8};

int main() {

    std::cout << "The Score is: " << scores << std::endl;
    return 0;
}
    

double add(double a, double b);

int main() {
    double res = add(33, 8);
    std::cout << "The Result is: " << res << std::endl;
    return 0;
}

double add(double a, double b){
    return  a + b;
}

*/

// Create Somr Classes

class Person {
public : 
    Person(const std::string& names_param, int age_param);

    void print_info () const {
        std::cout << "Name: " << fullname << " Age: " << age << std::endl;
    }
private : 
    std::string fullname;
    int age;

public:
    static int person_count;
};

#endif // PERSON_H

