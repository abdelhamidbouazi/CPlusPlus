# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	m;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cp);
		BitcoinExchange& operator=(const BitcoinExchange &cp);
		~BitcoinExchange();

		int checkDB();
		void Display(std::string d, float val);
};
bool	checkYMD(std::string _y, std::string _m, std::string _d);
bool	checkKey(std::string date);
bool	checkValue(const std::string &value);
int		tokenizer(std::string line, BitcoinExchange	&btc);

# endif
