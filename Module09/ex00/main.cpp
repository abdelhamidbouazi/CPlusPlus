#include "BitcoinExchange.hpp"

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
