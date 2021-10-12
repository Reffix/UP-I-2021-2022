#include <iostream>

int main() {


    //bool exe = (5 % 3 == 0 && 5 % 2 == 0); // res = 0

    //// 0 0 0
    //// 1 0 0
    //// 0 1 0
    //// 1 1 1

    //bool exe2 = (5 % 3 == 0 || 5 % 2 == 0);

    //// 0 0 0
    //// 1 0 1
    //// 0 1 1
    //// 1 1 1


    //bool isEven = !(5 & 1);     // 101    res =  001
    //                            // 001    !res  = !true = false
    //                            //isEven = false;
    //
    //std::cout << "Hello world!" << std::cout;



    //Exercise1
    /*int numberFromKeyboard = 0;

    std::cin >> numberFromKeyboard;

    if (numberFromKeyboard % 2 == 0) {
        std::cout << "Even" << std::endl;
    }
    else {
        std::cout << "Odd" << std::endl;
    }

    (numberFromKeyboard % 2 == 0) ? std::cout << "Even \n" : std::cout << "Odd \n";*/
    
    //Exercise2
    //int number1, number2;

    //std::cout << "Enter number one: ";
    //std::cin >> number1;


    //std::cout << "Enter number two: ";
    //std::cin >> number2;

    //if (number1 > number2) {
    //    std::cout << number1;
    //}
    //else {
    //    std::cout << number2;
    //}

    //Exercise3
    
    /*int year = 0;

    std::cin >> year;

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            std::cout << "True";
        }
        else {
            std::cout << "False";
        }
    }
    else {
        if (year % 4 == 0) {
            std::cout << "True";
        }
        else {
            std::cout << "False";
        }
    }*/
    //Exercise4
    int number;

    std::cout << "Enter 3-digit number: ";
    std::cin >> number;

    int digitOne, digitTwo, digitThree;
    digitOne = number / 100;
    digitTwo = (number / 10) % 10;
    digitThree = number % 10;

    if (digitOne % 2 == 0 && digitTwo % 2 == 0 && digitThree % 2 == 0) {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }


    return 0;
}