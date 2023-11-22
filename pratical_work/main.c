#include <stdio.h>
#include "solar_system.h"
#include "input_reader.h"


int main() {
    int number_of_solar_systems;
    scanf("%d", &number_of_solar_systems);
   
    solar_system_t* solar_systems = read_solar_systems(number_of_solar_systems);

    sort(solar_systems, number_of_solar_systems);

    for (int i = 0; i < number_of_solar_systems; ++i) {
        printf("%s\n", solar_systems[i].name); 
    }

    delete_solar_systems(solar_systems, number_of_solar_systems);

    return 0;
}