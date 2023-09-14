#include<stdio.h>

void so_ng_to(int A){
    int so;
    int max;
    int last_num,i,thu_so;
    if(A>2){
        int z = 2;
        int x = A - 2;
        
        for(so = 3; so <= x; so++ ){
            if(so % 2 != 0){
                int so_le = so;
                if(A % so_le != 0){
                    if(so_le == x){                 
                        printf("%d la so nguyen to",A);
                        last_num = so;
                        for(i = 2; i < last_num; i++){
                            
                            if(last_num % i != 0){
                                continue;
                            }else{
                                last_num = last_num - 1;//gan lai so moi
                                i = 2;// gán lại i = 2 để chia lại từ đầu
                            }
                        }
                        printf("\nso nguyen to sau %d la %d",A,last_num);
                               
                }
                
                } 
                else{
                    printf("%d khong la so nguyen to",A);}
            }
        }
        
    }else{
        printf("%d khong la so nguyen to",A);
    }

}
int main(){
    int A;
    printf("\nNhap A: ");
    scanf("%d",&A);
    so_ng_to(A);
}