#include "input_reader.h"

moon_t read_moon() {
    char* name = (char*) calloc(STRING_SIZE, sizeof(char));
    int radius;

    scanf("\t\t%s %d", name, &radius);

    return  (moon_t) { name, radius };
}

planet_t read_planet() {
    char* name = (char*) calloc(STRING_SIZE, sizeof(char));
    int radius;
    int number_of_moons;

    scanf("\t%s %d %d", name, &radius, &number_of_moons);
    
    moon_t* moons = (moon_t*) calloc(number_of_moons, sizeof(moon_t));
    
    for (int i = 0; i < number_of_moons; ++i) {
        moons[i] = read_moon();     
    }
    
    return (planet_t) { name, radius, number_of_moons, moons};
}

solar_system_t read_solar_system() {
    int time_of_discovery;
    char* name = (char*) calloc(STRING_SIZE, sizeof(char));
    int radius;
    int number_of_planets;

    scanf("%d %s %d %d", &time_of_discovery, name, &radius, &number_of_planets);
    
    planet_t* planets = (planet_t*) calloc(number_of_planets, sizeof(planet_t));

    for (int i = 0; i < number_of_planets; ++i) {
        planets[i] = read_planet();
    }
    
    return (solar_system_t) { time_of_discovery, name, radius, number_of_planets, planets};
}

solar_system_t* read_solar_systems() {
    int number_of_planets;
    scanf("%d", &number_of_planets);

    solar_system_t* solar_systems = (solar_system_t*) calloc(number_of_planets, sizeof(solar_system_t));
    
    for (int i = 0; i < number_of_planets; ++i) {
        solar_systems[i] = read_solar_system();     
    }
    
    return solar_systems;
}
