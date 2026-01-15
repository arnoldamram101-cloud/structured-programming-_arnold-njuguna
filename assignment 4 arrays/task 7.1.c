
#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;


void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}


void printSamples() {
    int i;
    int index;

    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    printf("Stored samples (oldest -> newest): ");
    index = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    for (i = 0; i < count; i++) {
        printf("%d ", buffer[index]);
        index = (index + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("\nCircular Data Logger Menu\n");
        printf("1. Insert new sample\n");
        printf("2. Print stored samples\n");
        printf("3. Exit\n");
        printf("Enter your cho
