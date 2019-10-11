#pragma once

#include <iostream>
#include <windows.h>

namespace color {
    static short dark_blue    = 1;
    static short dark_green   = 2;  
    static short dark_cyan    = 3;  
    static short dark_red     = 4;
    static short dark_purple  = 5;    
    static short dark_yellow  = 6; 
    static short reset        = 7;
    static short gray         = 8; 
    static short blue         = 9;           
    static short green        = 10;         
    static short cyan         = 11;
    static short red          = 12;
    static short pink         = 13;
    static short yellow       = 14; 
    static short white        = 15;       

    void setColor(short color) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }

    void resetColor() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), reset);
    }

    template <typename _Tp>
    void coloredLog(short color, _Tp msg) {
        setColor(color);
        std::cout << msg;
        resetColor();
    }
}