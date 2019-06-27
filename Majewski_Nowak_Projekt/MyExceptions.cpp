#include "MyExceptions.h"
#include <iostream>

void MyExceptions::seeExceptions(EXCEPTION_CODE error)
{
	switch (error) {
	case EXCEPTION_CODE::out_of_range:
		std::cerr << "Niepoprawna wartosc punktu";
		break;
	default:
		std::cerr << "Nieznany blad";
		break;
	}
}
