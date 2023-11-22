#ifndef PRATICAL_WORK_PLANET_H
#define PRATICAL_WORK_PLANET_H

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
} planet_t;

typedef struct {
    int time_of_descovery;
    char* name;
    int radius;
    int number_of_planets; 
    planet_t* planets; 
} solar_system_t;


typedef unsigned char bool_t;

#define true (1 == 1)
#define false (!true)


#endif 
