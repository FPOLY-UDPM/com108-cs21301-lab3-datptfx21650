/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
//  2.1 BẬC 1
//  Phương trình có dạng ax + b = 0
//  Input: nhập vào từ bàn phím giá trị của a, b
//  Output: Hiển thị nghiệm của phương trình
//  Biết rằng:
//  Nếu a == 0,
//   b == 0: Phương trình có vô số nghiệm
//   b != 0: Phương trình vô nghiệm
//  Ngược lại: Phương trình có nghiệm x = -b/a

#include <stdio.h>

int main()
{

    // Khai báo biến
    float a, b, x;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh co vo so nghiem\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
        // Kết thúc nếu a == 0
        return 0;
    }
}