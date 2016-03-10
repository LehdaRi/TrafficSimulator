#ifndef NODE_HPP
#define NODE_HPP


#include "MathTypes.hpp"


class Node {
public:
    enum Type {
        TYPE_INTERSECTION,
        TYPE_ROUNDABOUT
    };

    Node(Type type, const Vector3f& pos);

private:
    Type type_;
    Vector3f pos_;
};


#endif // NODE_HPP
