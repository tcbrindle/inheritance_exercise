
#include "example.hpp"

#include <iostream>

Picture::Picture(std::string filename)
    : filename_(filename)
{
}

void Picture::display() const
{
    std::cout << "Displaying " << filename_ << '\n';
}

const std::string& Picture::get_filename() const
{
    return filename_;
}

PortraitPicture::PortraitPicture(std::string filename)
    : Picture(filename)
{}


void PortraitPicture::display_in_portrait() const
{
    std::cout << "Displaying " << get_filename() << "in portrait\n";
}