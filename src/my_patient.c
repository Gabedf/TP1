#include "my_patient.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Patient {
    int id;
    char *name;
    struct tm* birthdate;
};

Patient* create_patient(int id, const char *name, struct tm *birthdate) {
    struct Patient *new_patient = (struct Patient*)(malloc(sizeof(struct Patient)));
    if (new_patient == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }

    new_patient->name = (char*)(malloc)(strlen(name) + 1);
    if (new_patient->name == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }
    
    new_patient->birthdate = (struct tm*)(malloc)(sizeof(struct tm));
    if (new_patient->birthdate == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);
    }

    new_patient->name = strcpy(new_patient->name, name);
    new_patient->id = id;
    new_patient->birthdate = birthdate;

    printf("Oie :D");   
    return *new_patient;
}