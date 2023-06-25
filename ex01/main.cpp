/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:19:39 by sbahraou          #+#    #+#             */
/*   Updated: 2023/06/25 16:41:47 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <iostream>
# include <string>

int main()
{
    PhoneBook monRepertoire;
    std::string str;
    Contact nvContact;
    
    while (1)
    {
        std::cout << "Veuillez entrer l'une de ces commandes [ADD, SEARCH, EXIT] : ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        std::cout<<"________________________________________"<<std::endl;
        std::cout<<"\t\t\tAJOUTER UN CONTACT"<<std::endl;
        std::cout<<"________________________________________"<<std::endl;
        if (str == "ADD")
        { 
            monRepertoire.addNewContact();
        }
        else if (str == "SEARCH")
            std::cout<<"cest SEARCH"<<std::endl;
    }
    return (0);
}