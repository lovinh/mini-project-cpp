#include "App.h"
void App::run()
{
    std::cout << "QUAN LY KHACH SAN" << std::endl;
    while (true)
    {
        std::cout << "Danh sach lua chon: " << std::endl;
        std::cout << THEM_KHACH << ". Them khach hang." << std::endl;
        std::cout << XOA_KHACH << ". Xoa khach hang." << std::endl;
        std::cout << TINH_TIEN << ". Tinh tien thue." << std::endl;
        std::cout << THOAT << ". Thoat." << std::endl;
        std::cout << "Nhap lua chon (" << THEM_KHACH << "/" << XOA_KHACH << "/" << TINH_TIEN << "/" << THOAT << "): " << std::endl;
        int option;
        std::cin >> option;
        std::cout << "Lua chon cua ban: " << option << std::endl;
        if (option == (int)THEM_KHACH)
        {
            them_khach();
            continue;
        }
        if (option == (int)XOA_KHACH)
        {
            xoa_khach();
            continue;
        }
        if (option == (int)TINH_TIEN)
        {
            tinh_tien();
            continue;
        }
        if (option == (int)THOAT)
        {
            break;
        }
        std::cout << "Lua chon khong hop le! Vui long nhap lai!" << std::endl;
    }
    std::cout << "Ket thuc!" << std::endl;
}
void App::them_khach()
{
    std::string hoten;
    std::string cmnd;
    unsigned short tuoi;
    unsigned int so_ngay_thue;
    std::string phong;
    currency gia;
    int loai_phong;
    std::cout << "<=== TINH TIEN ===>" << std::endl;
    std::cout << "Nhap thong tin khach: " << std::endl;
    while (true)
    {
        std::cin.ignore();
        std::cout << "Nhap ho ten: " << std::endl;
        std::getline(std::cin, hoten);
        std::cout << "Nhap so cmnd: " << std::endl;
        std::getline(std::cin, cmnd);
        std::cout << "Nhap so tuoi: " << std::endl;
        std::cin >> tuoi;
        std::cout << "Nhap so ngay thue: " << std::endl;
        std::cin >> so_ngay_thue;
        while (true)
        {
            std::cout << "Lua chon loai phong: " << std::endl;
            std::cout << "1. Loai A - 500$ " << std::endl;
            std::cout << "2. Loai B - 300$ " << std::endl;
            std::cout << "3. Loai C - 100$ " << std::endl;
            std::cin >> loai_phong;
            if (loai_phong == 1)
            {
                phong = "A";
                gia = 500;
                break;
            }
            if (loai_phong == 2)
            {
                phong = "B";
                gia = 300;
                break;
            }
            if (loai_phong == 3)
            {
                phong = "C";
                gia = 100;
                break;
            }
            std::cout << "Loai phong khong hop le! Vui long nhap lai!" << std::endl;
        }
        std::cout << "\n============================" << std::endl;
        std::cout << "Kiem tra lai thong tin da nhap: " << std::endl;
        std::cout << "Ho ten khach : " << hoten << std::endl;
        std::cout << "Tuoi         : " << tuoi << std::endl;
        std::cout << "So CMND : " << cmnd << std::endl;
        std::cout << "so ngay thue : " << so_ngay_thue << std::endl;
        std::cout << "loai phong   : "
                  << ((loai_phong == 1) ? "A - 500$" : ((loai_phong == 2) ? "B - 300$" : "C - 100$"))
                  << std::endl;
        char confirm;
        while (true)
        {
            std::cout << "Thong tin nhap da dung chua (y/n): " << std::endl;
            std::cin >> confirm;
            if (confirm == 'y' || confirm == 'n')
                break;
            std::cout << "Tra loi khong hop le! Vui long nhap lai!" << std::endl;
        }
        if (confirm == 'y')
        {
            break;
        }
    }
    bool response = _khach_san.them_khach(Nguoi(hoten, tuoi, cmnd), Phong(phong, gia), so_ngay_thue);
    if (response)
        std::cout << "Them thanh cong!" << std::endl;
    else
        std::cout << "Them that bai!" << std::endl;
}
void App::xoa_khach()
{
    std::cout << "<=== XOA KHACH ===>" << std::endl;
    std::string cmnd;
    std::cout << "Nhap so CMND cua khach" << std::endl;
    std::cin >> cmnd;
    if (!_khach_san.ton_tai_khach(cmnd))
    {
        std::cout << "Khach hang co so CMND `" << cmnd << "` khong ton tai!" << std::endl;
        return;
    }
    std::cout << "Thong tin thue cua khach hang co so CMND `" << cmnd << "`:" << std::endl;
    _khach_san.in_thong_tin_thue(cmnd);
    char confirm;
    while (true)
    {
        std::cout << "Ban co chac muon xoa khach hang nay khong? (y/n)" << std::endl;
        std::cin >> confirm;
        if (confirm == 'y' || confirm == 'n')
            break;
        std::cout << "Lua chon khong hop le! Vui long nhap lai!" << std::endl;
    }
    bool response = false;
    if (confirm == 'y')
        response = _khach_san.xoa_khach(cmnd);
    if (response)
        std::cout << "Xoa khach thanh cong!" << std::endl;
    else
        std::cout << "Xoa khach that bai!" << std::endl;
}
void App::tinh_tien()
{
    std::cout << "<=== TINH TIEN ===>" << std::endl;
    std::string cmnd;
    std::cout << "Nhap so CMND cua khach" << std::endl;
    std::cin >> cmnd;
    if (!_khach_san.ton_tai_khach(cmnd))
    {
        std::cout << "Khach hang co so CMND `" << cmnd << "` khong ton tai!" << std::endl;
        return;
    }
    std::cout << "Thong tin thue cua khach hang co so CMND `" << cmnd << "`:" << std::endl;
    _khach_san.in_thong_tin_thue(cmnd);
    std::cout << "Tien can tra: " << _khach_san.tinh_tien(cmnd) << std::endl;
}