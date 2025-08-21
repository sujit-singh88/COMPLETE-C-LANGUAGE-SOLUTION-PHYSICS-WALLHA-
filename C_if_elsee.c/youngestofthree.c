#include <stdio.h>

int main() {
    int ram, shyam, sujit;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Sujit: ");
    scanf("%d", &sujit);

    if(ram < shyam && ram < sujit) {
        printf("Youngest is Ram (%d years old)\n", ram);
    }
    else if(shyam < ram && shyam < sujit) {
        printf("Youngest is Shyam (%d years old)\n", shyam);
    }
    else if(sujit < ram && sujit < shyam) {
        printf("Youngest is Sujit (%d years old)\n", sujit);
    }
    else {
        printf("Two or more persons have the same youngest age.\n");
    }

    return 0;
}
