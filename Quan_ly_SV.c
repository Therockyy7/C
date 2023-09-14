#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100 // khai báo hằng số cho kích thước của mảng cấu trúc

// khai báo kiểu SV là một biệt danh của struct Sinh_vien ở đầu chương trình
typedef struct Sinh_vien SV;

// khai báo struct date, struct diem và struct Sinh_vien trước khi sử dụng chúng
struct date
{
    int ngay;
    int thang;
    int nam;
};

struct diem{
    float Dim_chuyen_can;
    float diem_giua_ky;
    float diem_thi;
    float DTB;
};

struct Sinh_vien{
    int msv;
    char name[100];
    char gioitinh[5];
    struct date ngaysinh;
    int sdt;
    int lop;
    struct diem match;

};

void xoa_pace(char x[]){
    int i;
    int n = strlen(x);
    for(i = n - 1; i >= 0; i--){
        if(x[i] == '\n'){
            x[i] = '\0';
        }
    }
}

// sử dụng con trỏ (*) tham biến để truyền struct vào hàm
void them_sinh_vien(SV *sv){

    printf("\nMSV: "); scanf("%d",&sv->msv); // sử dụng toán tử (->) mũi tên để truy cập các trường của con trỏ struct
    printf("\nSDT: "); scanf("%d",&sv->sdt);
    printf("\nTen: "); fflush(stdin); fgets(sv->name, sizeof(sv->name), stdin); xoa_pace(sv->name);
    printf("\nLop: "); scanf("%d",&sv->lop);
    printf("\nGioi tinh: "); fflush(stdin); fgets(sv->gioitinh,sizeof(sv->gioitinh),stdin); xoa_pace(sv->gioitinh);
    printf("\nNgay sinh: "); scanf("%d%d%d",&sv->ngaysinh.ngay,&sv->ngaysinh.thang,&sv->ngaysinh.nam);
    printf("\nDiem chuyen can: "); scanf("%f",&sv->match.Dim_chuyen_can); // sử dụng float hoặc double cho các điểm số, không phải int
    printf("\nDiem giua ky: "); scanf("%f",&sv->match.diem_giua_ky);
    printf("\nDiem thi: "); scanf("%f",&sv->match.Dim_chuyen_can);
}

void in_sinh_vien(SV sv){
    // sử dụng %s cho các chuỗi, %d cho các số nguyên, và %f cho các số thực
    // sử dụng %02d để in các số có hai chữ số
    // thêm \n vào cuối lệnh printf để xuống dòng
    printf("%10d \t %10d \t %20s \t %10s \t %5s \t %02d/%02d/%d \t %5.2f \t %5.2f \t %5.2f", sv.msv, sv.sdt, sv.name, sv.lop, sv.gioitinh, sv.ngaysinh.ngay, sv.ngaysinh.thang, sv.ngaysinh.nam, sv.match.Dim_chuyen_can, sv.match.diem_giua_ky, sv.match.diem_thi);
}

void menu(){
    printf("==========HE THONG QUAN LY SINH VIEN===========\n");
    printf("0)Thoat chuong trinh\n");
    printf("1)Quan ly sinh vien\n");
    printf("2)Quan ly diem\n");
    printf("3)Quan ly mon\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_Quan_ly_sv(){
    printf("==========QUAN LY SINH VIEN===========\n");
    printf("0)Thoat chuong trinh\n");
    printf("1)Quan ly them sinh vien\n");
    printf("2)Quan ly sua\n");
    printf("3)Quan ly xoa\n");
    printf("4)Quan ly tim kiem\n");
    printf("5)Quan ly tim kiem theo ten\n");
    printf("6)Quan ly theo mssv\n");
    printf("7)Quan ly theo lop\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

}

int main(){
    menu(); 
    int n,QL;
    SV sv[MAX]; // khai báo một mảng cấu trúc có kích thước MAX
    int count = 0; // khai báo một biến đếm để theo dõi số lượng sinh viên trong mảng
    do{

    printf("Ban muon chon gi?\n ");
    scanf("%d",&n);
    switch(n){
        case 0:
            break;
        case 1:
            menu_Quan_ly_sv();
            do
            {
                printf("Ban muon chon gi?\n");
                scanf("%d",&QL);
                switch (QL)
                {
                case 0:
                    break;
                case 1:
                    them_sinh_vien(&sv[count]); // truyền địa chỉ của phần tử thứ count trong mảng vào hàm
                    count++; // tăng biến đếm lên 1
                    printf("%10s \t %10s \t %10s \t %10s \t %5s \t %10s \t %5s \t %5s \t %5s", "MSSV", "SDT", "Ten", "Lop", "Gioi tinh", "Ngay sinh", "Diem chuyen can", "Diem giua ky", "Diem thi");            
                    printf("\n");
                    in_sinh_vien(sv[count-1]); // in thông tin của phần tử thứ count-1 trong mảng
                    
                    break;
                }
            } while (QL != 0);
            

    }
    }while(n != 0);
}