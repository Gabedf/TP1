#ifndef MY_PATIENT
#define MY_PATIENT

// Cria um novo paciente, alocando memória para a estrutura, preenchendo os campos internos com os dados passados como parâmetros e retornando um ponteiro para a estrutura criada.
Patient* create_patient(int id, const char *name, struct tm *birthdate, struct tm *arrival) 

// Libera a memória alocada para a estrutura do paciente.
void destroy_patient(Patient *patient) 

// Retorna a identificação única do paciente.
int get_patient_id(Patient* patient)

// Retorna o nome do paciente.
const char get_patient_name(Patient* patient) 

// Retorna a data de nascimento do paciente.
struct tm* get_patient_birthdate(Patient patient)

#endif