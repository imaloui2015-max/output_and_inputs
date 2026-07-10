#include <iostream>

int addNumbers(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(int args, char **argv){

    int first = 23;
    int second = 7;
    int third_num {4};


    int sum = first + second;

    int sumFunc = addNumbers(23, 7);

    std::cout << "sum: " << sum << std::endl;
    std::cout << "sum is: " << addNumbers(5, 9) << std::endl;
    std::cout << third_num << std::endl;

    return 0;

}