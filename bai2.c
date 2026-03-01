/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    printf("Nhap username: ");
    scanf("%s", username);

    printf("Nhap password: ");
    scanf("%s", password);

    // So sánh username và password
    if (strcmp(username, "admin") == 0 && strcmp(password, "123456") == 0) {
        printf("Dang nhap thanh cong!");
    } else {
        printf("Dang nhap khong thanh cong!");
    }

    return 0;
}
