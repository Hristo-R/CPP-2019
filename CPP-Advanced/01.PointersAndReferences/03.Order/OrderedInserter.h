#ifndef ORDEREDINSERTER_H
#define ORDEREDINSERTER_H

#include <algorithm>

#include "Company.h"

class OrderedInserter {
    std::vector<const Company*> &companies;

public:
    OrderedInserter(std::vector<const Company*> &companies):
        companies(companies){
        }

    std::vector<const Company*> getCompanies() const {
        return this->companies;
    }

    void insert(const Company* c);
};

void OrderedInserter::insert(const Company* c) {
    companies.push_back(c);

    std::sort(companies.begin(), companies.end(), [](const Company* a, const Company* b){
        return a->getId() < b->getId();
    });
}

#endif // ORDEREDINSERTER_H
