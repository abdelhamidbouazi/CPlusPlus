#include "BitcoinExchange.hpp"

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

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file.\n";
		return 1;
	}
	try
	{
		BitcoinExchange btc;
		if (btc.checkDB()) // send the data,csv file here
			return 0;
		// checkInputFile(av[1]);
		std::ifstream file(av[1]);

		if (!file.is_open())
		{
			std::cerr << "Error: could not open file.\n";
			return 1;
		}

		int lineCount = 0;
		std::string line;
		// std::string date, value;

		while (std::getline(file, line))
		{
			if (lineCount++ == 0 && line == "date | value")
			{
				continue;
			}
			size_t pipeCount = std::count(line.begin(), line.end(), '|');
			if (pipeCount != 1)
			{
				std::cerr << "Error: bad input => " << line << "\n";
				continue;
			}
			if (tokenizer(line, btc) != 0)
				continue ;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
