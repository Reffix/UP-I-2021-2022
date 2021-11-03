#include <iostream>

int main()
{
	//// Ex. 0 and Ex. 1 
	//for (int i = 10; i <= 999; i++) {  // for(int i = 999; i >= 10; i--) 
	//	int number = i;
	//	bool isValid = true;
	//	while (number > 0) {
	//		int digit = number % 10;
	//		number /= 10;
	//		if (digit == 0) {
	//			continue;
	//		}
	//		if (i % digit != 0) {
	//			isValid = false;
	//			break;
	//		}
	//	}
	//	if (isValid) {
	//		std::cout << i << " ";
	//	}
	//}

	/*int power = 0;
	double base = 0;

	std::cin >> base >> power;

	double product = 1;
	if (power < 0) {
		base = 1 / base;
		power = power * (-1);
	}
	for (int i = 0; i < power; i++) {
		product *= base;
	}
	std::cout << product;*/

	//int sizeOfSquare = 0;

	//std::cin >> sizeOfSquare;

	//for (int i = 0; i < sizeOfSquare; i++)
	//{
	//	for (int j = 0; j < sizeOfSquare; j++) {
	//		std::cout << '*';
	//	}
	//	std::cout << std::endl;
	//}

 //     /\
 //    /__\
 //   /____\
 //  /______\
 // /________\


	int sizeOfTriangle = 0;

	std::cin >> sizeOfTriangle;

	/*
	for (int i = 0; i < sizeOfTriangle; i++) {
		for (int j = 0; j < sizeOfTriangle - i; j++) {
			std::cout << " ";
		}
		
		std::cout << '/';

		for (int space = 0; space <= i * 2; space++) {
			if (i == sizeOfTriangle - 1) {
				std::cout << '_';
			}
			else {
				std::cout << " ";
			}
		}

		std::cout << '\\' << std::endl;
	}*/

	/* 
			*  0*2 + 1
		   ***	1*2 + 1	
		  ***** 2*2 + 1
		 ******* 3*2 + 1
		********* 4*2 + 1
	*/

	/*for (int i = 0; i < sizeOfTriangle; i++) {
		for (int j = 0; j < sizeOfTriangle - i; j++) {
			std::cout << " ";
		}

		for (int element = 0; element <= i * 2; element++) {
			std::cout << '*';
		}

		std::cout << std::endl;
	}*/

	for (size_t i = 0; i < sizeOfTriangle; i++)
	{
		for (int j = 0; j < sizeOfTriangle - i; j++) {
			std::cout << " ";
		}
		
		for (int j = 0; j < i + 1; j++) {
			int res = 1;
			if (j > i - j) {
				j = i - j;
			}

			for (size_t k = 0; k < j; k++)
			{
				res *= (i - k); // res = (res * (i - k)) / (j + 1)
				res /= (k + 1);
			}

			std::cout << res << " ";
		} 

		std::cout << std::endl;
	}

}

