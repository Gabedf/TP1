#include "my_patient.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

struct Patient {
    int id;
    char *name;
    struct tm* birthdate;
}

Patient* create_patient(int id, const char *name, struct tm *birthdate, struct tm *arrival) {
    struct Patient* patient = (struct Patient*)(malloc(sizeof(struct Patient)));
    if (patient == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }

    patient->name = strcpy(patient->name, name);
    if (patient->name == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }

    birthdate. 

}
