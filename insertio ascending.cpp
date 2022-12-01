#include <stdio.h>
#include <conio.h>

int A[200], n, i, j, tampung;
void proses(int proc);
int main(){
    printf("Masukkan jumlah data (Max 200): ");
    scanf("%i", &n);

    for(i=1; i<=n; i++){
        printf("Masukkan data ke-%i : ", i);
        scanf("%i", &A[i]);
    }

    printf("Sebelum sorting : \n");proses(n);
    printf("\n");
    printf("\nProses Pengurutan Angka : \n");
    for(i=1; i<=n; i++){
        tampung = A[i];
        j = i-1;
        while(j>=1 && A[j]>tampung){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = tampung;
        proses(n);
        printf("\n");
    }

    printf("\nSetelah sorting : \n");proses(n);

}

void proses (int proc){
    for(int i=1;i<=proc;i++){
        printf("%i ",A[i]);
    }
}