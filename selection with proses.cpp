#include <stdio.h>
#include <conio.h>
int A[10],i,j,tampung,pos,tamn;

void Proses (int tam);
main(){
printf("\nInputkan banyak data yang akan diurutkan max 10: "); 
scanf("%i",&tamn);
for(i=1; i<=tamn; i++){
 printf("\tInputkan data ke-%i : ",i); scanf("%i",&A[i]);
}
printf("Sebelum sorting : \n");Proses(tamn); 
printf("\n");
printf("\nProses Pengurutan Angka Ascending : \n");
for(i=1;i<=tamn-1;i++){
pos=i;
for(j=i+1;j<=tamn;j++){
if(A[j]<A[pos]){
pos=j;
}
}
if(pos != i){
tampung=A[pos];
A[pos]=A[i];
A[i]=tampung;
}
Proses(tamn);
printf("\n"); 
}
printf("\n \nSetelah sorting : \n"); Proses(tamn);
}
void Proses (int tam){
for( int i=1;i<=tam;i++){
printf("%i",A[i]);
}
}