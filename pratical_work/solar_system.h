#ifndef PRATICAL_WORK_PLANET_H
#define PRATICAL_WORK_PLANET_H

#include <stdlib.h>
#include <limits.h>

#define STRING_SIZE (100 + 1)

typedef struct {
    char* name;
    int radius; 
} moon_t;

typedef struct {
    char* name;
    int radius;
    int number_of_moons;
    moon_t* moons;
    int biggest_moon_radius;
} planet_t;

typedef struct {
    int time_of_descovery;
    char* name;
    int radius_of_the_sun;
    int number_of_planets; 
    planet_t* planets; 
    int biggest_planet_radius;
    int number_of_moons;
    int biggest_moon_radius;
} solar_system_t;


typedef unsigned char bool_t;

#define true (1 == 1)
#define false (!true)

void sort(solar_system_t* vector, int size);

void delete_solar_systems(solar_system_t* solar_systems, int number_of_solar_systems); 

#endif 
