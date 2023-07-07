/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 02:55:56 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/07 00:17:17 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char *av[])
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            std::string chaineString(av[i]);
            for (unsigned long j = 0; j < chaineString.size(); j++)
                std::cout<<static_cast<char>(toupper(chaineString[j]));
        }
    }
    else   
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout<<std::endl;
    return (0);
}