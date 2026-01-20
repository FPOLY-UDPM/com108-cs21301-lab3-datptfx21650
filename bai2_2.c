/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
// 2.2 BẬC 2
// Phương trình có dạng: ax2 + bx + c = 0
// Input: Nhập vào từ bàn phím: a, b, c
// Output: Nghiệm của phương trình
// Biết rằng:
// Nếu a == 0, phương trình thành bx + c = 0
// Ngược lại nếu a != 0
//  Tính delta
//  Nếu delta < 0: Phương trình vô nghiệm
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a)
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt
// o X1 = (-b + căn(delta))/(2*a)
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h> // thư viện toán học để dùng hàm sqrt() căn bậc 2

int main()
{

    // Khai báo biến
    float a, b, c;
    float delta, x1, x2;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap c: ");
    scanf("%f", &c);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0)
    {
        // Phương trình bậc nhất: bx + c = 0
        if (b == 0)
        {
            // Nếu c = 0 → phương trình có vô số nghiệm
            if (c == 0)
                printf("Phuong trinh co vo so nghiem.\n");
            // Nếu c ≠ 0 → phương trình vô nghiệm
            else
                printf("Phuong trinh vo nghiem.\n");
        }
        else
        {
            // Trường hợp phương trình bậc nhất bx + c = 0
            float x = -c / b; // Tính nghiệm
            printf("Phuong trinh co nghiem: x = %.2f\n", x);
        }
    }
    else
    {
        // Trường hợp a ≠ 0 → phương trình bậc hai
        // Phương trình bậc hai
        delta = b * b - 4 * a * c;

        // Nếu delta < 0 → phương trình vô nghiệm
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem.\n");
        }

        // Nếu delta = 0 → phương trình có nghiệm kép
        else if (delta == 0)
        {
            float x = -b / (2 * a); // Công thức nghiệm kép
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        }
        // Nếu delta > 0 → phương trình có 2 nghiệm phân biệt
        else
        {
            // Tính nghiệm x1
            x1 = (-b + sqrt(delta)) / (2 * a);
            // Tính nghiệm x2
            x2 = (-b - sqrt(delta)) / (2 * a);

            // In kết quả ra màn hình
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}