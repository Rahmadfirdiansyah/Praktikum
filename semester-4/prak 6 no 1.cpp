#include <stdio.h>
#include <stdlib.h>

struct link{
    int data;
    struct link *next;
};

struct infoku{
    struct link *awal=0;
    struct link *akhir=0;
}info;

link *hapus_data(infoku *info){
link *selanjutnya=0;
    if(info->awal!=0){
        selanjutnya=info->awal->next;
        free(info->awal);
        info->awal=selanjutnya;
    }

    if(selanjutnya!=0){
        info->akhir=0;
    }
    return selanjutnya;
}

link *tambah_data(infoku *info){
link *penunjuk=0;
    penunjuk=(link*)malloc(sizeof(link));
    penunjuk->next=0;
    if(info->awal==0){
        info->awal=penunjuk;
    }else info->akhir->next=penunjuk;
    info->akhir=penunjuk;
    return penunjuk;
}

int main(){
int i=0;
int n=10;
struct link *penunjuk;
    info.awal=0;
    info.akhir=0;
    printf("Masukkan jumlah data!\n");
    scanf("%d", &n);
    
    while(i<n){
        penunjuk=tambah_data(&info);
        penunjuk->data=i*2;
        i++;
    }
    
    printf("\nAntrian : ");
    penunjuk=info.awal;
    while(penunjuk!=0){
        printf("%d  ", penunjuk->data);
        penunjuk=penunjuk->next;
    }
    hapus_data(&info);
    
    printf("\n\nSetelah data pertama dalam antrian dihapus?\n");
    printf("Antrian : ");
    penunjuk=info.awal;
    while(penunjuk!=0){
        printf("%d  ", penunjuk->data);
        penunjuk=penunjuk->next;
    }
    printf("\n");
    
    penunjuk=info.awal;
    while(penunjuk!=0){
        penunjuk=hapus_data(&info);
    }
    return 0;
}
