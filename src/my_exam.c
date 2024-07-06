#include "my_exam.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    int id, patient_id, rx_id;
    struct tm* time;
} Exam;

Exam *create_exam(int id, int patient_id, int rx_id, struct tm *time) {
    Exam *exam = (Exam*)(malloc(sizeof(Exam)));
    if (exam == NULL) {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);}

    exam->time = (struct tm*)(malloc(sizeof(struct tm)));
    if (exam->time == NULL)  {
        perror("Erro ao tentar alocar memória.");
        exit(EXIT_FAILURE);}

    exam->id = id;
    exam->patient_id = patient_id;
    exam->rx_id = rx_id;
    exam->time = time;

    return exam;
}

void destroy_exam(Exam *exam) {
    free(exam);}

int get_exam_id(Exam* exam) {
    return exam->id;}

int get_exam_patient_id(Exam *exam) {
    return exam->patient_id;}

int get_exam_rx_id(Exam *exam) {
    return exam->rx_id;}

struct tm* get_exam_time(Exam *exam) {
    return exam->time;}