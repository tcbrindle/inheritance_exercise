
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
