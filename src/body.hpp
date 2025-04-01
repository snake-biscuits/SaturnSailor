#pragma once

#include <vector>

#include "convex_hull.hpp"
#include "vector2.hpp"


class Body { public:
    std::vector<ConvexHull>  hulls;
    Vector2  position;
    double   rotation;  // in radians
    Vector2  velocity;
    double   torque;  // in radians
    double   mass;

    Body() {
        this->hulls = {};
        this->position = Vector2(0, 0);
        this->rotation = 0;
        this->velocity = Vector2(0, 0);
        this->torque = 0;
        this->mass = 0;
    }

    ~Body() {};

    // TODO: generate mass from ConvexHull area * density
    // TODO: apply force
    // -- gravitational pull
    // TODO: detect collision
    // -- rotate & translate before passing to ConvexHull.collide()
};
