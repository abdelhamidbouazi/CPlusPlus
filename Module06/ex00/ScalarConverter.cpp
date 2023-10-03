/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:41:53 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/24 17:36:06 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string _param)
{
	this->param = _param;
	// std::cout << this->param << std::endl;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &cp)
{
	this->param = cp.param;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &cp)
{
	this->param = cp.param;
	return *this;
}

std::string ScalarConverter::getParam()
{
	return param;
}

void elseConverter(std::string param)

{
	if (param == "+inf" || param == "-inf" || param == "nan"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << param << "f" << std::endl;
		std::cout << "double: " << param << std::endl;
	}
	else
		std::cout << "Unknown Type" << std::endl;

}
void charConverter(std::string param)
{
	std::cout << "char: " << param[0] << std::endl;
	std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(param[0]) << ".0f"  << std::endl;
	std::cout << "double: " << static_cast<double>(param[0]) << ".0" << std::endl;
}
void intConverter(std::string param)
{
	int n;
	std::istringstream s(param);
	s >> n;
	if (n < 0 || n >= 127){
		std::cout << "char: " << "impossible" << std::endl;
	}
	if (n < 32 || n == 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
}
void floatConverter(std::string param){
	param = param.substr(0, param.size() - 1);
	float	f;
	std::istringstream s(param);

	s >> f;
	if (f < 0 || f >= 127){
		std::cout << "char: " << "impossible" << std::endl;
	}
	if (f < 32 || f == 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (static_cast<int>(f) > INT_MAX || static_cast<int>(f) < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}
void doubleConverter(std::string param){
	double d;
	std::istringstream s(param);
	s >> d;
	if (d < 0 || d >= 127){
		std::cout << "char: " << "impossible" << std::endl;
	}
	if (d < 32 || d == 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (static_cast<int>(d) > INT_MAX || static_cast<int>(d) < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

int DetectType(std::string param)
{
	t_bools	b;
	int i;

	b.isFloat = false;
	b.isPoint = false;
    i = 0;
    if (!std::isdigit(param[0])) {
        if (param.size() == 1) {
            return CHAR;
        } else if (param[0] == '-' || param[0] == '+') {
            if (std::isdigit(param[1])) {
                i = 1;
            } else {
                return ELSE;
            }
        } else {
            return ELSE;
        }
    }
	if ((param[0] == '-' && std::isdigit(param[1])) || std::isdigit(param[i])) {
        for (size_t i = 1; i < param.length(); ++i) {
            char c = param[i];
            if (c == '.') {
                if (b.isPoint) {
                    return ELSE;
                }
                b.isPoint = true;
            } else if (i == (param.length() - 1) && c == 'f') {
                if (b.isFloat) {
                    return ELSE;
                }
                b.isFloat = true;
            } else if (!std::isdigit(c) ){
                return ELSE;
            }
        }
    }

	if (b.isPoint && b.isFloat) {
        return FLOAT;
    } else if (b.isPoint) {
        return DOUBLE;
    } else if (!b.isPoint && !b.isFloat) {
        return INT;
    }

    return ELSE;

}

void ScalarConverter::convert(std::string param)
{
	if (DetectType(param) == INT)
		intConverter(param);
	else if (DetectType(param) == CHAR)
		charConverter(param);
	else if(DetectType(param) == DOUBLE)
		doubleConverter(param);
	else if (DetectType(param) == FLOAT)
		floatConverter(param);
	else if (DetectType(param) == ELSE)
		elseConverter(param);
}
