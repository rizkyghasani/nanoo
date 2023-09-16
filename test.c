#include <stdio.h>
#include <math.h>

int main() {
    int grades[4];
    float average;
    
    for (int i = 0; i < 4; i++) {
        printf("Masukkan nilai ke %d: ", i + 1);
        scanf("%d", &grades[i]);
        
        if (grades[i] < 50) {
            printf("ERROR: Salah satu nilai ini kurang dari 50\n");
            return 0;
        }
    }    

    average = (grades[0] + grades[1] + grades[2] + grades[3]) / 4.0;

    if (average >= 70)
        printf("Kamu lulus\n");
    else
        printf("Kamu tidak lulus\n");
    return 0;
}
