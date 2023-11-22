#include "solar_system.h"


bool_t greater_than(solar_system_t* first, solar_system_t* second) {
    if(first->radius_of_the_sun > second->radius_of_the_sun) return true;
    if(first->radius_of_the_sun < second->radius_of_the_sun) return false;

    if(first->number_of_planets > second->number_of_planets) return true;
    if(first->number_of_planets < second->number_of_planets) return false;
    
    if(first->biggest_planet_radius > second->biggest_planet_radius) return true;
    if(first->biggest_planet_radius < second->biggest_planet_radius) return false;
    
    if(first->number_of_moons > second->number_of_moons) return true;
    if(first->number_of_moons < second->number_of_moons) return false;
    
    if(first->biggest_moon_radius > second->biggest_moon_radius) return true;
    if(first->biggest_moon_radius < second->biggest_moon_radius) return false;
    
    if(first->time_of_descovery < second->time_of_descovery) return true;
    if(first->time_of_descovery > second->time_of_descovery) return false;
    
    return false;
}

void swap(solar_system_t* first, solar_system_t* second) {
    solar_system_t aux = *second;
    *second = *first;
    *first = aux;
}

int partition(solar_system_t* vector, int left, int pivot) {
    int i = left - 1;
    int j = left;

    for (j; j < pivot; j++) {
        if(greater_than(&vector[j], &vector[pivot])) {
            i++;
            swap(&vector[i], &vector[j]); 
        } 
    }
    
    i++;
    swap(&vector[i], &vector[pivot]);
    
    return i;
}

void quick_sort(solar_system_t* vector, int left, int right) {
    if(left < right) {
        int pivot = partition(vector, left, right);
        quick_sort(vector, left, pivot - 1);
        quick_sort(vector, pivot + 1, right);
    }
}

void sort(solar_system_t* vector, int size) {
    quick_sort(vector, 0, size - 1);
}


void delete_planet(planet_t* planet) {
    free(planet->moons);
}

void delete_solar_system(solar_system_t* solar_system) {
    for (int i = 0; i < solar_system->number_of_planets; ++i) {
        delete_planet(&solar_system->planets[i]);
    }

    free(solar_system->planets);
}

void delete_solar_systems(solar_system_t* solar_systems, int number_of_solar_systems) {
    for (int i = 0; i < number_of_solar_systems; ++i) {
        delete_solar_system(&solar_systems[i]);
    }
}

