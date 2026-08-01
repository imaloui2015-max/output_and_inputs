#include <iostream>



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

*/

void age_checks( unsigned int age){
    if (age > 18){
        std::cout << "Accepted bc your age is greater that 18 : " << age << " > 18" << std::endl;
    }else{
        std::cout << "Not accepted bc your age is less that 18 : " << age << " < 18" << std::endl;
    }
}

int max(int a, int b){
    if (a > b){
        return a;
    }else {
        return b;
    }
}


int main () {
    
    /*
    int age;

    std::cout << "Enter Your age: " << std::endl;

    std::cin >> age;

    age_checks(age);

   
    std::cout << "End Of The program" << std::endl;
    return 0;
    */
   std::cout << "Who is the maximum btw 5 and 9: " << max(5, 9) << std::endl;
}