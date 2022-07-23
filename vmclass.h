#include <iostream>
#include <string>
#include <list>
#ifndef VMCLASS_H
#define VMCLASS_H
class vm{
public:
    std::string name;
    std::string cdpath;
    std::string hdpath;
    int memsize;
    vm(std::string name, std::string cdpath, std::string hdpath,int memsize){
        this->name = name;
        this->cdpath = cdpath;
        this->hdpath = hdpath;
        this->memsize = memsize;
    }

};

#endif // VMCLASS_H
