/* ******************************* c206.h *********************************** */
/*  Předmět: Algoritmy (IAL) - FIT VUT v Brně                                 */
/*  Úkol: c206 - Dvousměrně vázaný lineární seznam                            */
/*  Vytvořil: Martin Tuček, září 2005                                         */
/*  Upravil: Kamil Jeřábek, září 2020                                         */
/*           Daniel Dolejška, září 2021                                       */
/*           Daniel Dolejška, září 2022                                       */
/* ************************************************************************** */

/* TENTO SOUBOR, PROSÍME, NEUPRAVUJTE! */

#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

/** Globální proměnná - příznak ošetření chyby. */
extern int error_flag;
/** Globální proměnná - indikuje, zda byla operace řešena. */
extern int solved;

/** Prvek dvousměrně vázaného seznamu. */
typedef struct DLLElement {
	/** Užitečná data. */
	int data;
	/** Ukazatel na předcházející prvek seznamu. */
	struct DLLElement *previousElement;
	/** Ukazatel na následující prvek seznamu. */
	struct DLLElement *nextElement;
} *DLLElementPtr;

/** Dvousměrně vázaný seznam. */
typedef struct {
	/** Ukazatel na první prvek seznamu. */
	DLLElementPtr firstElement;
	/** Ukazatel na aktuální prvek seznamu. */
	DLLElementPtr activeElement;
	/** Ukazatel na posledni prvek seznamu. */
	DLLElementPtr lastElement;
} DLList;

void DLL_Init( DLList * );				//DONE

void DLL_Dispose( DLList * );			//

void DLL_InsertFirst( DLList *, int );  //DONE

void DLL_InsertLast( DLList *, int );   //DONE

void DLL_First( DLList * );             //DONE

void DLL_Last( DLList * );				//DONE

void DLL_GetFirst( DLList *, int * );	//DONE

void DLL_GetLast( DLList *, int * );	//DONE

void DLL_DeleteFirst( DLList * );		//DONE

void DLL_DeleteLast( DLList * );		//DONE

void DLL_DeleteAfter( DLList * );		//DONE

void DLL_DeleteBefore( DLList * );		//DONE

void DLL_InsertAfter( DLList *, int );	//DONE

void DLL_InsertBefore( DLList *, int );	//DONE

void DLL_GetValue( DLList *, int * );	//DONE

void DLL_SetValue( DLList *, int );		//DONE

void DLL_Next( DLList * );				//DONE

void DLL_Previous( DLList * );			//DONE

int DLL_IsActive( DLList * );			//DONE

/* Konec hlavičkového souboru c206.h */
