 //CConsoleApplication.c : file nay chua 'main' function. 
 //Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>



int main()
{
    int chon;

    do {
        printf("========== MENU ==========\n");
        printf("1. Thong tin gia dinh\n");
        printf("2. So chia het cho 5\n");
        printf("3. Thong tin sinh vien thi lap trinh\n");
        printf("0. Thoat\n");
        scanf_s("%d", &chon);

        switch (chon) {
        case 1: thongTinGiaDinh(); break;
        case 2: soChiaHetCho5(); break;
        case 3: thongTinSinhVienThiLapTrinh(); break;
        case 0: printf("Thoat chuong trinh...\n"); break;
        default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 0);

    return 0;
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184