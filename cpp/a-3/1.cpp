#include <iostream>

std::string text(std::string a, std::string b){
    // stringとstringの連結
    return a + b;
}

std::string text(std::string a, char b){
    // stringとcharの連結
    return a + b;
}

std::string text_2(std::string a, std::string b){
    // stringとstringをinsertで連結
    return a.insert(a.length(), b);
}

std::string text_2(char a, std::string b){
    // charとstringをinsertで連結
    return std::string(&a).insert(sizeof(a), b);
}

std::string text_3(std::string a, int b){
    // stringとintを連結
    return a + std::to_string(b);
}


int main(int argc, const char * argv[]) {
    
    char c_hello[] = "World";
    char c_World[] = "World";
    
    std::cout << "text(string, string) = \t\t\t" << text("Hello", "World") << "\n";
    std::cout << "text(string, char) = \t\t\t" << text("Hello", c_World) << "\n";
    std::cout << "text_2(string, string) = \t\t" << text_2("Hello", "World") << "\n";
    std::cout << "text_2(char, string) = \t\t\t" << text_2(c_hello, "World") << "\n";
    std::cout << "text_3(string, int) = \t\t\t" << text_3("Number", 5) << "\n";
    
    
    return 0;
}