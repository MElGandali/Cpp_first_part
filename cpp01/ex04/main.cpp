/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:52:20 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/30 17:26:57 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<fstream>
#include <sstream>
#include <string.h>

int main(int argc, char **argv)
{
    std::string filecontent;
    std::string s1;
    std::string s2;
    char ch;
    if (argc == 4)
    {
        std::ifstream inputFile(argv[1]);
        std::ofstream outputFile("content.replace" , std::ios::app);
        if (!inputFile.is_open() || !outputFile.is_open())
        {
            std::cerr << "Error : Unable to open the file" << std::endl;
            return(1);
        }
        s1 = argv[2];
        s2 = argv[3];
        if (s1.empty())
            return(1);
        while (inputFile.get(ch))
            filecontent += ch;
        inputFile.close();
        while(filecontent.find(s1) != std::string::npos)
        {
            int i = filecontent.find(s1);
            filecontent.erase(i , s1.length());
            filecontent.insert(i, s2);
            i++;
        }
        outputFile << filecontent;
        outputFile.close();
    }
}