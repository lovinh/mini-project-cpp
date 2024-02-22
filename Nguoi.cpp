#include "Nguoi.h"

Nguoi::Nguoi(const std::string &hoten, unsigned short tuoi, const std::string &cmnd) : _hoten(hoten), _tuoi(tuoi), _cmnd(cmnd)
{
}
bool Nguoi::operator==(const std::string &cmnd) const
{
    return _cmnd == cmnd;
}
std::string Nguoi::get_hoten() const
{
    return _hoten;
}
std::string Nguoi::get_cmnd() const
{
    return _cmnd;
}
unsigned short Nguoi::get_tuoi() const
{
    return _tuoi;
}