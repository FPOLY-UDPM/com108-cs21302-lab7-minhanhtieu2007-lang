/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<string.h>
int main() {
    char uiia[100];
    printf("hay nhap chuoi ki tu: ");
    fgets(uiia,sizeof(uiia),stdin);
    printf("chui ban vua nhap: %s",uiia);

    int p=0;
    int n=0;

    for(int i=0;uiia[i]!='\0';i++){
        if (uiia[i]=='a'||uiia[i]=='i'||uiia[i]=='u'||uiia[i]=='e'||uiia[i]=='o')
            {
            n++;
            }
            else
            {
            p++;
            }
    }
    printf("so nguyen am la: %d\n",n);
    printf("so phu am la: %d",p);
    return 0;
}