/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:44:27 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 06:58:55 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	Sed(std::string	filename, std::string str1, std::string str2){
	std::ifstream	input_file(filename);
	if (!input_file.is_open()){
		std::cerr << "ERROR: Cannot open file!" << std::endl;
		return 1;
	}
	else if (input_file.is_open()) {
		std::ofstream	output_file((filename + ".replace"));
		if (!input_file.is_open()){
			std::cerr << "ERROR: Cannot output the new file!" << std::endl;
			return 1;
		}
		std::string line;
		while (std::getline(input_file, line)) {
			size_t pos = 0;
			if ((pos = line.find(str1, pos)) != std::string::npos){
				while ((pos = line.find(str1, pos)) != std::string::npos) {
					line.erase(pos, str1.length());
					line.insert(pos, str2);
					pos += str2.length();
				}
			}
			output_file << line << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	return 0;
}
