# ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <vector>
#include <stack>

class RPN
{
private:
	std::stack<int>	s;
public:
	RPN();
	RPN(const RPN& cp);
	RPN& operator=(const RPN& cp);
	~RPN();

	void Solver(std::string s);
};




# endif
