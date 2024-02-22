#include "Phong.h"

Phong::Phong() : _loai_phong("NULL"), _gia(0)
{
}
Phong::Phong(const std::string &loai_phong, currency gia) : _loai_phong(loai_phong), _gia(gia)
{
}
currency Phong::get_gia() const
{
    return _gia;
}
std::string Phong::get_ten() const
{
    return _loai_phong;
}