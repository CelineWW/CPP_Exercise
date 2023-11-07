//
//  UsedBook.h
//  ch13_ex2_product_viewer
//
//  Created by Celine Wang on 11/6/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef UsedBook_h
#define UsedBook_h
#include "Book.h"

class UsedBook: public Book {
public:
    UsedBook(std::string name = "", double price = 0.0,
         int disc_pct = 0, std::string author = "") :
         Book(name, price, disc_pct, author) {
    }

    std::string get_description() const override {
        return name + " by " + Book::get_author() + " (Used)";
        // if change author to be protected in Book class to get access.
    }
};

#endif /* UsedBook_h */
