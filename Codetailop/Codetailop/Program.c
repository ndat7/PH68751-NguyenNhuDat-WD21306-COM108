#include <stdio.h>
#include <math.h>

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

void demoString()
{
	// string
	char name[10] = "Anh"; // { 'A', 'n', 'h' }
	// gets(name); > fgets();
	while (getchar() != '\n');
	
	printf("Nhap ten cua ban: ");
	fgets(name, sizeof(name), stdin);

	// Xuat du lieu = for + printf
	printf("%s", name);
	printf("\n");
	//puts(name);
}
int main()
{
	demoString();
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