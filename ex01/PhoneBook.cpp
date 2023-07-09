/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:17:04 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/09 08:36:26 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = -1;

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

bool is_alphasp(std::string str)
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (!isalpha(str[i]) && str[i] != ' ')
            return (false);
    }
    return (true);
}

bool is_num(std::string str)
{
    unsigned long num = 0;

    if (str.length() > 10 || str.empty())
        return (false);
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    for (unsigned long i = 0; i < str.size(); i++)
    {
        num *= 10;
        num = num + (str[i] - '0');
    }
    if (num > 2147483647)
        return (false);
    return (true);
}

void PhoneBook::addNewContact()
{
    std::string str;
    std::string msg = "";

    index++;
    if (index > 7)
        index = 0;
    if (index < -1)
        index = -1;
    for (int i = 0; i < 5; i++)
    {
        std::cout << mesContacts[index].getMessage(i) << std::endl;
        ;
        std::getline(std::cin, str);
        if (std::cin.eof() == true)
        {
            std::cout << "FIN DE PROGRAMME\n";
            exit(0);
        }
        if (i == 0)
        {
            if (!is_alphasp(str) || str.empty())
                msg = "Le prénom est erroné ou vide";
            else
                this->mesContacts[index].setFirstName(str);
        }
        else if (i == 1)
        {
            if (!is_alphasp(str) || str.empty())
                msg = "Le nom est erroné ou vide";
            else
                this->mesContacts[index].setLastName(str);
        }
        else if (i == 2)
        {
            if (str.empty())
                msg = "Le nickname est vide";
            else
                this->mesContacts[index].setNickName(str);
        }
        else if (i == 3)
        {
            if (str.empty())
                msg = "Le dark secret est vide";
            else
                this->mesContacts[index].setDarkestSecret(str);
        }
        else if (i == 4)
        {
            if (!is_num(str) || str.empty())
                msg = "Le numéro est erroné ou vide";
            else
                this->mesContacts[index].setNumTel(std::atoi(str.c_str()));
        }
        if (!msg.empty())
        {
            index--;
            std::cout << "ERROR : " << msg << std::endl;
            break;
        }
    }
    if (msg.empty())
        std::cout << "Le contact est ajouté avec succés" << std::endl;
}

void PhoneBook::printHeader()
{
    std::cout << std::setw(10) << "INDEX"
              << "|"
              << std::setw(10) << "FIRST NAME"
              << "|"
              << std::setw(10) << "LAST NAME"
              << "|"
              << std::setw(10) << "NICKNAME" << std::endl;
}

void PhoneBook::printContacts()
{
    int i = 0;
    // std::cout<<index<<std::endl;
    // for (int i = 0; i < index + 1; i++)
    while (this->mesContacts[i].getFirstName().size() != 0 && i <= 7)
    {
        this->mesContacts[i].afficheContact(i);
        i++;
    }
    std::cout << std::endl;
}

void PhoneBook::searchContact()
{
    std::string ind;
    int id = 0;

    if (index == -1)
        std::cout << "\nle repertoire est vide!" << std::endl;
    else
    {
        printHeader();
        printContacts();
        std::cout << "Entrer l'index du contact que vous voulez afficher" << std::endl;
        std::getline(std::cin, ind);
        if (is_num(ind))
        {
            id =std::atoi(ind.c_str());
            if (this->mesContacts[id].getFirstName().size() != 0 && id <= 7)
            {
                printHeader();
                this->mesContacts[id].afficheContact(id);
            }
            else
                std::cout << "cet index n'existe pas" << std::endl;
        }
        else
            std::cout << "cet index n'est pas valide" << std::endl;
    }
}