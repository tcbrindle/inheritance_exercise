
#include "example.hpp"

void show_picture(Picture const& p)
{
    p.display();
}

int main()
{
    Picture p{"cute_cat_pic.jpg"};
    show_picture(p);
}