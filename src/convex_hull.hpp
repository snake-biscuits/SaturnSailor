#pragma once

#include <vector>

#include "vector2.hpp"


class ConvexHull { public:
    std::vector<Vector2>  vertices;

    ConvexHull(std::vector<Vector2> vertices) {
        this->vertices = vertices;
    }

    ~ConvexHull() {}

    // TODO: calculate area
    // TODO: generate 2D "planes"
    // TODO: test collision
};
