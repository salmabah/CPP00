/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:14:59 by sbahraou          #+#    #+#             */
/*   Updated: 2023/06/25 16:37:49 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::_msgOut[5] = 
{   "Entrer le prénom : ",
    "Entrer le nom : ", 
    "Entrer le surnom : ",
    "Entrer le lourd secret : ",
    "Entrer le numéro de tel : "
};

Contact::Contact()
{
    std::cout<<"Constructeur de Contact est appelé"<<std::endl;
}

Contact::~Contact()
{ 
    std::cout<<"Destructeur de Contact est appelé"<<std::endl;
}

std::string Contact::getFirstName()
{
    return (_firstName);
}

std::string Contact::getLastName()
{
    return (_lastName);
}

std::string Contact::getNickName()
{
    return (_nickName);
}

std::string Contact::getDarkestSecret()
{
    return (_darkestSecret);
}

int Contact::getNumTel()
{
    return (_numTel);
}

void Contact::setFirstName(std::string fname)
{
    _firstName = fname;
}

void Contact::setLastName(std::string lname)
{
    _lastName = lname;
}

void Contact::setNickName(std::string nickname)
{
    _nickName = nickname;
}

void Contact::setDarkestSecret(std::string dsecret)
{
    _darkestSecret = dsecret;
}

void Contact::setNumTel(int num)
{
    _numTel = num;
}

// In Contact.cpp
std::string& Contact::getMessage(int i)
{
    return _msgOut[i];
}

void Contact::afficheContact()
{
    std::cout<<"Prénom : "<<_firstName<<std::endl;
    std::cout<<"Nom : "<<_lastName<<std::endl;
    std::cout<<"Nicknmae : "<<_nickName<<std::endl;
    std::cout<<"Darkest Secret : "<<_darkestSecret<<std::endl;
    std::cout<<"Numero de tel : "<<_numTel<<std::endl;
}