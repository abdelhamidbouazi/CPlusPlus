#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &cp)
{
	if (this != &cp)
		this->s = cp.s;
}

RPN &RPN::operator=(const RPN &cp)
{
	if (this != &cp)
		this->s = cp.s;
	return *this;
}

RPN::~RPN()
{
}

void RPN::Solver(std::string s)
{
	std::cout << s << std::endl;
}
