#include "Arc.hpp"


Arc::Arc(Node& startNode, Node& endNode,
         unsigned nForwardLanes, unsigned nBackLanes) :
    startNode_(startNode),
    endNode_(endNode),
    nForwardLanes_(nForwardLanes),
    nBackLanes_(nBackLanes)
{}
