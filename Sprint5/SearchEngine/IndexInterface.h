#ifndef INDEXINTERFACE_H
#define INDEXINTERFACE_H

#include "Word.h"

class IndexInterface {
    public:
        virtual void addWord(Word)=0;
        virtual Word& find(std::string)=0;
        virtual bool contains(std::string)=0;
        virtual void printWords()=0;
        virtual ~IndexInterface() = default;
};

#endif // INDEXINTERFACE_H
