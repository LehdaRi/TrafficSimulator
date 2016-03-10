#include "City.hpp"


City::City(unsigned nNodes, std::default_random_engine& r) {
    for (auto i=0u; i<nNodes; ++i) {
        nodes_.emplace_back(Node::TYPE_INTERSECTION, Vector3f{ RNDF(r, 0.0f, 500.0f),
                                                       RNDF(r, 0.0f, 500.0f),
                                                       0.0f });
    }
}
