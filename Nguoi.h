#ifndef NGUOI_H
#define NGUOI_H
#include "utils.h"
/**
 * Lớp biểu diễn thông tin của khách hàng
 */
class Nguoi
{
private:
    std::string _hoten;
    unsigned short _tuoi;
    std::string _cmnd;

public:
    Nguoi() = default;
    Nguoi(const std::string &hoten, unsigned short tuoi, const std::string &cmnd);
    bool operator==(const std::string &cmnd) const;
    std::string get_hoten() const;
    std::string get_cmnd() const;
    unsigned short get_tuoi() const;
};

#endif