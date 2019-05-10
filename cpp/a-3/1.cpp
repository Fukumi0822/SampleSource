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
    return a.insert(a.length(), b);
}

std::string text_2(char a, std::string b){
    return std::string(&a).insert(sizeof(a), b);
}



int main(int argc, const char * argv[]) {
    
    char c_hello[] = "World";
    char c_World[] = "World";
    
    std::cout << "text(string, string) = \t\t\t" << text("Hello", "World") << "\n";
    std::cout << "text(string, char) = \t\t\t" << text("Hello", c_World) << "\n";
    std::cout << "text_2(string, string) = \t\t" << text_2("Hello", "World") << "\n";
    std::cout << "text_2(char, string) = \t\t\t" << text_2(c_hello, "World") << "\n";
    
    
    return 0;
}