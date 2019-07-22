
#include "example.hpp"

void show_picture(Picture const& p)
{
    p.display();
}

void show_in_portrait(PortraitPicture const& pp)
{
    pp.display_in_portrait();
}

int main()
{
    const PortraitPicture pp{"cute_cat_pic.jpg"};
    show_picture(pp);
    show_in_portrait(pp);
}