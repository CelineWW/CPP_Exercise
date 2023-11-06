//
//  Media.h
//  ch13_ex1_product_viewer
//
//  Created by Celine Wang on 11/6/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef Media_h
#define Media_h

#include <string>
#include "Product.h"

class Media : public Product {
protected:
    std::string format;
public:
    Media(std::string name = "", double price = 0.0,
          int disc_pct = 0, std::string format_param = "") :
        Product(name, price, disc_pct) {
        format = format_param;
    }
};

#endif /* Media_h */
