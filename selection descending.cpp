#include <stdio.h>
#include <conio.h>

int A[200], n, i, j, tampung, pos;
void proses(int tam);
int main(){

    printf("Masukkan jumlah data (Max 200): ");
    scanf("%i", &n);

    for(i=1; i<=n; i++){
        printf("Masukkan data ke-%i : ", i);
        scanf("%i", &A[i]);
    }

    printf("Sebelum diurutkan : \n");proses(n);
    printf("\n");
    printf("\nProses Pengurutan Angka : \n");
    for(i=1;i<=n-1;i++){
        pos = i;
        for(j=i+1;j<=n;j++){
            if(A[j] > A[pos]){
                pos = j;
            }
        }
        if(pos != i){
            tampung = A[pos];
            A[pos] = A[i];
            A[i] = tampung;
        }
        proses(n);
        printf("\n");
    }

    printf("\n\nSetelah diurutkan : \n");proses(n);

}
    
void proses (int tam){
    for(int i=1;i<=tam;i++){
        printf("%i ",A[i]);
    }
}
