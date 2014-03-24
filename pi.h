#ifndef PI_H
#define PI_H

#define ITERATIONS 1000000
#define RADIUS (RAND_MAX / 2)

inline double dist(double x0, double y0, double x1, double y1);

inline double zeroDist(double x, double y);

void iterative_pi();

#endif