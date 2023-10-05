//
//  validation.h
//  ch07_ex2_create_account
//
//  Created by Celine Wang on 10/4/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef CWANG_VALIDATION_H
#define CWANG_VALIDATION_H

#include <string>

//namespace
namespace validation {
    //declare functions
bool is_valid_password(std::string password);
bool is_valid_email(std::string email);
}

#endif /* CWANG_VALIDATION_H */
