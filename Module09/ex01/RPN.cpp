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
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			continue;
		if (s[i] >= '0' && s[i] <= '9')
			this->s.push(s[i] - '0');
		else if ((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') && this->s.size() >= 2)
		{
			int a = this->s.top();
			this->s.pop();
			int b = this->s.top();
			this->s.pop();

			if (s[i] == '+')
				this->s.push(a + b);
			else if (s[i] == '-')
				this->s.push(b - a);
			else if (s[i] == '/')
			{
				if (a == 0)
				{
					std::cout << "Error: cannot divide by zero" << std::endl;
					return;
				}
				else
					this->s.push(b / a);
			}
			else if (s[i] == '*')
				this->s.push(b * a);
		}
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (this->s.size() == 1)
		std::cout << this->s.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}
