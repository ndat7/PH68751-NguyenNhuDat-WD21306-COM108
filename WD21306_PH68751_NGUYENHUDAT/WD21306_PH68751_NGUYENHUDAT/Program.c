// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

//---------------------------------------------------
//Bài 1: Hàm nhập và in sản phẩm
//---------------------------------------------------
void bai1() {
    char ten1[50], ten2[50], ten3[50];
    int sl1, sl2, sl3;
        printf("Nhap ten san pham 1: ");
        scanf_s("%d", ten1);
        printf("Nhap so luong 1: ");
        scanf_s("%d", &sl1);
        printf("Nhap ten san pham 2: ");
        scanf_s("%d", ten2);
        printf("Nhap so luong 2: ");
        scanf_s("%d", &sl2);

        printf("Nhap ten san pham 3: ");
        scanf_s("%d", ten3);
        printf("Nhap so luong 3: ");
        scanf_s("%d", &sl3);

        printf("\n--- Thong tin vua nhap ---\n");
        printf("%s - %d\n", ten1, sl1);
        printf("%s - %d\n", ten2, sl2);
        printf("%s - %d\n", ten3, sl3);
} 
//------------------------------------------------
// Bài 2: Hàm liệt kê và tính TB số chia hết cho 3
//------------------------------------------------
void lietKeChia3(int n) {
    printf("Cac so chia het cho 3 nho hon %d: ", n);
    for (int i = 1; i < n; i++)
        if (i % 3 == 0) printf("%d ", i);
}

float tinhTrungBinhChia3(int n) {
    int sum = 0, dem = 0;
    for (int i = 1; i < n; i++)
        if (i % 3 == 0) {
            sum += i;
            dem++;
        }
    if (dem == 0) return 0;
    return (float)sum / dem;
}

void bai2() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf_s("%d", &n);

    lietKeChia3(n);

    float tb = tinhTrungBinhChia3(n);
    printf("\nTrung binh cong cac so chia het cho 3: %.2f\n", tb);
}

//---------------------------------------------
// Bài 3: Nhân viên
//---------------------------------------------
void nhapLuong(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap luong NV thu %d: ", i + 1);
        scanf_s("%d", &a[i]);
    }
}

int demLuongTren5tr(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 5000000) dem++;
    return dem;
}

int vitriMax(int a[], int n) {
    int max = a[0], vt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            vt = i;
        }
    }
    return vt;
}

void bai3() {
    int n;
    printf("Moi nhap so luong nhan vien: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("So luong nhan vien phai lon hon 0.\n");
        return;
    }

    int* luong = (int*)malloc(n * sizeof(int));
    if (luong == NULL) {
        printf("Khong du bo nho de cap phat mang luong.\n");
        return;
    }

    nhapLuong(luong, n);

    printf("\n----- Xuat thong tin Nhan vien -----\n");
    printf("So luong nhan vien la: %d\n", n);

    printf("Dem so luong muc luong tren 5 trieu: %d\n", demLuongTren5tr(luong, n));

    int vt = vitriMax(luong, n);
    printf("Vi tri co muc luong cao nhat: %d (Luong: %d)\n", vt + 1, luong[vt]);

    free(luong);
}

//-----------------------------------------
// Menu chính
//-----------------------------------------
int main() {
    int chon;

    do {
        printf("\n+------------------Menu------------------+\n");
        printf("1. Thong tin san pham\n");
        printf("2. Trung binh cong cac so chia het cho 3\n");
        printf("3. Thong tin nhan vien\n");
        printf("0. Thoat\n");
        printf("+----------------------------------------+\n");

        printf("Moi chon: ");
        scanf_s("%d", &chon);

        switch (chon) {
        case 1: bai1(); break;
        case 2: bai2(); break;
        case 3: bai3(); break;
        case 0: printf("Thoat chuong trinh.\n"); break;
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