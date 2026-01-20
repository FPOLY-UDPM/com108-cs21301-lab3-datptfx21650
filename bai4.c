/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên

#include <stdio.h>
#include <math.h> // Dùng cho sqrt()

int main()
{

    // Khai báo biến
    int choice;

    // Hiển thị menu
    printf("========= MENU CHUONG TRINH =========\n");
    printf("1. Xep loai hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac nhat (ax + b = 0)\n");
    printf("3. Giai phuong trinh bac hai (ax^2 + bx + c = 0)\n");
    printf("4. Tinh tien dien\n");
    printf("============================\n");

    // Nhập dữ liệu
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch (choice)
    {
    case 1:
    {
        float diem;
        printf("Nhap diem sinh vien (0-10): ");
        scanf("%f", &diem);

        if (diem >= 0 && diem <= 10)
        {
            if (diem >= 9)
            {
                printf("Hoc luc: Xuat sac\n");
            }
            else if (diem >= 8)
            {
                printf("Hoc luc: Gioi\n");
            }
            else if (diem >= 6.5)
            {
                printf("Hoc luc: Kha\n");
            }
            else if (diem >= 5)
            {
                printf("Hoc luc: Trung binh\n");
            }
            else if (diem >= 3.5)
            {
                printf("Hoc luc: Yeu\n");
            }
            else
            {
                printf("Hoc luc: Kem\n");
            }
        }
        else
        {
            printf("Nhap diem khong hop le!\n");
        }
        break;
    }

    case 2:
    {
        float a, b;
        printf("Nhap a: ");
        scanf("%f", &a);
        printf("Nhap b: ");
        scanf("%f", &b);

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
        }
        else
        {
            float x = -b / a;
            printf("Phuong trinh co nghiem x = %.2f\n", x);
        }
        break;
    }

    case 3:
    {
        float a, b, c;
        printf("Nhap a: ");
        scanf("%f", &a);
        printf("Nhap b: ");
        scanf("%f", &b);
        printf("Nhap c: ");
        scanf("%f", &c);

        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                {
                    printf("Phuong trinh co vo so nghiem\n");
                }
                else
                {
                    printf("Phuong trinh vo nghiem\n");
                }
            }
            else
            {
                float x = -c / b;
                printf("Phuong trinh co nghiem x = %.2f\n", x);
            }
        }
        else
        {
            float delta = b * b - 4 * a * c;

            if (delta < 0)
            {
                printf("Phuong trinh vo nghiem\n");
            }
            else if (delta == 0)
            {
                float x = -b / (2 * a);
                printf("Phuong trinh co nghiem kep x = %.2f\n", x);
            }
            else
            {
                float x1 = (-b + sqrt(delta)) / (2 * a);
                float x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            }
        }
        break;
    }

    case 4:
    {
        int soDien;
        int tienDien;

        printf("Nhap so dien tieu thu (kWh): ");
        scanf("%d", &soDien);

        if (soDien <= 50)
        {
            tienDien = soDien * 1678;
        }
        else if (soDien <= 100)
        {
            tienDien = 50 * 1678 + (soDien - 50) * 1734;
        }
        else if (soDien <= 200)
        {
            tienDien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
        }
        else if (soDien <= 300)
        {
            tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;
        }
        else if (soDien <= 400)
        {
            tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834;
        }
        else
        {
            tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927;
        }

        printf("So tien dien can phai dong: %d VND\n", tienDien);
        break;
    }

    default:
    {
        printf("Lua chon khong hop le!\n");
        break;
    }
    }

    return 0;
}
