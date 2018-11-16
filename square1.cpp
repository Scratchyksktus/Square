#include "fun.h"


Square::Square() {
    width = 0;
}

Square::Square(float width1) {
    set_w(width1);
}

void Square::set_w(float newWidth){
    if (newWidth >= 0){
        width = newWidth;
    }
}

float Square::get_w(){
    return width;
}

float Square::area(){
    return width * width;
}

float Square::perimeter(){
    return 4 * width;
}
