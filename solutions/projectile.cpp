#include <cmath>
#include <iostream>
#include <vector>

struct Projectile {
    double t;
    double x;
    double y;
};

int main() {

    double angle{0.0};
    std::cout << "Enter an angle (in degrees): ";
    std::cin >> angle;

    // convert to radians
    angle *= M_PI / 180.0;

    double v{0.0};
    std::cout << "Enter an initial velocity: ";
    std::cin >> v;

    double dt{0.0};
    std::cout << "Enter an output interval: ";
    std::cin >> dt;

    std::vector<Projectile> trajectory;

    // initial
    double t0{0.0};
    double x0{0.0};
    double y0{0.0};
    Projectile p{};
    p.t = t0;
    p.x = x0;
    p.y = y0;

    trajectory.push_back(p);

    double vx0 = v * std::cos(angle);
    double vy0 = v * std::sin(angle);

    const double g{-9.81};

    bool crashed{false};
    while (! crashed) {

        p.t += dt;
        p.x = x0 + vx0 * p.t;
        p.y = y0 + vx0 * p.t + 0.5 * g * std::pow(p.t, 2);

        trajectory.push_back(p);

        if (p.y < 0) {
            crashed = true;
        }
    }

    for (auto &p : trajectory) {
        std::cout << p.t << " " << p.x << " " << p.y << std::endl;
    }
}
