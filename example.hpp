
#ifndef INHERITANCE_EXAMPLE_HPP_INCLUDED
#define INHERITANCE_EXAMPLE_HPP_INCLUDED

#include <string>

class Picture {
public:
    explicit Picture(std::string filename);

    void display() const;

protected:
    const std::string& get_filename() const;

private:
    std::string filename_;
};

class PortraitPicture : public Picture {
public:
    explicit PortraitPicture(std::string filename);

    void display_in_portrait() const;
};


#endif
