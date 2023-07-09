/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:14:59 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/09 21:20:34 by sbahraou         ###   ########.fr       */
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
    // std::cout<<"Constructeur de Contact est appelé"<<std::endl;
}

Contact::~Contact()
{ 
    // std::cout<<"Destructeur de Contact est appelé"<<std::endl;
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

std::string Contact::getNumTel()
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

void Contact::setNumTel(std::string num)
{
    _numTel = num;
}

// In Contact.cpp
std::string& Contact::getMessage(int i)
{
    return _msgOut[i];
}

std::string Contact::checkLength(std::string str)
{
    if (str.size() > 10)
       return (str.substr(0,9)+".");
    else
        return (str);
}

void Contact::afficheContact(int i)
{
    std::cout<<std::setw(10)<<i<<"|"<<
                std::setw(10)<<checkLength(_firstName)<<"|"<<
                std::setw(10)<<checkLength(_lastName)<<"|"<<
                std::setw(10)<<checkLength(_nickName)<<std::endl;
}

void Contact::afficheContactDetails(int i)
{
    std::cout<<std::setw(10)<<i<<"|"<<
                std::setw(10)<<checkLength(_firstName)<<"|"<<
                std::setw(10)<<checkLength(_lastName)<<"|"<<
                std::setw(10)<<checkLength(_nickName)<<"|"<<
                std::setw(10)<<checkLength(_numTel)<<"|"<<
                std::setw(10)<<checkLength(_darkestSecret)<<std::endl;
}