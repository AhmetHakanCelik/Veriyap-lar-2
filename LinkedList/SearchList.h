int SearchList(LIST* plist){

   long long int x;
   int deger;
   deger=0;
   NODE* temp;
   temp=plist->head->link;

    printf("Aramak istediginiz ogrencinin numarasini giriniz.");
    scanf("%lld",&x);

    if(temp==NULL){
        printf("Liste bos");
    }

    while(temp!=NULL){
            deger++;
        if(temp->OgrenciNo==x){
            printf("%d",deger);
        }
        temp=temp->link;
    }


      return 0;
}
