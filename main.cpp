#include <iostream>
#include <Windows.h>
#include "student.hpp"

int main() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    std::cout << width << '\t' << height << std::endl;

    Student student("李华", "网络1班", "男", 1);
    std::cout << student << std::endl;

    student["math"] = 111;
    std::cout << "math: " << student["math"] << std::endl;

    student["english"] = 123;
    std::cout << "english: " << student["english"] << std::endl;
}