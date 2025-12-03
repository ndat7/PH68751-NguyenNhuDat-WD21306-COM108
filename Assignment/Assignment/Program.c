// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ---------------------------------------------
// HÀM HỖ TRỢ
// ---------------------------------------------
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// ---------------------------------------------
// CN1: KIỂM TRA SỐ NGUYÊN
// ---------------------------------------------
void kiemTraSoNguyen() {
    double so;
    int luaChon;
    do {
        printf("Nhap so can kiem tra: ");
        scanf_s("%lf", &so);

        if (so == (int)so)
            printf("%.0f la so nguyen.\n", so);
        else
            printf("%.2f KHONG phai so nguyen.\n", so);

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN2: UOC CHUNG – BOI CHUNG
// ---------------------------------------------
void uocChungvaBoiChung() {
    int a, b, luaChon;

    do {
        printf("Nhap so thu nhat: ");
        scanf_s("%d", &a);
        printf("Nhap so thu hai: ");
        scanf_s("%d", &b);

        int g = gcd(a, b);
        int l = (a * b) / g;

        printf("Uoc chung lon nhat (GCD) = %d\n", g);
        printf("Boi chung nho nhat (LCM) = %d\n", l);

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN3: TÍNH TIỀN KARAOKE
// ---------------------------------------------
void tinhTienQuanKaraoke() {
    double bd, kt, gio, tien;
    int luaChon;

    do {
        printf("Nhap gio bat dau: ");
        scanf_s("%lf", &bd);
        printf("Nhap gio ket thuc: ");
        scanf_s("%lf", &kt);

        if (kt <= bd || bd < 0 || kt > 24) {
            printf("Thoi gian khong hop le!\n");
        }
        else {
            gio = kt - bd;

            if (bd >= 10 && kt <= 17)
                tien = gio * 20000;
            else if (bd >= 17)
                tien = gio * 45000;
            else {
                double truoc17 = 17 - bd;
                double sau17 = kt - 17;
                tien = truoc17 * 20000 + sau17 * 45000;
            }

            if (gio > 3)
                tien = 3 * (tien / gio) + (gio - 3) * (tien / gio) * 0.7;

            printf("So tien phai tra: %.0f VND\n", tien);
        }

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN4: TÍNH TIỀN ĐIỆN
// ---------------------------------------------
void tinhTienDien() {
    double kWh, tien;
    int luaChon;

    do {
        printf("Nhap so dien tieu thu(kWh): ");
        scanf_s("%lf", &kWh);

        if (kWh < 0) {
            printf("So dien tieu thu khong hop le!\n");
        }
        else {
            if (kWh <= 50)
                tien = kWh * 1678;
            else if (kWh <= 100)
                tien = 50 * 1678 + (kWh - 50) * 1734;
            else if (kWh <= 200)
                tien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
            else if (kWh <= 300)
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
            else if (kWh <= 400)
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
            else
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;

            printf("So tien dien phai tra: %.2f VND\n", tien);
        }

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN5: ĐỔI TIỀN
// ---------------------------------------------
void doiTien() {
    int menhGia[] = { 500000, 200000, 100000, 50000, 20000, 10000 };
    int soTien, luaChon;

    do {
        printf("Nhap so tien can doi: ");
        scanf_s("%d", &soTien);

        for (int i = 0; i < 6; i++) {
            int soTo = soTien / menhGia[i];
            soTien %= menhGia[i];
            printf("%d VND: %d to\n", menhGia[i], soTo);
        }

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("--------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN6: TÍNH LÃI SUẤT VAY NGÂN HÀNG
// ---------------------------------------------
void tinhLaiSuatVayNganHang() {
    double tienVay, lai, soThang, tienPhaiTra;
    int luaChon;

    do {
        printf("Nhap so tien vay: ");
        scanf_s("%lf", &tienVay);
        printf("Lai suat/thang (%%): ");
        scanf_s("%lf", &lai);
        printf("So thang vay: ");
        scanf_s("%lf", &soThang);

        tienPhaiTra = tienVay * (1 + lai / 100 * soThang);
        printf("Tong so tien phai tra: %.2f\n", tienPhaiTra);

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN7: VAY TIỀN MUA XE TRẢ GÓP
// ---------------------------------------------
void vayTienMuaXeTraGop() {
    double soTien, lai, thang, goc, laiThang;
    int luaChon;

    do {
        printf("Gia tri xe: ");
        scanf_s("%lf", &soTien);
        printf("Lai suat / thang (%%): ");
        scanf_s("%lf", &lai);
        printf("So thang tra gop: ");
        scanf_s("%lf", &thang);

        goc = soTien / thang;
        laiThang = goc * (lai / 100);

        printf("Tra gop moi thang: %.2f (goc + lai)\n", goc + laiThang);

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN8: SẮP XẾP SINH VIÊN
// ---------------------------------------------
void sapXepThongTinSinhVien() {
    int n, luaChon;

    do {
        printf("Nhap so sinh vien: ");
        scanf_s("%d", &n);

        char ten[50][50];
        double diem[50];

        for (int i = 0; i < n; i++) {
            printf("Ten SV %d: ", i + 1);
            scanf_s("%s", ten[i], sizeof(ten[i]));
            printf("Diem: ");
            scanf_s("%lf", &diem[i]);
        }

        // Bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (diem[i] > diem[j]) {
                    double temp = diem[i];
                    diem[i] = diem[j];
                    diem[j] = temp;

                    char tempTen[50];
                    strcpy_s(tempTen, ten[i]);
                    strcpy_s(ten[i], ten[j]);
                    strcpy_s(ten[j], tempTen);
                }
            }
        }

        printf("\n--- Danh sach sau khi sap xep ---\n");
        for (int i = 0; i < n; i++) {
            printf("%s - %.2f\n", ten[i], diem[i]);
        }

        printf("Ban co muon tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN9: GAME FPOLY-LOTT (ĐOÁN SỐ)
// ---------------------------------------------
void gameFpolyLott() {
    int x, doan, luaChon;
    srand(time(NULL));

    do {
        x = rand() % 10;  // 0–9

        printf("Nhap so ban doan (0-9): ");
        scanf_s("%d", &doan);

        if (doan == x)
            printf("Chinh xac! Ban da thang!\n");
        else
            printf("Sai! So dung là %d\n", x);

        printf("Choi tiep (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
        printf("-------------------------------------------------\n");
    } while (luaChon == 1);
}

// ---------------------------------------------
// CN10: TÍNH TOÁN PHÂN SỐ
// ---------------------------------------------
void tinhToanPhanSo() {
    int a, b, c, d, luaChon;

    do {
        printf("Nhap phan so 1 (a/b): ");
        scanf_s("%d/%d", &a, &b);
        printf("Nhap phan so 2 (c/d): ");
        scanf_s("%d/%d", &c, &d);

        printf("Tong = %d/%d\n", a * d + b * c, b * d);
        printf("Hieu = %d/%d\n", a * d - b * c, b * d);
        printf("Tich = %d/%d\n", a * c, b * d);
        printf("Thuong = %d/%d\n", a * d, b * c);

        printf("Tiep tuc (1: Co, 0: Khong)? ");
        scanf_s("%d", &luaChon);
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