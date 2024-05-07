//
// Created by WhitePaper on 24-5-7.
//

#ifndef YUME_STORAGE_HPP
#define YUME_STORAGE_HPP

#include <string>
#include <memory>

struct Collection {
    std::string name;

};

class Storage {
private:
    std::string save_path;

public:
    Storage();
    std::unique_ptr
};

#endif //YUME_STORAGE_HPP
