#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Node.h"
#include "CreateList.h"
#include "AddNode.h"
#include "ListYazdir.h"
#include "DestroyList.h"
#include "RemoveNode.h"
#include "SearchList.h"

int main()
{
     char Ad_Soyad[20];
     long long int OgrenciNo;
     int Sinif;
     long long Telefon;

    LIST* list=createList();
    printf("Bir Ogrenci Icin Bilgileri Giriniz:\n");
    scanf("%s %lld %d %lld",Ad_Soyad,&OgrenciNo,&Sinif,&Telefon);
    AddNodeBeg(list,Ad_Soyad,OgrenciNo,Sinif,Telefon);
    printf("Bir Ogrenci Icin Bilgileri Giriniz:\n");
    scanf("%s %lld %d %lld",Ad_Soyad,&OgrenciNo,&Sinif,&Telefon);
    AddNodeBeg(list,Ad_Soyad,OgrenciNo,Sinif,Telefon);
    printf("Bir Ogrenci Icin Bilgileri Giriniz:\n");
    scanf("%s %lld %d %lld",Ad_Soyad,&OgrenciNo,&Sinif,&Telefon);
    AddNodeBeg(list,Ad_Soyad,OgrenciNo,Sinif,Telefon);
    SearchList(list);
    DestroyList(list);
    return 0;
}

