#include "ThongTinThue.h"

ThongTinThue::ThongTinThue() : _so_ngay_thue(0), _nguoi_thue(Nguoi()), _loai_phong(Phong())
{
}
ThongTinThue::ThongTinThue(unsigned int so_ngay_thue, const Phong &loai_phong, const Nguoi &nguoi_thue) : _so_ngay_thue(so_ngay_thue), _loai_phong(loai_phong), _nguoi_thue(nguoi_thue)
{
}
currency ThongTinThue::tinh_tien_thue()
{
    return _so_ngay_thue * _loai_phong.get_gia();
}
const Nguoi &ThongTinThue::get_nguoi_thue()
{
    return _nguoi_thue;
}
void ThongTinThue::in_thong_tin()
{
    std::cout << "Ho ten khach : " << _nguoi_thue.get_hoten() << std::endl;
    std::cout << "Tuoi         : " << _nguoi_thue.get_tuoi() << std::endl;
    std::cout << "So CMND      : " << _nguoi_thue.get_cmnd() << std::endl;
    std::cout << "So ngay thue : " << _so_ngay_thue << std::endl;
    std::cout << "Phong        : " << _loai_phong.get_ten() << " - " << _loai_phong.get_gia() << std::endl;
}