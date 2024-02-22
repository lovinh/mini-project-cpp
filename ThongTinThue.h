#ifndef THONGTINTHUE_H
#define THONGTINTHUE_H

#include "Nguoi.h"
#include "Phong.h"
#include "utils.h"
/**
 * Lớp biểu diễn thông tin thuê của khách (Gồm số ngày thuê, phòng thuê và thông tin cá nhân của người thuê)
 */
class ThongTinThue
{
private:
    unsigned int _so_ngay_thue;
    Phong _loai_phong;
    Nguoi _nguoi_thue;

public:
    ThongTinThue();
    ThongTinThue(unsigned int so_ngay_thue, const Phong &loai_phong, const Nguoi &nguoi_thue);
    currency tinh_tien_thue();
    const Nguoi &get_nguoi_thue();
    void in_thong_tin();
};

#endif