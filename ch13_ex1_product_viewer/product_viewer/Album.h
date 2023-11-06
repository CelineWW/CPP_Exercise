//
//  Album.h
//  ch13_ex1_product_viewer
//
//  Created by Celine Wang on 11/6/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef Album_h
#define Album_h

#include <string>
#include "Media.h"

class Album : public Media {
private:
    std::string artist;
public:
    Album (std::string name = "", double price = 0.0,
        int disc_pct = 0, std::string artist_param = "", std::string format = "") :
        Media(name, price, disc_pct, format) {
        artist = artist_param;
    }

    void set_author(std::string artist_param) {
        artist = artist_param;
    }
    std::string get_artist() const {
        return artist;
    }

    std::string get_description() const {
        return name + " by " + artist + " - " + format;
    }
};

#endif /* Album_h */
