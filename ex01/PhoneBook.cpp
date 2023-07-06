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
{
    std::cout<<"Constructeur de PhoneBook est appelé"<<std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout<<"Destructeur de PhoneBook est appelé"<<std::endl;
}


bool is_alpha(std::string str)
{
    for (int i = 0; i < str.lenght(), i++)
    {
        if (!isapha(str[i]))
            return (false);
    }
    return (true)
}

bool is_num(std::string str)
{
    for (int i = 0; i < str.lenght(), i++)
    {
        if (!isdigit(str[i]))
            return (false);
    }
    return (true)
}


void    PhoneBook::addNewContact()
{
    std::string str;
    std::string msg = "";
    
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
            exit(0);
        }
        if (i == 0)
        {
            if (!is_alpha(str))
                msg = "Le prénom est erroné";
            this->mesContacts[index].setFirstName(str);
        }
        else if (i == 1)
        {
            if (!is_alpha(str))
                msg = "Le nom est erroné";
            this->mesContacts[index].setLastName(str);}
        else if (i == 2)
            this->mesContacts[index].setNickName(str);
        else if (i == 3)
            this->mesContacts[index].setDarkestSecret(str);
        else if (i == 4)
        {
            if (!is_num(str))
                msg = "Le numéro est erroné";       
            this->mesContacts[index].setNumTel(std::stoi(str));
        }
    }
    if (msg.empty())
    {
        this->mesContacts[index].afficheContact();
        std::cout<<"Le contact est ajouté avec succés"<<std::endl;
    }
    else
    {
        this->mesContacts[index] =  NULL;
        index--;

    }

}

// Contact PhoneBook::searchContact()
// {

// }