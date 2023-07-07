/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:05:50 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/07 06:14:23 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private :
    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickName;
    std::string     _darkestSecret;
    int             _numTel;
    static std::string   _msgOut[5];

public :
    Contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getDarkestSecret();
    int getNumTel();
    void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setNickName(std::string nickname);
    void setDarkestSecret(std::string dsecrect);
    void setNumTel(int num);
    std::string& getMessage(int i);
    std::string checkLength(std::string str);
    void afficheContact(int i);
    ~Contact();
};

# endif