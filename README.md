
# Inheritance practise exercise #

The file `example.hpp` contains a `Picture` *base class*.

Your task is to write a derived class `PortraitPicture` which extends `Picture`,
adding a `display_in_portrait()` member function.

You will need to:

  * Inherit from the `Picture` base class
  * Call the `Picture` base class constructor from the `PortraitPicture`
    constructor
  * Add a `display_in_portrait() const` member function to `PortraitPicture`,
    which prints "displaying `<filename>` in portrait"  where `<filename>` is the file
    name passed to the constructor.
  * In `main.cpp`, ensure that your new class is working properly.