#include "solar_system.h"

bool_t greater_than(solar_system_t* first, solar_system_t* second) {
    return true;
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
