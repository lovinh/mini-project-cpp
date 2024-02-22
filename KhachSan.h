#ifndef KHACHSAN_H
#define KHACHSAN_H

#include "utils.h"
#include "ThongTinThue.h"

/**
 * This class represent the controller of the KhachSan, that handle request from user
 */
class KhachSan
{
private:
    std::vector<ThongTinThue> _danh_sach;
    std::vector<ThongTinThue>::iterator _tim_khach(const std::string &cmnd);

public:
    KhachSan() = default;
    bool them_khach(const Nguoi &khach, const Phong &phong, const currency &so_ngay_thue);
    bool xoa_khach(const std::string &cmnd);
    currency tinh_tien(const std::string &cmnd);
    void in_thong_tin_thue(const std::string &cmnd);
    bool ton_tai_khach(const std::string &cmnd);
};

#endif