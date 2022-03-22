LIST* DestroyList(LIST* plist){

NODE* node=(NODE*)malloc(sizeof(NODE));


	NODE* deletePtr;

	    while (plist->count> 0)
	       {
	        deletePtr    =plist->head;
	        plist->head  = plist->head->link;
            plist->count--;
	        free (deletePtr);
	       }
	    free (plist);

	return NULL;

}

