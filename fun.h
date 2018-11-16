#ifndef FUN_H
#define FUN_H

class Square //Имя класса
{
private:
    float width;
public:
    Square();
    void set_w(float);
    Square(float newWidth);
    float get_w();
    float area();

    float perimeter();
};

#endif // FUN_H
