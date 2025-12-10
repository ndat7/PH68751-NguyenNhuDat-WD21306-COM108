#include <stdio.h>
#include <math.h>
#include <string.h>

//int main() {
//
//	int n;
//	int y[10];
//	int tong = 0;
//	printf("Nhap phan tu: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("y[%d] = ", i);
//		scanf_s("%d", &y[i]);
//	}
//	printf("Cac phan tu cua mang la: \n");
//	for (int i = 0; i < n; i++) { 
//		printf("%d", y[i]);
//		tong += y[i];
//	}
//}

//int main() {
//	char ten[50];
//	printf("Nhap vao ten cua ban: ");
//	scanf_s("%s", ten);
//	puts(ten);
//	printf("Ten cua ban la: %s", ten);
//	gets(ten);
//	printf("Ten cua ban la: %s", ten);
//}

//void demoMang2Chieu()
//{
//	int array[2][3];
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("mang[%d][%d] = ", i, j);
//			scanf_s("%d", &array[i][j]);
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d, ", array[i][j]);
//		}
//		printf("\n");
//	}
//}


//void demoString()
//{
//	// string
//	char name[10] = "Anh"; // { 'A', 'n', 'h' }
//	// gets(name); > fgets();
//	while (getchar() != '\n');
//	
//	printf("Nhap ten cua ban: ");
//	fgets(name, sizeof(name), stdin);
//
//	// Xuat du lieu = for + printf
//	printf("%s", name);
//	printf("\n");
//	//puts(name);
//
//	// string
//	char name[50] = { 'A', 'n', 'h' };
//	char mangKyTu[50];
//	// gets(name); > fgets();      khong dung duoc khoang trang
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	scanf_s(" %c", &name[i]);
//	//}
//	while (getchar() != '\n');
//	printf("Nhap ten cua ban: ");
//	fgets(name, sizeof(name), stdin); //nhap duoc khoang trang
//	// xuat du lieu = for + printf
//	printf(" %s", name);
//	printf("\n");
//	//puts(name) thay the cho ca mang for bao gom ca dau xuong dong
//	// puts(mangKyTu);
//	printf("String Length: ");
//	printf("%d", strlen(mangKyTu));
//	printf("\n");
//	printf("String Compare Greater than: ");
//	printf("%d", strcmp("C", "A"));
//	printf("\n");
//	printf("String Lower: ");
//	printf("%s", strlwr(mangKyTu));
//	printf("\n");
//	printf("String Upper: ");
//	printf("%s", strupr(mangKyTu));
//	printf("\n");
//	printf("String Reverse (Encryption): ");
//	printf("%s", strrev(mangKyTu));
//	printf("\n");
//	printf("String Reverse (Decryption): ");
//	printf("%s", strrev(mangKyTu));
//	printf("\n");
//	printf("Find String in String: ");
//	if (strstr(mangKyTu, "A") != NULL)
//	{
//		printf("Found: ");
//		printf("%s", strstr(mangKyTu, "A"));
//	}
//	else
//	{
//		printf("NOT FOUND");
//	}
//}
//int main()
//{
//	demoString();
//}

// bai 1
void thongTinMonHoc() {
    char ten[50], ma[20];
    int soTin;
    long hocPhi;

    printf("\n=== NHAP THONG TIN MON HOC ===\n");
    fflush(stdin);
    printf("Nhap ten mon hoc: ");
    gets(ten);

    printf("Nhap ma mon hoc: ");
    gets(ma);

    printf("Nhap so tin chi: ");
    scanf("%d", &soTin);

    hocPhi = soTin * 500000;

    printf("\n--- THONG TIN MON HOC ---\n");
    printf("Ten mon: %s\n", ten);
    printf("Ma mon: %s\n", ma);
    printf("So tin chi: %d\n", soTin);
}
// bai 2 
void tinhTongSoLe() {
    int n, tong = 0;
    printf("\nNhap so nguyen duong n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        tong += i;
    }

    printf("Tong cac so le tu 1 den %d = %d\n", n, tong);

    if (n % 2 == 0)
        printf("So %d la so CHAN.\n", n);
    else
        printf("So %d la so LE.\n", n);
}
// bai 3
void thongTinDiemLab() {
    int n;
    printf("\nNhap so sinh vien: ");
    scanf("%d", &n);

    float diem[100];
    float tong = 0;
    float max = -1;
    int demKhongDat = 0;

    printf("\nNhap diem cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Diem SV %d: ", i + 1);
        scanf("%f", &diem[i]);

        tong += diem[i];
        if (diem[i] > max) max = diem[i];
        if (diem[i] < 5) demKhongDat++;
    }

    for (int i = 0; i < n; i++) {
        printf("SV %d: %.2f\n", i + 1, diem[i]);
    }

    printf("\nDiem trung binh: %.2f\n", tong / n);
    printf("Diem cao nhat: %.2f\n", max);
    printf("So sinh vien diem < 5: %d\n", demKhongDat);
}
// MENU + MAIN
int main() {
    int chon;

    do {
        printf("\n---------- MENU ----------\n");
        printf("1. Thong tin mon hoc\n");
        printf("2. Tinh tong so le\n");
        printf("3. Thong tin diem Lab\n");
        printf("0. Thoat\n");
        printf("Moi chon: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1:
            thongTinMonHoc();
            break;
        case 2:
            tinhTongSoLe();
            break;
        case 3:
            thongTinDiemLab();
            break;
        case 0:
            printf("Thoat chuong trinh...\n");
            break;
        default:
            printf("Lua chon khong hop le! Moi nhap lai.\n");
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