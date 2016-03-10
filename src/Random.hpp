#ifndef RANDOM_HPP
#define RANDOM_HPP


#include <random>


#define RNDF(R, MIN, MAX) MIN + (MAX-MIN)*((R() % 100000) * 0.00001f)


typedef std::default_random_engine Random;


#endif // RANDOM_HPP
