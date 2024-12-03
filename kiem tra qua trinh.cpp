/*
mssv:110124077
ho ten:Ngo Quoc Huy
lop:DA24TTA
*/
#include<stdio.h>
void NhapThoiGian(float a[],int n);
void XuatThoiGian(float a[], int n);
float TinhTongSoGioHoc(float a[],int n);

int main()
{
	int a,n;
	printf("Nhap thu (<= 7): ");
	do
	{
		scanf("%d",&n);
	}while(n<0||n>7);
	NhapThoiGian(a,n);
	XuatThoiGian(a,n);
	printf("Tong gio= ");
	return 0;
}
void NhapThoiGian(float a[],int n)
{
    int i;
	for(int i=0;i<=n;i++)
	{
		printf("\nhap thu %d", i+1,);
		scanf("%f",&a[i]);
	}
}
void XuatThoiGian(float a[],int n)
{
	int i=0;
	for(int i=0;i<=n;i++)
	{
		printf("\nthu %d,%2.f gio",i+1,a[i]);
		scanf("%f"&a[i]);
	}
	printf("\n");
}
float TinhTongSoGioHoc(float a[],int n)


