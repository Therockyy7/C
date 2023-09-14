char* octal_to_binary(char c) {
    switch (c) {
        case '0': return "000";
        case '1': return "001";
        case '2': return "010";
        case '3': return "011";
        case '4': return "100";
        case '5': return "101";
        case '6': return "110";
        case '7': return "111";
        default: return NULL;
    }
}

// Hàm chuyển đổi một chuỗi số bát phân thành một chuỗi số nhị phân
char* octal_string_to_binary_string(char* octal) {
    // Tạo một chuỗi kết quả rỗng
    char* binary = (char*)malloc(sizeof(char) * (strlen(octal) * 3 + 1));
    binary[0] = '\0';
    // Duyệt qua từng ký tự của chuỗi bát phân
    for (int i = 0; i < strlen(octal); i++) {
        // Chuyển đổi ký tự bát phân thành chuỗi nhị phân
        char* bin = octal_to_binary(octal[i]);
        // Nếu ký tự không hợp lệ, trả về NULL
        if (bin == NULL) {
            free(binary);
            return NULL;
        }
        // Nối chuỗi nhị phân vào chuỗi kết quả
        strcat(binary, bin);
    }
    // Trả về chuỗi kết quả
    return binary;
}

// Hàm chính để kiểm tra hàm chuyển đổi
int main() {
    // Nhập một chuỗi số bát phân từ bàn phím
    char octal[100];
    printf("Nhập một chuỗi số bát phân: ");
    scanf("%s", octal);
    // Chuyển đổi chuỗi số bát phân thành chuỗi số nhị phân
    char* binary = octal_string_to_binary_string(octal);
    // Nếu chuỗi nhị phân không rỗng, in ra màn hình
    if (binary != NULL) {
        printf("Chuỗi số nhị phân tương ứng là: %s\n", binary);
        free(binary);
    } else {
        printf("Chuỗi số bát phân không hợp lệ.\n");
    }
    return 0;
}