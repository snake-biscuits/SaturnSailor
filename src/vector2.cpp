Vector2::Vector2() {
        this->x = 0;
        this->y = 0;
    }


Vector2::Vector2(double x, double y) {
        this->x = x;
        this->y = y;
    }


Vector2::Vector2 operator+(Vector2& other) {
        return Vector2(this->x + other.x, this->y + other.y);
    }


Vector2::Vector2 operator-(Vector2& other) {
        return Vector2(this->x - other.x, this->y - other.y);
    }

