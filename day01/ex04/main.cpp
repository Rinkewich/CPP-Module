/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/14 16:10:02 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
int ft_newreplace_file(char **argv, std::string text)
{
	std::ofstream rfile;
	
	rfile.open((std::string(argv[1]) + ".replace").c_str());
	if (!rfile.is_open())
		return(1);
	for (int i = 0; i < (int) text.size(); i++)
	{
		int t = text.find(argv[2], i);
		if (t != -1 && t == i)
		{
			rfile << argv[3];
			i+= std::string(argv[2]).size() - 1;
		}
		else rfile << text[i];
	}
	rfile.close();
	return(0);
}
int main(int argc, char **argv)
{
	std::ifstream file;
	std::string text;
	char tmp;
	if (argc != 4)
	{
		std::cout << "Error: incorrect number of input parameters" << std::endl;
		return(1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error: file opening error" << std::endl;
		return(1);
	}
	while (!file.eof() && file >> std::noskipws >> tmp)
	{
		text += tmp;
	}
	file.close();
	int  i = ft_newreplace_file(argv, text);
	return(i);
}