#include "KhachSan.h"

bool KhachSan::them_khach(const Nguoi &khach, const Phong &phong, const currency &so_ngay_thue)
{
    try
    {
        _danh_sach.push_back(ThongTinThue(so_ngay_thue, phong, khach));
        return true;
    }
    catch (const std::exception &e)
    {
        return false;
    }
}
bool KhachSan::xoa_khach(const std::string &cmnd)
{
    std::vector<ThongTinThue>::iterator it = _tim_khach(cmnd);
    if (it != _danh_sach.end())
    {
        _danh_sach.erase(it);
        return true;
    }
    return false;
}
currency KhachSan::tinh_tien(const std::string &cmnd)
{
    std::vector<ThongTinThue>::iterator it = _tim_khach(cmnd);
    if (it != _danh_sach.end())
    {
        return it->tinh_tien_thue();
    }
    return 0;
}

std::vector<ThongTinThue>::iterator KhachSan::_tim_khach(const std::string &cmnd)
{
    std::vector<ThongTinThue>::iterator it;
    for (it = _danh_sach.begin(); it != _danh_sach.end(); it++)
    {
        if (it->get_nguoi_thue() == cmnd)
        {
            break;
        }
    }
    return it;
}

void KhachSan::in_thong_tin_thue(const std::string &cmnd)
{
    std::vector<ThongTinThue>::iterator it = _tim_khach(cmnd);
    if (it != _danh_sach.end())
    {
        it->in_thong_tin();
    }
}

bool KhachSan::ton_tai_khach(const std::string &cmnd)
{
    return _tim_khach(cmnd) != _danh_sach.end();
}