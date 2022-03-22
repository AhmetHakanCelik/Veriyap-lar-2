int RemoveNode(LIST* plist){

NODE* temp;
NODE* iter;
NODE* fore;
iter=plist->head->link;
int numara;
printf("%Bilgisini Silmek istediginiz ögrencinin numarasini giriniz");
scanf("%d",numara);


while(iter!=NULL && iter->OgrenciNo!=numara){
    iter=iter->link;
    }
    if(iter==NULL){
        printf("Ogrenci bulunamadi");
        return plist;
    }
    else if(iter==numara){
        temp=iter;
        fore=iter->link;
        iter=fore;
        fore->previous=temp->previous;
        free(temp);
        free(fore);
        return plist;
    }




}
