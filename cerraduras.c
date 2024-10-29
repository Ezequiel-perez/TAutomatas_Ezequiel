#include <stdio.h>

void combinacionesNumeros(int conjunto[], int n) {
    printf("A*={Ɛ, 1, ");
    for (int i = 0; i < n; i++) {
        for (int j = 2; j < n; j++) {
            for (int k = 2; k < n; k++) {
                printf("%d %d %d,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n");
}

void combinacionesAB(char conjunto[], int n) {
    printf("A*={Ɛ, a, b, ");
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                printf("%c %c %c,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n");
}

void combinaciones1a2b(char* conjunto[], int n) {
    printf("A*={Ɛ, 1a, 2b , ");
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                printf("%s %s %s,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n");
}
void CombinacionesNumeros(int conjunto[], int n) {
    printf("A+={1, ");
    for (int i = 0; i < n; i++) {
        for (int j = 2; j < n; j++) {
            for (int k = 2; k < n; k++) {
                printf("%d %d %d,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n");
}

void CombinacionesAB(char conjunto[], int n) {
    printf("A+={a, b, ");
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                printf("%c %c %c,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n");
}

void Combinaciones1a2b(char* conjunto[], int n) {
    printf("A+={1a, 2b , ");
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                printf("%s %s %s,", conjunto[i], conjunto[j], conjunto[k]);
            }
        }
    }
    printf("}\n\n");
}

int main() {
	printf("cerradura de kleene\n \n");
    int conjuntoNumeros[] = {1, 2, 3};
    int nNumeros = 3;
    char conjuntoAB[] = {'a', 'b'};
    int nAB = 2;
    char* conjunto1a2b[] = {"1a", "2b"};
    int n1a2b = 2;
    
    int conjuntoNumeros2[] = {1, 2, 3};
    int nNumeros2 = 3;
    char conjuntoAB2[] = {'a', 'b'};
    int nAB2= 2;
    char* conjunto1a2b2[] = {"1a", "2b"};
    int n1a2b2 = 2;

    combinacionesNumeros(conjuntoNumeros, nNumeros);

    combinacionesAB(conjuntoAB, nAB);

	combinaciones1a2b(conjunto1a2b, n1a2b);
	
	printf("\ncerradura positiva\n\n");

    CombinacionesNumeros(conjuntoNumeros2, nNumeros2);

    CombinacionesAB(conjuntoAB2, nAB2);

	Combinaciones1a2b(conjunto1a2b2, n1a2b2);
    return 0;
}
	 
