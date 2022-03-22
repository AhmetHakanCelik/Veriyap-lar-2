int ListYazdir(LIST* plist){

NODE* temp=(NODE*)malloc(sizeof(NODE));
temp=plist->head;

if((plist->count)==0){
    printf("Liste bos");
}


  while(temp!=NULL){
    printf("%lld\n%d\n%lld\n%d\n\n",temp->Ad_Soyad,temp->OgrenciNo,temp->Sinif,temp->Telefon);
    temp=temp->link;

  }


}
