#include <stdio.h>
#include "my_patient.h"

int main() {

    struct tm birthdate = {0};
    birthdate.tm_year = 90; 
    birthdate.tm_mon = 5; 
    birthdate.tm_mday = 15; 

    // Criando um paciente
    Patient *patient = create_patient(1, "João Silva", &birthdate);

    // Imprimindo informações do paciente criado
    printf("Paciente criado:\n");
    printf("ID: %d\n", get_patient_id(patient));
    printf("Nome: %s\n", get_patient_name(patient));
    printf("Data de Nascimento: %s\n", asctime(get_patient_birthdate(patient)));

    return 0;
}
