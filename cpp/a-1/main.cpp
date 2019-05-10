#include <iostream>


//構造体定義
struct POSITION {
    int x;
    int y;
};

//構造体定義
struct POSITION_X {
    int o_w;
    int o_h;
    int s_w;
    int s_h;
};


// 構造体を返す関数定義
POSITION center(int Obj_w, int Obj_h, int box_w, int box_h){
    int x = (box_w / 2) - (Obj_w / 2);
    int y = (box_h / 2) - (Obj_h / 2);
    
    // 構造体のインスタンスを作成
    POSITION r;
    r.x = x;
    r.y = y;
    
    
    // 戻り値に構造体を返す
    return r;
}


// centerのオーバーロード関数
POSITION center(POSITION_X &s){
    POSITION r;
    r.x = 0;
    r.y = 0;
    
    r.x = (((s.o_w) / 2) - ((s.s_w) / 2));
    r.y = (((s.o_h) / 2) - ((s.s_h) / 2));
    
    
    return r;
}


int main(int argc, const char * argv[]) {
    
    
    POSITION po = center(200, 200, 500, 500);
    
    POSITION_X ps;
    ps.o_w = 500;
    ps.o_h = 500;
    ps.s_w = 200;
    ps.s_h = 200;
    
    POSITION pp = center(ps);
    
    // 構造体の内容を表示
    std::cout << "X = " << po.x << "\r\nY = " << po.y << "\r\n";
    std::cout << "x = " << pp.x << "\r\nY = " << pp.y << "\r\n";
    
    
    std::cout << " \r\n";
    
    return 0;
}