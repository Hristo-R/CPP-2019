#ifndef REMOVEINVALID_H_INCLUDED
#define REMOVEINVALID_H_INCLUDED

#include <list>

void removeInvalid(std::list<Company*> &companies) {
    for (std::list<Company*>::iterator itr = companies.begin(); itr != companies.end();) {
        if ((*itr)->getId() < 0) {
            itr = companies.erase(itr);
        }
        else {
            ++itr;
        }
    }
}

#endif // REMOVEINVALID_H_INCLUDED
