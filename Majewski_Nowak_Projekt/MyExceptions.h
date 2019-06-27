#pragma once
#include <exception>
#include <iostream>
#include <string>
class MyExceptions : public std::exception
{
	enum EXCEPTION_CODE
	{
		out_of_range
	};
	void seeExceptions(EXCEPTION_CODE error);

};

