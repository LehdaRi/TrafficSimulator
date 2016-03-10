#ifndef ARC_HPP
#define ARC_HPP


#include "Node.hpp"
#include "Address.hpp"

#include <vector>


class Arc {
public:
    Arc(Node& startNode, Node& endNode,
        unsigned nForwardLanes = 1, unsigned nBackLanes = 1);

private:
    Node& startNode_;
    Node& endNode_;

    unsigned nForwardLanes_;
    unsigned nBackLanes_;

    float length_;
    std::vector<Address> addresses_;
};


#endif // ARC_HPP
