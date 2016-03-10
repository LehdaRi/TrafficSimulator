#ifndef CITY_HPP
#define CITY_HPP


#include "Node.hpp"
#include "Arc.hpp"
#include "Random.hpp"

#include <vector>


class City {
public:
    City(unsigned nNodes, Random& r);

private:
    std::vector<Node> nodes_;
    std::vector<Arc> arcs_;
};


#endif // CITY_HPP
