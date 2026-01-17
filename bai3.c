/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN
//  Input: Nhập vào số điện tiêu thụ hàng tháng
//  Output: Hiển thị số tiền cần phải đóng

// bảng giá điện
/*0 – 50 kWh: 1.678 đ/kWh

51 – 100 kWh: 1.734 đ/kWh

101 – 200 kWh: 2.014 đ/kWh

Trên 200 kWh: 2.536 đ/kWh*/

#include <stdio.h>

int main()
{

    // Khai báo biến
    int soDien;
    float tienDien = 0;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (soDien <= 50)
    {
        // 50 kWh đầu tiên
        tienDien = soDien * 1678;
    }
    else if (soDien <= 100)
    {
        // 50 kWh đầu tiên + phần còn lại
        tienDien = 50 * 1678 + (soDien - 50) * 1734;
    }
    else if (soDien <= 200)
    {
        // 50 kWh đầu + 50 kWh tiếp + phần còn lại
        tienDien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    }
    else
    {
        // Trên 200 kWh
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;
    }

    // Hiển thị số tiền điện cần phải đóng
    printf("So tien dien can phai dong: %.0f VND\n", tienDien);

    return 0;
}