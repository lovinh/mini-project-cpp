#ifndef APP_H
#define APP_H
#include "utils.h"
#include "KhachSan.h"

/**
 * Lớp biểu diễn giao diện người dùng (UI)
 */
class App
{
public:
    App() = default;
    void run();

private:
    KhachSan _khach_san;
    void them_khach();
    void xoa_khach();
    void tinh_tien();
};

#endif