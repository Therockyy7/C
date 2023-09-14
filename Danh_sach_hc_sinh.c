
/*Yêu cầu bài tập C là sử dụng Struct trong C tạo cấu trúc sinh viên gồm các thông tin: tên sinh viên, mã sinh viên và tên môn học. 
Nhập thông tin các sinh viên và sau đó in các thông tin này trên màn hình.*/

#include<stdio.h>
#include<string.h>
struct SINH_VIEN {
    char Name_sv[100];
    char subject[30];
    int MSSV; 
    int diem;   
};

int main(){
   
    int i;
    int max;
    struct SINH_VIEN sv[4];
    for(i = 0; i<3; i++){
    printf("Nhap ten: \n");
    fgets(sv[i].Name_sv, sizeof(sv[i].Name_sv), stdin); 
    strtok(sv[i].Name_sv, "\n"); // loại bỏ ký tự xuống dòng
    /*Đây là do bạn đang dùng hàm fgets để nhập chuỗi ký tự, nhưng hàm này sẽ lấy cả ký tự xuống dòng vào chuỗi. Điều này làm cho việc so sánh chuỗi bị sai lệch*/
    /*Tôi hiểu bạn muốn sử dụng hàm fgets để nhập chuỗi ký tự. Tuy nhiên, hàm này sẽ lấy cả ký tự xuống dòng vào chuỗi,
     nên bạn cần phải loại bỏ nó trước khi so sánh chuỗi. Bạn có thể dùng hàm strtok để cắt bỏ ký tự xuống dòng khỏi chuỗi.*/
    printf("Nhap ten mon(toan,ly,hoa): ");
    fgets(sv[i].subject, sizeof(sv[i].subject), stdin);
    strtok(sv[i].subject, "\n");
    printf("Nhap MSSV: ");
    scanf("%d",&sv[i].MSSV);
    getchar();
    printf("Nhap diem: ");
    scanf("%d",&sv[i].diem);
    getchar();
    //  while (getchar() != '\n'); // xoá bộ nhớ đệm
    //     {printf("\n");} // thêm một dòng trống
        /*khi sử dụng scanf và fgets trong cùng một chương trình. Nguyên nhân của vấn đề này là do scanf không đọc ký tự xuống dòng (\n) 
        khi nhập MSSV, nên ký tự xuống dòng này sẽ được fgets đọc vào khi nhập tên, dẫn đến việc bỏ qua việc nhập tên*/
    }
    max = -1;
    int luu = 0;
    for(i = 0; i < 3; i++){
        if(strcmp(sv[i].subject,"toan") == 0){
            if(sv[i].diem > max){
                max = sv[i].diem;
                luu = i;
        }
    }
    }   
    for( i = 0; i<3; i++){
        printf("\n+Thong tin cua SV: %d",i+1);
        printf("\nTen: %s",sv[i].Name_sv);
        printf("\nMon: %s",sv[i].subject);
        printf("\nMSSV: %d",sv[i].MSSV);
        printf("\nDiem: %d",sv[i].diem);
    }
    printf("\nDiem cua %s cao nhat mon toan: %d",sv[luu].Name_sv,sv[luu].diem);

}