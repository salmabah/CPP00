/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:19:39 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/07 07:04:20 by sbahraou         ###   ########.fr       */
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
        std::cout<<"\n________________________________________________________________________________"<<std::endl;
        std::cout<<"\t\t\tADD    : AJOUTER UN CONTACT"<<std::endl;
        std::cout<<"________________________________________________________________________________"<<std::endl;
        std::cout<<"________________________________________________________________________________"<<std::endl;
        std::cout<<"\t\t\tSEARCH : CHERCHER UN CONTACT"<<std::endl;
        std::cout<<"________________________________________________________________________________"<<std::endl;
        std::cout<<"________________________________________________________________________________"<<std::endl;
        std::cout<<"\t\t\tEXIT   : QUITTER LE PROGRAMME"<<std::endl;
        std::cout<<"________________________________________________________________________________"<<std::endl;
        std::cout << "\nVeuillez entrer l'une de ces commandes [ADD, SEARCH, EXIT] : ";
        std::getline(std::cin, str);
        if (std::cin.eof() || str == "EXIT")
            exit(0);
        if (str == "ADD")
            monRepertoire.addNewContact();
        else if (str == "SEARCH")
            monRepertoire.searchContact();
        else
            std::cout<<"Commande Invalide!!"<<std::endl;
    }
    return (0);
}