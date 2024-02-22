#ifndef PHONG_H
#define PHONG_H
#include "utils.h"

/**
 * Lớp biểu diễn thông tin phòng khách sạn
 */
class Phong
{
private:
    std::string _loai_phong;
    currency _gia;

public:
    Phong();
    Phong(const std::string &loai_phong, currency gia);
    currency get_gia() const;
    std::string get_ten() const;
};

#endif