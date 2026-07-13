# include <iostream>
# include <string>
# include <iomanip>
# include <limits>


int main(){
    /*
    std::cout <<"hello word" <<std::endl;


    int age {16};

    std::cout << "age: " << age << std::endl;
    

    int age1;
    std::string name;

    std::cout << "Type your name and your age here: " << std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hallo " << name << "You are " << age1 << " Years old" << std::endl;


    return 0;
    

    std::string fullname;
    int age2;

    std::cout << "Type Your Full name here and then your age: " << std::endl;

    std::getline(std::cin,fullname);

    std::cin >> age2;

    std::cout << "Hallo " << fullname << " You have "<< age2 << " Years old" << std::endl;

    

    std::cout << "size of an integer is:  " << sizeof(int) << std::endl;
    

    int value1 {45};
    int value2{-76};

    std::cout << "Value 1 is: " << value1 << std::endl;
    std::cout << "Value 2 is: " << value2 << std::endl;

    // Takes for 4 bytes in the memory
    signed int value3 {45};
    unsigned int value4 {76};

    std::cout << "Value 3 is: " << value3 << std::endl;
    std::cout << "Value 4 is: " << value4 << std::endl;


    // 2 bytes in the memory inside of 4 bytes
    short value5 {87};
    short int value6 {98};
    signed short value7 {865};
    signed short int value8 {765};

    std::cout << "Value 5 is: " << value5 << std::endl;
    std::cout << "Value 6 is: " << value6 << std::endl;
    std::cout << "Value 7 is: " << value7 << std::endl;
    std::cout << "Value 8 is: " << value8 << std::endl;

    // 8 bytes in the memory
    long long value9 {876};
    long long int value10 {654};
    signed long long value11 {-123};
    signed long long int value12 {321};
    unsigned long long int value13 {780};

    // 4 or 8 bytes when we use just long inside of long long

    return 0;

   

    // bool

    bool is_red {true};
    bool is_green {false};

    if (is_red == true){
        std::cout << "Stop the car" << std::endl;

    }else {
        std::cout << "Go GO GO" << std::endl;
    }

    if (is_green){
        std::cout << "The light is green" << std::endl;

    }else {
        std::cout << "The light is red" << std::endl;
    }

    std::cout << "The light is green: " << is_green << std::endl;
    std::cout << "The light is red: " << is_red << std::endl;

    std::cout << std::boolalpha;

    std::cout << "The light is green: " << is_green << std::endl;
    std::cout << "The light is red: " << is_red << std::endl;


    return 0;

    

     char value = 65;

    char charractere {'a'}; // that's how you can store char in a variable

     std::cout << "Value is: " << value << std::endl; // a
     std::cout << "Value in int is: " << static_cast<int>(value) << std::endl; // 65



    auto var1 {76};
    auto var2 {76.0};
    auto var3 {12.0f};
    auto var4 {32.0l};
    auto var5 {'a'};


    // modifer by suffixes

    auto var6 {76u}; //unsigned
    auto var7 {765ul}; // unsigned long
    auto var8 {769ull}; // unsigned long long

    return 0;



    int number1 {5};
    int number2 {7};

    int sum {number1 + number2};
    int diff {number2 - number1};

    std::cout << "The sum of the two number are: " << sum << std::endl;
    std::cout << "The difference of the two number are: " << diff << std::endl;

    return 0;

  

   //comparing two numbers

   int number1 {6};
   int number2 {9};

   std::cout << "Number1 is: " << number1 << std::endl;
   std::cout << "Number2 is: " << number2 << std::endl;

   std::cout << std::endl;

   std::cout << "Comparing two number (True or False)" <<std::endl;

   std::cout << std::boolalpha; // True Or false not 1 or 0

   std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
   std::cout << "number1 > number2: " << (number1 >= number2) << std::endl;
   std::cout << "number1 < number2: " << (number1 == number2) << std::endl;
   std::cout << "number1 < number2: " << (number1 != number2) << std::endl;

   std::cout << std::noboolalpha;

   std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
   std::cout << "number1 > number2: " << (number1 >= number2) << std::endl;
   std::cout << "number1 < number2: " << (number1 == number2) << std::endl;
   std::cout << "number1 < number2: " << (number1 != number2) << std::endl;


   return 0;
    

    // And (&&)  Or (||) Not (!)

    int d{9};
    int c{2};
    int b{7};
    bool a {true};

    std::cout << "Logical operator" << std::endl;
    std::cout << std::endl;

    std::cout << "d: " << d << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << std::endl;

    std::cout << "(d > c) && (b > c): " << ((d > c) && (b > c)) << std::endl;
    std::cout << "(d > c) || (b == c): " << ((d > c) || (b == c)) << std::endl;
    std::cout << "(c > b) && (c > d): " << ((c > b) && (c > d)) << std::endl;
    std::cout << "(d == c) && (b == c): " << ((d == c) && (b == c)) << std::endl;
    std::cout << "(! a) && (b == c): " << ((!a) && (b == c)) << std::endl;
    std::cout << "(! a) || (d < e): " << ((!a) || (b == c)) << std::endl;

    std::cout << std::endl;

    std::cout << std::boolalpha;

    std::cout << "(d > c) && (b > c): " << ((d > c) && (b > c)) << std::endl;
    std::cout << "(d > c) || (b == c): " << ((d > c) || (b == c)) << std::endl;
    std::cout << "(c > b) && (c > d): " << ((c > b) && (c > d)) << std::endl;
    std::cout << "(d == c) && (b == c): " << ((d == c) && (b == c)) << std::endl;
    std::cout << "(! a) && (b == c): " << ((!a) && (b == c)) << std::endl;
    std::cout << "(! a) || (d < e): " << ((!a) || (b == c)) << std::endl;


    return 0;
    

    // u can use std::flush inside of std::cout if u don't  want the data to go to the terminal at the first

    std::cout << "Unformated table: " << std::endl;
    std::cout << "Ayman" << " " << "Imaloui" << "16" << std::endl;
    std::cout << "Anas" << " " << "lotfi" << "16" << std::endl;
    std::cout << "Mehdi" << " " << "Merwahi" << "16" << std::endl;
    std::cout << "Farid" << " " << "Imaloui" << "16" << std::endl;


    std::cout << std::endl;

    std::cout << "Formated table: " << std::endl;

    std::cout << "LastName" << std::setw(10) << "FirstName" << std::setw(5) << "Age" <<std::endl;
    std::cout << "Ayman" << std::setw(10) << "Imaloui" << std::setw(5) << "16" <<std::endl;
    std::cout << "Anas" << std::setw(10) << "Lotfi" << std::setw(5) << "16" <<std::endl;
    std::cout << "Mehdi" << std::setw(10) << "Merwahi" << std::setw(5) << "16" <<std::endl;
    std::cout << "Farid" << std::setw(10) << "Imaloui" << std::setw(5) << "16" <<std::endl;



    // we can use std::cout << "Hallo" << std::endl but there is another method : std::cout << "Hallo\n"

    // std::cout << "Hallo word" << std::flush << std::endl; => the data is sending to a storage before going to the terminal

    // u can justify data to the right ot to the left by std::cout << std::right or left;

    // we use the std::cout << std::internal for - in want it to be attached with number like -6

    // std::cout << std::setfill('-') feeling the empty spaces with a dash charactere

    // std::cout << std::showpos: shows the positive signe and noshowpos do the reverse

    // we can also change the base std:dec or std::hex or std::oct (for integer)

    // emple std::cout << "The integer_to_hex: " << std::hex << integer << std::endl;

    // std::cout << std::uppercase if we want to transfome it to upper case 

    // (afecting the floating points number) => we can do the fixed notation std::cout << std::fixed; or scientific one std::cout << std::scientific;

    // if we don't want the fixed and scintific notation we can desable it by this line of code

    // => std::cout.unsetf(std::ios::scientific | std::ios::fixed); it's a Hack

    // we can also se the precision by std::cout << std::setprecision(x); x is the precision that u want

    // force ouputing the decimal pointe std::cout << std::showpoint default is noshowpoint that why we need showpoint

    bool police_officer = true;
    bool green {false};
    bool red {true};

    if (police_officer && red){
        std::cout << "Go Away" << std::endl;
    }else {
        std::cout << "Stay a little bit"  << std::endl;
    }


    // we can do also the switch method inside of if statements

    return 0
    

    // we can use the switch method it like the if statemeny=t but in another way
    
    // Example

    int task {1};
    switch (task) { // the condition should be an integer or a enums (int long signed short....)
        case 1: {
            std::cout << "Task 1" << std::endl;
            break; // u don't have to use the curly braces or u can do also break outside the curly braces
        }
        case 2: {
            std::cout << "Task 2" << std::endl;
            break; // same thing
        }
        default:
            std::cout << "Unknown task" << std::endl; // the default when it doesn't match any case
    }

    std::cout << "Enter a number between 1 and 3: ";
    int number {};
    std::cin >> number;

    switch (number) { // the condition should be an integeral or a enums (int long signed short....)
        case 1: {
            std::cout << "Task 1" << std::endl;
            break; // u don't have to use the curly braces or u can do also break outside the curly braces
        }
        case 2: {
            std::cout << "Task 2" << std::endl;
            break; // same thing
        }
        default:
            std::cout << "Unknown task" << std::endl; // the default when it doesn't match any case
    }
    std::cout << "Done the process" << std::endl;

    // finding the mximum btw two distinct number
    

    int a {7};
    int b {9};

    if (a > b){
        
        std::cout << "a is the maximum number A: " << a << std::endl;
    }
    if (!(a > b)) {
        std::cout << "b is the maximum number B: " << b << std::endl;
    }


    // there si another way is to use a tenary expression 

    int res1 {8};
    int res2 {9};

    int max = (res1 > res2) ? res1 : res2;
    std::cout << "The maximum number is: " << max << std::endl;

    return 0;

    // so as a conlusion we have 4 method to do a if statement 1. is the if statement 2. is the switch statement 3. is the tenary expression (it's short) 4. is the if else statement


   

    // we also have 4 method to do a for loop 1. is the for loop 2. is the while loop 3. is the do while loop 4. is the range based for loop

    // any loops contains this
    //  1. initialization 2. condition 3. increment or decrement
    // or in anotheer way we say that the loop contains 3 parts 1. starting point 2. ending point 3. step
    // or also 1. iteration 2. Starting Point 4. Test 5. increment or decrement 6. Loop body

    // example of a for loop

    for (unsigned int i {1}; i < 10; ++i){
        std::cout << "Hallo C++" << std::endl;
    }

   

    // size_t is a data type that is used to represent the size of an object in bytes. It is an unsigned integer type, which means it can only represent non-negative values. The size_t type is defined in the <cstddef> header file and is typically used in situations where the size of an object needs to be specified, such as when allocating memory or working with arrays.

    size_t size {5};
    for (size_t i {1}; i < size; ++i){
        std::cout << "Hallo C++" << std::endl;
    }

    return 0;

    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl; // Output: sizeof(size_t): 8 (on a 64-bit system) also if u put a negativ num u gonna get an error because size_t is unsigned (overflow error)

    // iterator outside of the loop body is a bad practice because it can lead to undefined behavior and make the code harder to read and maintain. It is generally recommended to keep the iterator within the loop body to ensure that it is properly initialized, incremented, and used in a controlled manner.

    // exemple

    for (size_t i {1}; i < size; ++i){
        std::cout << "Hallo C++" << std::endl;
    }
    std::cout << "The value of i after the loop is: " << i << std::endl; // This will cause a compilation error because i is not in scope here bc i is undifined outside of the loop body. The variable i is only defined within the scope of the for loop, and it is not accessible outside of that scope. To fix this error, you can either move the declaration of i outside of the loop or use a different variable name for the iterator.

    return 0;

  

    // but we can declare the iterator outside of the loop body but we have to initialize it inside of the loop body

    size_t i; // declare the iterator outside of the loop body
    for (i = 1; i < 5; ++i){
        std::cout << "Hallo C++" << std::endl;
    }
    std::cout << "The value of i after the loop is: " << i << std::endl; // This will work because i is declared outside of the loop body and initialized inside of the loop body. The variable i is accessible outside of the loop body, so we can print its value after the loop has completed. it's the last value

    // Now We gonna see how to do a while loop

    const unsigned int counter {5}; // u can use also a size_t bc it's an unsigned integer type, which means it can only represent non-negative values. inside of unsigned int 
    
    unsigned int i {0};

    while (i < counter){
        std::cout << "Counter: " << counter << std::endl;
        ++i;
    }
    std::cout << "Done the while loop" << std ::endl;
    std::cout << "The value of i is:  " << i << std::endl;

    
    return 0;

    

    // do while loop (it's like the while loop but it will execute the loop body at least once even if the condition is false = > excute at first and then check the condition)

    const unsigned int counter {8};
    unsigned int i {0};

    do {
        std::cout << i << " : Hallo C++" << std::endl;
        ++i;
    } while (i < counter);

    return 0;

    // array manipulation

    int numbers[5] {1, 2, 3, 4, 5}; // array of 5 integers

    for (size_t i {0}; i < 5; ++i){
        std::cout << "Number at index " << i << " is: " << numbers[i] << std::endl;
    }
    

   double numbers[5] {1.1, 2.2, 3.3, 4.4, 5.5}; // array of 5 doubles we use double bc were storing a floating point numbers

    for (size_t i {0}; i < 5; ++i){
        std::cout << "Number at index " << i << " is: " << numbers[i] << std::endl;
    }



    // use a range base for loop

    int array[] {6, 9, 5, 2}; // we can also do that if we don't spacify the numbe of element that's the array should have

    for (auto num : array) {
        std::cout << "Value: " << num << std::endl;
    }



    // constants array

    // const int array1[] {7, 9, 3};

    // array1[0] = 4; // False u can't do it bc it's constant array (unchangable) const method uses also in js

    // also array stores element of the same type dont't try to include a deferent type to your array

    // That's how u Can Get the size of an array using (std::size(array))

    

    int scores[] {7, 8, 4, 2, 1};

    std::cout << "The Size Of This Array Is: " << std::size(scores) << std::endl;

    // before c++ 17 std::size() was not available so we can use this method to get the size of an array => std::cout << "The Size Of This Array Is: " << sizeof(scores) / sizeof(scores[0]) << std::endl;

   

   // Array of charactere

   char array[5] = {'H','E','L','L','O'};

   std::cout << "Size: " << std::size(array) << std::endl;

   for (auto i : array) {
        std::cout << "Value: " << i << std::endl;
   }

   array[1] = 'A';

   std::cout << "After changing the value at index 1: ";
   for (auto i : array) {
        std::cout << i;
   }

   // be share to put the null terminator at the end of the char array if u want to print it as a string or else u gonna get a garbage value after the char array add a null terminator at the end of the char array like this => char array[6] = {'H','E','L','L','O', '\0'}; or char array[6] = "HELLO"; or char array[] = "HELLO"; (the compiler will add the null terminator automatically)

   // Pointers allow us to store addrecese of variable (double, char , int, float, string....) and we can also use it to store the address of a function or an array or a class or a struct or a union or a enum or a typedef or a template or a lambda expression or a std::function or a std::bind or a std::thread or a std::async or a std::future or a std::promise or a std::packaged_task or a std::shared_ptr or a std::unique_ptr or a std::weak_ptr or a std::array or a std::vector or a std::list or a std::deque or a std::set or a std::map or a std::unordered_set or a std::unordered_map or a std::stack or a std::queue or a std::priority_queue

   // Exampe

   int * number {}; // store addresses of varibale type int
   double * fractional_number {nullptr}; // store adresse of variable type double

   // we should initialize to nullptr 

   // also all the type of var has the same pointre size

   // the position of the star doesn't matter actually

    

    std::cout << "Size of int is: " << sizeof(int) << std::endl; // 4 bytes
    std::cout << "Size of double is: " << sizeof(double) << std::endl; // 8 bytes
    std::cout << "Size of double* is: " << sizeof(double*) << std::endl; // 8 bytes
    std::cout << "Size of int* is: " << sizeof(int*) << std::endl; // 8 bytes


    int value {42}; // 42 is the best prgrammer number bc it's the answer of the life, the universe and everything
    int *ptr {&value}; // store the address of value in ptr

    std::cout << "Int Value is: " << value << std::endl;
    std::cout << "His adresse is: " << ptr << std::endl;

    // we can't initiazie a var with int and store in it floating point number bc it's gonna be a loss of data and we can do that by using static_cast<double>(int) to convert the int to double

    //and we can store floating point number adresse in a var type int bc it's gonna be a loss of data and we can do that by using static_cast<int>(double) to convert the double to int

    // Derefrecencing a pointer means accessing the value stored at the memory address that the pointer is pointing to. In C++, we can dereference a pointer using the dereference operator (*). When we dereference a pointer, we can read or modify the value stored at the memory address that the pointer is pointing to.

    //Example

    int * ptr1 {&value}; // store the address of value in ptr1
    std::cout << "Value at ptr1: " << *ptr1 << std::endl;

    int *value2 {nullptr};
    int data {98};
    value2 = &data; // store the address of data in value2
    std::cout << "Value at value2: " << *value2 << std::endl;
    std::cout << *value2 << " Adresse is: " << value2 << std::endl;

   

    // char pointers

    char *charactere_p {nullptr};
    char charactere {'A'};

    charactere_p = &charactere;

    std::cout << *charactere_p <<" Adresse is: " << charactere_p << std::endl;

    char char_v1 {'B'};
    charactere_p = &char_v1;

    std::cout << *charactere_p <<" Adresse is: " << charactere_p << std::endl;

    // we can also use a char pointer to store the address of a string literal (a string that is hard-coded into the program) in C++. A string literal is an array of characters that is terminated by a null character ('\0'). When we use a char pointer to store the address of a string literal, we can access the individual characters of the string using pointer arithmetic.

    const char *string_literal {"Hello, World!"}; // store the address of the string literal in string_literal
    std::cout << "Message: " << string_literal << std::endl;
    std::cout << "*Message: " << *string_literal << std::endl; // print the first character of the string literal

    // we can't change the value of a string literal because it's stored in read-only memory, so we should use const char* to store the address of a string literal to prevent accidental modification of the string.

    // but if we want to change the value of a string literal we can use a char array to store the string literal and then we can change the value of the char array.

    char array[] {"Hello, World!"}; // store the string literal in a char array
    std::cout << "Message: " << array << std::endl;
    array[0] = 'h'; // change the first character of the char array
    std::cout << "Message: " << array << std::endl;

    // so as a conclusion if u want to allow the user to change the value of a string literal use a char array and if u don't want to allow the user to change the value of a string literal use a const char*.

    //program Memory Map 

    // dynamic momory

    int *num {nullptr};
    num = new int;

    *num = 77;

    std::cout << std::endl;

    std::cout << "Dynamic allocating memory: " << std::endl;
    std::cout << "*num: " << *num << std::endl;

    

    int number {42}; // stack not in the heap

    int *number_p = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning adresse:  " << std::endl;
    std::cout << "Number: " << *number_p << std::endl;
    std::cout << "Adresse: " << number_p << std::endl;
    std::cout << "Adresse: " << &number << " Number : " << number << std::endl;

    int *num {};
    std::cout << "Writting into nullptr memory" <<  std::endl;
    *num = 42;
    std::cout << "Done" << std::endl;

    

   // Dynamic heap memory allocation is a technique in C++ that allows us to allocate memory for variables or objects at runtime, rather than at compile time. This is useful when we don't know the size of the data we need to store until the program is running.

   int *p_num {nullptr};

   p_num = new int;

   *p_num = 77; // store the value 77 in the memory location pointed to by p_num
   std::cout << std::endl;

   std::cout << "Dynamic allocated memory: " << std::endl;
   std::cout << "*num: " << *p_num << std::endl;
   std::cout << "num: " << p_num << std::endl;

   delete p_num; // free the memory allocated for p_num (return memory to the os)
   

   int * num1 { new int { 42 }};
   int *num2 {new int {}};
   int *num3 {new int {54}};

   std::cout << "Number: " << num1 << " And his adresse is: " << *num1 << std::endl;
   std::cout << "Number: " << num2 << " And his adresse is: " << *num2 << std::endl;
   std::cout << "Number: " << num3 << " And his adresse is: " << *num3 << std::endl;

   delete num1;
   delete num2;
   delete num3;
   num1 = nullptr;
   num2 = nullptr;
   num3 = nullptr;

   
   // dangling pointer

   int *ptr_num = {new int {65}};
   int *ptr_num0 = {ptr_num};

   std::cout << "ptr_num: " << ptr_num << " -- " << *ptr_num << std::endl;
   std::cout << "ptr_num0: " << ptr_num0 << " -- " << *ptr_num0 << std::endl;


   // so we have two way to initialize our pointer

   std::cout << std::endl;
   std::cout << "Solution 1: " << std::endl;

   int *p_num5 = new int {65};
   std::cout << "p_num5: " << p_num5 << " -- " << *p_num5 << std::endl;

   int *p_num6 = p_num5; // copy the address of p_num5 to p_num6
   std::cout << "p_num6: " << p_num6 << " -- " << *p_num6 << std::endl;

   int *p_num7 = {};

    std::cout << std::endl;

    if (p_num7 == nullptr){
        std::cout << "p_num7 is a nullptr" << std::endl;
    }else {
        
        std::cout << "p_num7 is not a nullptr" << std::endl;
    }

    if (!(p_num6 == nullptr)){
        std::cout << "p_num6 is not a nullptr" << std::endl;

    }

    std::string res = (p_num6 == nullptr) ? "p_num6 is a nullptr" : "p_num6 is not a nullptr";
    std::cout << res << std::endl;


    // Case1: Unitialized pointer (nullptr) => we can check if the pointer is nullptr or not by using the if statement or the ternary operator

    int *ptr_num1 = nullptr; // unitialized pointer
    int * ptr_num2; // Dangling pointer (unitialized pointer) => we can check if the pointer is nullptr or not by using the if statement or the ternary operator

    std::cout << std::endl;
    std::cout << "Case 1 : Unintialized pointer: " << std::endl;
    std::cout << "ptr_num1: " << ptr_num1 << std::endl;
    std::cout << "ptr_num2: " << *ptr_num2 << std::endl; // Crash junk data

    std::cout << "The Program is Ending well" << std::endl;

    // so why actually the program gonna crash bc we try to access a memory that isn't our so the program doesn't jnow that memeory so it gonna crash the the prgramand this point.
    

    // also don't try that to delte a ptr and use it again without initialization

    int *ptr_num3 {new int{65}};

    std::cout << "Ptr_num (before delete): " << *ptr_num3 << std::endl;
    
    delete ptr_num3;

    std::cout << "Ptr_num (after delete)" << *ptr_num3 << std::endl;

     */

    // No case when multiple pointer pointing to the same adresse

    int *p_num {new int{8}};
    int *p_num0 {p_num};

    std::cout << "Poiter Num: " << *p_num << "  Adresse: " << p_num << std::endl;
    std::cout << "Poiter Num: " << *p_num0 << "  Adresse: " << p_num0 << std::endl;

    delete p_num;
    std::cout << std::endl;

    std::cout << "Poiter Num (after delete): " << *p_num << "  Adresse: " << p_num << std::endl;
    std::cout << "Poiter Num (after delete): " << *p_num0 << "  Adresse: " << p_num0 << std::endl;

















   




















}