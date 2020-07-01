#ifndef FIND_H_INCLUDED
#define FIND_H_INCLUDED

#include <vector>

Company* find(std::vector<Company*> companies, int searchId) {
    	for (Company* company : companies) {
		if (company->getId() == searchId) {
            		return company;
		}
	}

    	return nullptr;
}

#endif // FIND_H_INCLUDED
