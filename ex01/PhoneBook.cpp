/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:17:04 by sbahraou          #+#    #+#             */
/*   Updated: 2023/06/25 16:38:37 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int PhoneBook::index = 0;

PhoneBook::PhoneBook()
{//no need to fill it
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::addNewContact()
{
    std::string str;
    
    if (index != 0)
        index++;
    if (index > 7)
        index = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<mesContacts[index].getMessage(i)<<std::endl;;
        std::getline(std::cin, str);
        if (std::cin.eof() == true)
        {
            std::cout<<"FIN DE PROGRAMME\n";
            std::exit(0);
        }
        if (i == 0)
                this->mesContacts[index].setFirstName(str);
        else if (i == 1)
            this->mesContacts[index].setLastName(str);
        else if (i == 2)
            this->mesContacts[index].setNickName(str);
        else if (i == 3)
            this->mesContacts[index].setDarkestSecret(str);
        else if (i == 4)            
            this->mesContacts[index].setNumTel(std::stoi(str));
    }
    
    this->mesContacts[index].afficheContact();
    std::cout<<"Le contact est ajouté avec succés"<<std::endl;
}

// Contact PhoneBook::search()
// {

// }