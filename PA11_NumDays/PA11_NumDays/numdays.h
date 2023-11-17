//
//  hours.h
//  PA11_NumDays
//
//  Created by Celine Wang on 11/16/23.
//
#include <string>
#ifndef hours_h
#define hours_h

class Hours {
private:
    int hours;
    double days;
    
public:
    Hours(int hours_param = 0) {
        hours = hours_param;
        days = hours_param / 8;
    }
    
    // function declarations
    void set_hours(int hours_param);
    int get_hours() const;
    double get_days() const;
    
    
    // operator declarations
    Hours operator+ (const Hours& right);
    Hours operator- (const Hours& right);
    Hours operator++ ();
    Hours operator-- ();
    Hours operator++ (int unused_param);
    Hours operator-- (int unused_param);
    
    friend std::ostream& operator<< (std::ostream&, const Hours&);
    friend std::istream& operator>> (std::istream&, Hours&);
};

#endif /* hours_h */
