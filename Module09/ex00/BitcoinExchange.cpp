#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cp)
{
	if (this != &cp)
		this->m = cp.m;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cp)
{

	if (this != &cp)
		this->m = cp.m;
	return *this;
}

int BitcoinExchange::FillDatabase()
{
	std::ifstream dataFile("data.csv");
	std::string dataLine;
	if (!dataFile.is_open())
	{
		std::cerr << "Error: Failed to open the data file." << std::endl;
		return 1;
	}
	std::getline(dataFile, dataLine);
	while (std::getline(dataFile, dataLine))
	{
		size_t separatorPos = dataLine.find(",");
		if (separatorPos == std::string::npos)
		{
			std::cerr << "Error: Invalid line in the data file." << std::endl;
			return 1;
		}
		std::string date = dataLine.substr(0, separatorPos);
		std::string strValue = dataLine.substr(separatorPos + 1);
		float value = std::stof(strValue);
		this->m[date] = value;
	}

	return 0;
}

void BitcoinExchange::Display(std::string d, float val)
{
	double res;
	std::map<std::string, float>::iterator it = this->m.lower_bound(d);
	std::map<std::string, float>::iterator it2 = this->m.find(d);
	if (it2 == this->m.end())
		--it;
	res = it->second * val;
	std::cout << d << " => " << val << " = " << res << std::endl;
}

bool checkYMD(std::string _y, std::string _m, std::string _d)
{
	int y, m, d;
	y = atoi(_y.c_str());
	m = atoi(_m.c_str());
	d = atoi(_d.c_str());

	if (d < 1 || d > 31)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (y < 0 || y > 2024)
		return false;
	if (m == 2 && d > 29)
		return false;
	return true;
}

bool checkKey(std::string date)
{
	if (date.size() != 10)
		return false;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else if (!isdigit(date[i]))
			return false;
	}
	if (!checkYMD(date.substr(0, 4), date.substr(5, 2), date.substr(8, 2)))
		return false;
	return true;
}

bool checkValue(const std::string &value)
{
	int dotCount = 0;
	for (size_t i = 0; i < value.length(); ++i)
	{
		char c = value[i];
		if (!isdigit(c))
		{
			if (c == '.')
			{
				dotCount++;
				if (dotCount > 1)
				{
					std::cerr << "Error: Invalid decimal format." << std::endl;
					return false;
				}
			}
		}
	}

	float number = std::stof(value);
	if (number < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (number > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}

	return true;
}

int tokenizer(std::string line, BitcoinExchange	&btc)
{
	char *s = new char[line.size() + 1];
	strcpy(s, line.c_str());
	char *tok = strtok(s, " |");
	if (!tok)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		delete[] s;
		return 1;
	}
	std::string date = tok;
	tok = strtok(NULL, " |");
	if (!tok)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		delete[] s;
		return 2;
	}
	if (!checkKey(date))
	{
		std::cerr << "Error: invalid date => " << line << std::endl;
		delete[] s;
		return 3;
	}
	if (!checkValue(tok))
	{
		delete[] s;
		return 4;
	}
	float num = std::atof(tok);
	btc.Display(date, num);
	delete[] s;
	return 0;
}

BitcoinExchange::~BitcoinExchange()
{
}
