#include "my_patient.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    int id;
    char *name;
    struct tm* birthdate;
} Patient;

Patient* create_patient(int id, const char *name, struct tm *birthdate) {
    Patient *newPatient = (Patient*)(malloc(sizeof(Patient)));
    if (newPatient == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }

    newPatient->name = (char*)(malloc(strlen(name) + 1));
    if (newPatient->name == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }
    
    newPatient->birthdate = (struct tm*)(malloc(sizeof(struct tm)));
    if (newPatient->birthdate == NULL)  {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }   

    strcpy(newPatient->name, name);
    newPatient->id = id;
    newPatient->birthdate->tm_mday = birthdate->tm_mday;
    newPatient->birthdate->tm_mon = birthdate->tm_mon;
    newPatient->birthdate->tm_year = birthdate->tm_year;

    return newPatient;
}

void destroy_patient(Patient *patient) {
    free(patient);
}

int get_patient_id(Patient* patient) {
    return patient->id;
}

const char* get_patient_name(Patient* patient) {
    return patient->name;
}

struct tm* get_patient_birthdate(Patient *patient) {
    return patient->birthdate;
}