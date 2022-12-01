#include <stdio.h>
#include <conio.h>

int A[200], n, i, j, tampung;
void proses(int proc);
int main(){
    printf("Masukkan banyak data : ");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Masukkan data ke-%i : ", i+1);
        scanf("%i", &A[i]);
    }

    printf("Sebelum sorting : \n");proses(n);
    printf("\n");
    printf("\nProses Pengurutan Angka : \n");
    for(i=1; i<n; i++){
        for(j=n-1; j>=i; j--){
            if(A[j] > A[j-1]){
                tampung = A[j];
                A[j] = A[j-1];
                A[j-1] = tampung;
            }
        }
        proses(n);
        printf("\n");
    }

    printf("\n\nSetelah sorting : \n");proses(n);
}

void proses (int proc){
    for(int i=0;i<proc;i++){
        printf("%i ",A[i]);
    }
}