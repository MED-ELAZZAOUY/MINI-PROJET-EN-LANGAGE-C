#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



                                                                    // EL AZZAOUY MOHAMED
                                            // Mini-Projet en Langage C « Gestion de location de voitures »


typedef struct date{
	int jour;
	int mois;
	int annee;
}date;

typedef struct Voiture{
	int idVoiture;
	char marque[15];
	char nomVoiter[15];
	char couleur[7];
	int nbplaces;
	int prixJour;
	int Enlocation;
}voiture;

typedef struct contratLocation{
	int numContrat;
	int idVoiture;
	int idClient;
	date debut;
	date fin;
	int cout;
}contratLocation;

typedef struct client{
	int idClient;
	char nom[20];
	char prenom[20];
	int cin;
	char adresse[15];
	int telephone;
}client;


//la presontation des menus   :

int MenuPrincipal(){
    int choix;

	printf("\n\n\n\n \t\t\t\t\t\t\t\t\t Menu Principal");
	printf("\n\t\t\t\t\t\t\t\t\t ************** \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");

    printf("\n \t\t\t\t\t\t\t\xba    Location..............................1   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Gestion voitures......................2   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Gestion clients.......................3   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Quitter...............................4   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n    \t\t\t\t\t\t\t               Votre choix  :  ");


                            scanf("%d",&choix);
    return choix;
}

int Menulocation(){
    int choix;

	printf("\n\n\n\n \t\t\t\t\t\t\t\t\t Loction d une voiture     ");
	printf("\n\t\t\t\t\t\t\t\t\t ********************* \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Visualiser contrat....................1   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Louer voiture.........................2   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Retourner voiture.....................3   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Modifier  contrat.....................4   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xba    Rrtour................................5   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n    \t\t\t\t\t\t\t               Votre choix  :  ");

  scanf("%d",&choix);
  return choix;
}

int MenuGV(){
    int choix;

	printf("\n\n\n\n \t\t\t\t\t\t\t\t\t Gestion des voitures   ");
	printf("\n\t\t\t\t\t\t\t\t\t ******************** \n\n");


    printf("\n  \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n  \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Liste des voitures....................1   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Ajouter voiture.......................2   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Modifier voiture......................3   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Supprimer voiture.....................4   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Rrtour................................5   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n    \t\t\t\t\t\t\t               Votre choix  :  ");


  scanf("%d",&choix);

    return choix;
}

int MenuGC(){
    int choix;

	printf("\n\n\n\n \t\t\t\t\t\t\t\t\t Gestion des clients   ");
	printf("\n\t\t\t\t\t\t\t\t\t ******************* \n\n");

    printf("\n  \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n  \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Listes des clients....................1   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Ajouter client........................2   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Modifier client.......................3   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Supprimer client......................4   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba    Rrtour................................5   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xba                                              \xba");
    printf("\n  \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n    \t\t\t\t\t\t\t               Votre choix  :  ");


  scanf("%d",&choix);

    return choix;
}


//Gestion des voitures  :

void ListeVoiture(){
	voiture n;
	FILE* fichier = NULL;
      fichier=fopen("voiture.txt","r");
   if(fichier==NULL){printf("\n\n\t\t\tLe fichier est introuvable !");}

else{
      	  	printf(" \n\n                                                                           Liste des voitures  \n");
	printf("   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
	printf("   \xb3  ID du Voiture       \xb3 la Marque           \xb3 le Nom              \xb3 le colore           \xb3 Num place           \xb3 Prix joure          \xb3 Enlocation          \xb3\n");
	printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");


 while(fscanf(fichier,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

	int a=nombre_chifre(n.idVoiture);
	printf("   \xb3  %d",n.idVoiture);print(a);
	a=nombre_chifre(n.nbplaces);    // il calculer le nombre des chiffre de id voiture
	a=strlen(n.marque);  	            printf("%s",n.marque);          print(a);// il ajoute des espaces
	a=strlen(n.nomVoiter);	            printf("%s",n.nomVoiter);       print(a);
	a=strlen(n.couleur);	            printf("%s",n.couleur);         print(a);
	a=nombre_chifre(n.nbplaces);        printf("%d",n.nbplaces);        print(a);
	a=nombre_chifre(n.prixJour);        printf("%d DH",n.prixJour);        print(a+3);
	a=nombre_chifre(n.Enlocation);      printf("%d",n.Enlocation);      print(a);
	printf("\n");
	printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

   }
	fclose(fichier); }

}

void AjouterVoiture(){
	FILE* fichier = NULL;
 fichier=fopen("voiture.txt", "a");
  if(fichier==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}

      	  else{         voiture n;
      	 jv:
	printf("\n\n\n                                            LES Fnformation de la voiture a ajouter :\n\n");
	printf("                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("                                            *         Donne ID du Voiture : ");
	scanf("%d",&n.idVoiture);
	 if(rechercheV(n.idVoiture)!=0){system("cls");printf("\n\t\t\t\t ID est deja stocke ! tape un autre.");goto jv;}//   Des id Défieront

	 else{
	printf("                                            *                   la Marque : ");
	scanf("%s",n.marque);
	printf("                                            *                      le Nom : ");
	scanf("%s",n.nomVoiter);
	printf("                                            *                  la couleur : ");
	scanf("%s",n.couleur);
	printf("                                            *                    Num plac : ");
	scanf("%d",&n.nbplaces);
	printf("                                            *                     le Prix : ");
	scanf("%d",&n.prixJour);
	printf("                                            *                  Enlocation : 0");				//Par défaut
	n.Enlocation=0;
    printf("\n                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\n\n\n                                             la voiture est  ajoute avec succes.\n");

	fprintf(fichier,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation); }
}
fclose(fichier);

	}

void ModifierVoiture(){		    FILE *old,*newrec;  							 old=fopen("voiture.txt","r");      newrec=fopen("new.txt","w");
             int m,i=0;
            if(old==NULL){printf("\n\n\t\t\tLe fichier est Introuvable !");}
        	  else{
			   voiture n;     printf(" \n\n\n\n\t\t\t\t  Donne la ID du Voiture  a Modifier :  ");   scanf("%d",&m);
   while(fscanf(old,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

                           if(m==n.idVoiture){  i=1;

	printf(" \n\n\n                                           les nouvau Information   :\n\n");  // id reste le méme
	printf("                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("                                            *                   la Marque : ");
	scanf("%s",n.marque);
	printf("                                            *                      le Nom : ");
	scanf("%s",n.nomVoiter);
	printf("                                            *                  la couleur : ");
	scanf("%s",n.couleur);
	printf("                                            *                    num plac : ");
	scanf("%d",&n.nbplaces);
	printf("                                            *                     le prix : ");
	scanf("%d",&n.prixJour);
	printf("                                            *                  Enlocation : %d\n",n.Enlocation);	//elocation nesera pas chenge
    printf("                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\n\n\n                                             la voiture est Modifier avec succes.\n");
	fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);
																	 }
	                         else{ fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);  }
       																																 }
   fclose(old);						fclose(newrec);
   remove("voiture.txt"); 		    rename("new.txt","voiture.txt");

   if(i==0){printf("\n\t\t\t\t\t\t ID un corecte !!!");}
   printf("\n\n\t\t\t\t\t\t tape 1 -------->choise un autre ID.\n\t\t\t\t\t              0 -------->Tirmine :");		  scanf("%d",&i);
   if(i==1) ModifierVoiture();			system("cls"); }
}

void SupprimerVoiture(){

    FILE *old,*newrec;
    old=fopen("voiture.txt","r");
    newrec=fopen("new.txt","w");

    if(old==NULL){printf("\n\n\t\t\tLe fichier est introuvable !");}

      	  else{
    	voiture n;
                  int m ,i=0;
        printf("\n\n\n\t\t\t\t\t\t\t\t Donne la id du voiture a supprimer :");
    scanf("%d",&m);
   while(fscanf(old,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

            if(m==n.idVoiture) {
               				if(n.Enlocation==1){     printf("\n\t\t\t\t\t En peu pas supprimer la voiture car il est louer");
										   fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);
										            	i++;}

							else 			   {	printf(" \t\t\t\t \t La voiture est supprimer avec succes.");		              	i++;}
            				  }

            else
            {
              fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);
            }
   }
   fclose(old);							fclose(newrec);
   remove("voiture.txt");				rename("new.txt","voiture.txt");

    if(i==0){ printf("\n\t\t\t\t\t\t ID est un corecte !...");}
   printf("\n\n\t\t\t\t\t\t tape 1 -------->choise un autre ID.\n\t\t\t\t\t              0 -------->Tirmine :");
   scanf("%d",&i);
   if(i==1) SupprimerVoiture();
}
}





 // Gestion de clients :

void ListeClient(){
	client n;
	FILE* fichier = NULL;
      fichier=fopen("clients.txt","r");
   if(fichier==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}

      	  else{
      	  printf(" \n\n                                                                Liste des Client \n");
	printf("   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
	printf("   \xb3 Id du client         \xb3 le Nom              \xb3 le Prenom           \xb3 CIN                 \xb3 La Adresse          \xb3 Telephone           \xb3\n");
	printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

 while(fscanf(fichier,"%d %s %s %d %s %d ",&n.idClient,n.nom,n.prenom,&n.cin,n.adresse,&n.telephone)!=EOF){


	printf("   \xb3  %d",n.idClient);	int a=nombre_chifre(n.idClient);  // il calculer le nombre des chiffre de id client		print(a);

	printf("%s",n.nom);				a=strlen(n.nom);					print(a);// ajoute des espaces
	printf("%s",n.prenom);			a=strlen(n.prenom);					print(a);
	printf("%d",n.cin);				a=nombre_chifre(n.cin);				print(a);
	printf("%s",n.adresse);			a=strlen(n.adresse);				print(a);
	printf("+212 %d",n.telephone);		a=nombre_chifre(n.telephone);		print(a+5);



	printf("\n   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

}
}
	fclose(fichier);

}

int AjouterClient(){
	FILE* fichier = NULL;
 fichier=fopen("clients.txt", "a");

   if(fichier==NULL){printf("\n\n\t\t\tLe fichier est introuvable !");}

      	  else{					client C;
	jc:
	printf("\n\n\n                                            LES information de le client a Ajouter :\n\n");
	printf("                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("                                            *             Donne ID client : ");
	scanf("%d",&C.idClient);
	 if(rechercheC(C.idClient)!=0){system("cls");printf("\n\t\t\t\t ID est deja stocke  tape un autre:");goto jc;}//id deffiront

	 else{
	printf("                                            *                      le Nom : ");
	scanf("%s",C.nom);

	printf("                                            *                   le Prenom : ");
	scanf("%s",C.prenom );
	printf("                                            *                         CIN : ");
	scanf("%d",&C.cin);
	printf("                                            *                  La Adresse : ");
	scanf("%s",C.adresse);
	printf("                                            *                   Telephone : +212 ");
	scanf("%d",&C.telephone);
    printf("                                            * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\n\n\n                                             le client est Ajoute avec succes.\n");

	fprintf(fichier,"%d %s %s %d %s %d\n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
	}


		fclose(fichier); return C.idClient;          }
	}


void ModifierClient(){

    FILE *old,*newrec;
    old=fopen("clients.txt","r");
    newrec=fopen("new.txt","w");
       if(old==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}

      	  else{
    client C;
    int m,i=0;
    printf(" \n\n\n\n\t\t\t\t Donne la ID du Client   Amodifier :");
    scanf("%d",&m);
   while(fscanf(old,"%d %s %s %d %s %d\n",&C.idClient,C.nom,C.prenom,&C.cin,C.adresse,&C.telephone)!=EOF){
                           if(m==C.idClient){

    printf(" \n\n\n                                                     les Nouvau Information  :\n\n");
	printf("                                            ********************************************************\n");// le ID ne sera pas modifier .
	printf("                                            *                    le nom   : ");
	scanf("%s",C.nom);
	printf("                                            *                   le prenom : ");
	scanf("%s",C.prenom);
	printf("                                            *                         CIN : ");
	scanf("%d",&C.cin);
	printf("                                            *                  la Adresse : ");
	scanf("%s",C.adresse);
	printf("                                            *                   Telephone : +212 ");
	scanf("%d",&C.telephone);
    printf("                                            ********************************************************\n");
    printf("\n\n\n                                             le client est Modifier avec succes.\n");


	fprintf(newrec,"%d %s %s %d %s %d\n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
	i=1;

     }
                         else{ fprintf(newrec,"%d %s %s %d %s %d\n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);  }
 }

   fclose(old);							fclose(newrec);
   remove("clients.txt");				rename("new.txt","clients.txt");

   if(i==0){printf("\n\t\t\t\t\t\t ID un corecte !");}         //Vérification de  ID:
   printf("\n\n\t\t\t\t\t\t tape 1 -------->choise un autre ID.\n\t\t\t\t\t              0 -------->Tirmine :");
   scanf("%d",&i);
   if(i==1) ModifierClient();
}
    system("cls");

}

void SupprimerClient(){

    FILE *old,*newrec;
    old=fopen("clients.txt","r");
    newrec=fopen("new.txt","w");
       if(old==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}

      	  else{
    	client C;
    int m,i=0;
        printf("\n\t\t\t\t Donne la ID de client a Supprimer  :");
        scanf("%d",&m);
   while(fscanf(old,"%d %s %s %d %s %d\n",&C.idClient,C.nom,C.prenom,&C.cin,C.adresse,&C.telephone)!=EOF){


            if(m==C.idClient){

                printf("\n\n\n                                             le Client est Supprime avec succes.");
            i=1;}
            else{
              fprintf(newrec,"%d %s %s %d %s %d\n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
            }
   }

   fclose(old);								 fclose(newrec);
   remove("clients.txt");			     	 rename("new.txt","clients.txt");

    if(i==0){printf("\n\t\t\t\t\t\t ID est un corecte !!!");}         //controle ID:
   printf("\n\n\t\t\t\t\t\t Tape 1 -------->choise un autre ID.\n\t\t\t\t\t              0 -------->Tirmine :");
   scanf("%d",&i);
   if(i==1) {
   system("cls");SupprimerClient();}
   }

}




 //les fonction de la location :


void VisualiserContrat(){
     FILE *fichier=NULL;
    fichier=fopen("contrat.txt","r");
	if(fichier==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}
	else{

	contratLocation c;
	int nm;
	printf("Donne le NUM du contrat a vusialise :");					scanf("%d",&nm);				int comp=0;// pour controle :

while(fscanf(fichier,"%d %d %d %d %d %d %d %d %d %d ",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.annee,&c.debut.jour,&c.debut.mois,&c.fin.annee,&c.fin.jour,&c.fin.mois,&c.cout)!=EOF){

		if(c.numContrat==nm){

	printf("\n\n\t\t\t\t\t\t\t\t       \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
	printf("\t\t\t\t\t\t\t\t       \xb3   ID Contrat : %d      \n",c.numContrat);
	printf("\t\t\t\t\t\t\t\t       \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
	printf("\t\t\t\t\t\t\t\t       \xb3   ID voiture : %d  \n",c.idVoiture);
	printf("\t\t\t\t\t\t\t\t       \xb3    ID client : %d  \n",c.idClient);
	printf("\t\t\t\t\t\t\t\t       \xb3   anne debur : %d/%d/%d  \n",c.debut.annee,c.debut.mois,c.debut.jour);
	printf("\t\t\t\t\t\t\t\t       \xb3     anne fin : %d/%d/%d  \n",c.fin.annee,c.fin.mois,c.fin.jour);
	printf("\t\t\t\t\t\t\t\t       \xb3         prix : %d DH\n",c.cout);
	printf("\t\t\t\t\t\t\t\t       \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");

	comp++;
		}
		}
	if(comp==0){
			printf("\n\t\t\t\t\t\t ID est un corecte !...");
 			  printf("\n\n\t\t\t\t\t\t tape 1 -------->choise un autre ID.\n\t\t\t\t\t              0 -------->Tirmine :");
			scanf("%d",&comp);
			if(comp==1)VisualiserContrat();					}
		}	fclose(fichier);
}

void LouerVoiture(){
	contratLocation l;

	printf("\n\n\n\t\t\t\t Donne un ID a votre contrat : ");rept:
	scanf("%d",&l.numContrat); if(id_contra(l.numContrat)==1){ system("cls");  printf("\n\n\t\t\t\t ID est deja stocke  tape un autre ");goto rept;}


	char nom[20],prenom[20],marque[15],nomVoiter[15],couleur[7];
	int i,e,idv,idc,prix,place;

	//--------------------------------------------------------les info du client-------------------------------------------------------------------------------------------
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("                                                saiser votre non Le nom :");			scanf("%s",&nom);
	printf("                                                        votre le prenom :");			scanf("%s",&prenom);
	if(VNP(nom,prenom,&idc)==0){ printf("\n\t\t\t\tCelle vous pellez enregistrer votre propre information"); idc=AjouterClient();}//Vérification de le client et Récupération de id client


    //-----------------------------------------------------------les info de levoiture--------------------------------------------------------------------------------------
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	    autre:	  //Répète
	printf("                                          les information de la voiture souhaite louer  \n");
	printf("                                                               la marque :");			scanf("%s",&marque);
	printf("                                                                  le nom :");			scanf("%s",&nomVoiter);
	printf("                                                              la couleur :");			scanf("%s",&couleur);
	if(VD(marque,nomVoiter,couleur,&e,&idv,&prix,&place)==0){			         	//Vérification  de la voiture et Récupération de id  voitur choiséet Et sont emplacement
	printf("\n\t\t\t\t la voiture demandee n'existe pas .\n\t\t\t\t tape 1 -----> afficher les voiture existe. \n\t\t\t\t      0 ------> choise une aute :  ");
	scanf("%d",&i);	system("cls");    if(i==1) ListeVoiture(); printf(" \t\t\t\t\t chouise une aute \n");goto autre;}

	if(e==1) {printf("\n\n\t\t\t\t\t la voiture n'est pas disponible. \n\t\t\t\t tape 1 -----> afficher les voiture disponible. \n\t\t\t\t    0 ------> choise une aute :  \n");
	scanf("%d",&i);	system("cls");    if(i==1) disponible(); printf(" \t\t\t\t\t chouise une aute \n");goto autre;}              //Vérifier  que la voiture est disponiible


	//------------------------------------------------------------la vooiture disponible creation de la contrat --------------------------------------------------------------
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	else{			Retourner_louer_Voiture(idv,1);                           //rendre la variable enlocation on 1

	do{	printf("date de debut annee :");	scanf("%d",&l.debut.annee);     }while(l.debut.annee<2020);				 // remplire la date avec des Vérification
	do{	printf("             mois :");		scanf("%d",&l.debut.mois);		}while(l.debut.mois>12 || l.debut.mois<1);
	do{	printf("             jour :");		scanf("%d",&l.debut.jour);		}while(l.debut.jour>31 || l.debut.jour<1);

	do{	printf("date de fin annee :");		scanf("%d",&l.fin.annee);		}while(l.fin.annee<l.debut.annee);
	do{ printf("             mois :");		scanf("%d",&l.fin.mois);		}while(l.fin.mois>12||l.fin.mois<1);
	do{	printf("             jour :");		scanf("%d",&l.fin.jour);		}while(l.fin.jour>31,l.fin.jour<1);

	l.idVoiture=idv;																				               	//Remplier les variable du contrat
	l.idClient=idc;
	l.cout=calculer(l.fin.annee,l.fin.mois,l.fin.jour,l.debut.annee,l.debut.mois,l.debut.jour,prix);                // calculer le cout




	//-----------------------------------------Enregistre les info  dans le fichier contrat   --------------------------------------------------------------------------------
	FILE* fichier = NULL;
 	fichier=fopen("contrat.txt", "a");
  	if(fichier==NULL){printf("\n\n\t\t\t Le fichier est introuvable !");}

    else{ fprintf(fichier,"%d %d %d %d %d %d %d %d %d %d \n",l.numContrat,l.idVoiture,l.idClient,l.debut.annee,l.debut.mois,l.debut.jour,l.fin.annee,l.fin.mois,l.fin.jour,l.cout);}

 				fclose(fichier);
	// -------------------------------------------Affichage du contrat ainsi que la place de la voiture louer   ---------------------------------------------------------------
	system("cls");
	printf(" \n\n\n                                           \t\t\t\t         votre contrat : \n");
	printf(" \n");
	printf("\t\t\t\t\t\t\t\t       \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
	printf("\t\t\t\t\t\t\t\t       \xb3   ID Contrat : %d      \n",l.numContrat);
	printf("\t\t\t\t\t\t\t\t       \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
	printf("\t\t\t\t\t\t\t\t       \xb3   ID voiture : %d  \n",l.idVoiture);
	printf("\t\t\t\t\t\t\t\t       \xb3    ID client : %d  \n",l.idClient);
	printf("\t\t\t\t\t\t\t\t       \xb3   anne debur : %d/%d/%d  \n",l.debut.annee,l.debut.mois,l.debut.jour);
	printf("\t\t\t\t\t\t\t\t       \xb3     anne fin : %d/%d/%d  \n",l.fin.annee,l.fin.mois,l.fin.jour);
	printf("\t\t\t\t\t\t\t\t       \xb3         prix : %d DH\n",l.cout);
	printf("\t\t\t\t\t\t\t\t       \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n\n\n\n");

	 /////////////////////////////////////////////////////// la place du vouture ///////////////////////////////////////////////////////////////////////////////////////
	printf("                                       		     la place de votr voiture est : %d",place);



	}

}


void Retourner_louer_Voiture(int id,int i){
								/////////////////// la mémé fonction pour louer et rendu la voiture///////////////////////////////////
 FILE *old,*newrec;
    old=fopen("voiture.txt","r");
    newrec=fopen("new.txt","w");

            if(old==NULL){printf("\n\n\t\t\tLe fichier est introuvable !");}

      	  else{		    	voiture n;		    int a;

   while(fscanf(old,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

            if(id==n.idVoiture) {
							if(i==0)	{printf(" \t\t\t\t \t La Voiture est Render  !");n.Enlocation=0;a=n.idVoiture;}
							if(i==1)	{n.Enlocation=1;}

		   fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);
            }
            else
            {
              fprintf(newrec,"%d %s %s %s %d %d %d\n",n.idVoiture,n.marque,n.nomVoiter,n.couleur,n.nbplaces,n.prixJour,n.Enlocation);

            }
   }
   fclose(old);							fclose(newrec);
   remove("voiture.txt");				rename("new.txt","voiture.txt");

if(i==0) SupprimerContrat(a);////////////////////// La suppression de la contrat

}
}

void Modifiercontret(){
FILE *old,*newrec;
    old=fopen("contrat.txt","r");
    newrec=fopen("new.txt","w");
      int num;
   			 if(old==NULL){			printf("\n\n\t\t\tLe fichier est introuvable !");}
      	     else{printf("donne nume de la contrat a modifier   :");      	  scanf("%d",&num);    					contratLocation c;

   while(fscanf(old,"%d %d %d %d %d %d %d %d %d %d ",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.annee,&c.debut.mois,&c.debut.jour,&c.fin.annee,&c.fin.mois,&c.fin.jour,&c.cout)!=EOF){

            if(num==c.numContrat) {
	 int prix=c.cout/((c.fin.annee*365+c.fin.mois*30+c.fin.jour)-(c.debut.annee*365+c.debut.mois*30+c.debut.jour));	//Calculer le prix de la location de la voiture loure par le client

	do{	printf("date de fin annee :");		scanf("%d",&c.fin.annee);		}while(c.fin.annee<c.debut.annee);
	do{ printf("             mois :");		scanf("%d",&c.fin.mois);		}while(c.fin.mois>12 || c.fin.mois<1);
	do{	printf("             jour :");		scanf("%d",&c.fin.jour);		}while(c.fin.jour>31 || c.fin.jour<1);


				c.cout=calculer(c.fin.annee,c.fin.mois,c.fin.jour,c.debut.annee,c.debut.mois,c.debut.jour,prix);//Le nouveau prix

		   fprintf(newrec,"%d %d %d %d %d %d %d %d %d %d ",c.numContrat,c.idVoiture,c.idClient,c.debut.annee,c.debut.jour,c.debut.mois,c.fin.annee,c.fin.jour,c.fin.mois,c.cout);
            }

            else
            {
              fprintf(newrec,"%d %d %d %d %d %d %d %d %d %d ",c.numContrat,c.idVoiture,c.idClient,c.debut.annee,c.debut.jour,c.debut.mois,c.fin.annee,c.fin.jour,c.fin.mois,c.cout);

            }
   }
   fclose(old);							fclose(newrec);
   remove("contrat.txt");				rename("new.txt","contrat.txt");

}
}


void SupprimerContrat(int m){

    FILE *old,*newrec;
    old   =fopen("contrat.txt","r");
    newrec=fopen("new.txt","w");
    	contratLocation c;

while(fscanf(old,"%d %d %d %d %d %d %d %d %d %d ",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.annee,&c.debut.jour,&c.debut.mois,&c.fin.annee,&c.fin.jour,&c.fin.mois,&c.cout)!=EOF){


  if(m==c.idVoiture){printf("\t\t\t le contrat  est supprime avec sucse ");}

	   else{
              fprintf(newrec,"%d %d %d %d %d %d %d %d %d %d \n",c.numContrat,c.idVoiture,c.idClient,c.debut.annee,c.debut.jour,c.debut.mois,c.fin.annee,c.fin.jour,c.fin.mois,c.cout); }

}
 	fclose(old);      fclose(newrec);
   remove("contrat.txt");  rename("new.txt","contrat.txt");
}





// Ivette la répétition des IDs

int rechercheV(int id ){
		FILE* fichier = NULL;
 		fichier=fopen("voiture.txt", "r");
	int i=0;   voiture n;

	while(fscanf(fichier,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

                           if(id==n.idVoiture)i++;
   }

			fclose(fichier);
   return i;
}

int rechercheC(int id){
	 FILE* fichier = NULL;
 		fichier=fopen("clients.txt","r");
	int i=0;   client C;

	while(fscanf(fichier,"%d %s %s %d %s %d\n",&C.idClient,C.nom,C.prenom,&C.cin,C.adresse,&C.telephone)!=EOF){

                           if(id==C.idClient)i++;

   }
			fclose(fichier);

   return i ;
}

int id_contra(int l){
		 FILE *fichier=NULL;
    fichier=fopen("contrat.txt","r");
	if(fichier==NULL){printf("\n\n\t\t\t Le fichier est Introuvable !");}
	else{

	contratLocation c;


while(fscanf(fichier,"%d %d %d %d %d %d %d %d %d %d ",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.annee,&c.debut.jour,&c.debut.mois,&c.fin.annee,&c.fin.jour,&c.fin.mois,&c.cout)!=EOF){

		if(c.numContrat==l){ fclose(fichier); return 1;}

	}		fclose(fichier);return 0;
}
}

// contronle des informations de clien et voiture
int VNP(char N[20],char P[20],int *idc){
	 	FILE* fichier = NULL;
 		fichier=fopen("clients.txt","r");
		int i=0;   client C;

	while(fscanf(fichier,"%d %s %s %d %s %d\n",&C.idClient,C.nom,C.prenom,&C.cin,C.adresse,&C.telephone)!=EOF){

                           if(strcmp(N,C.nom)==0 && strcmp(P,C.prenom)==0 ){
						   i++;	*idc=C.idClient;}
   }
		fclose(fichier);
			   return i;
}

int VD(char M[15],char N[15],char C[7],int *e , int *idv , int *prix,int *place){
		FILE* fichier = NULL;
 		fichier=fopen("voiture.txt", "r");
	int i=0;   voiture n;

	while(fscanf(fichier,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){

                           if(strcmp(M,n.marque)==0 && strcmp(N,n.nomVoiter)==0 && strcmp(C,n.couleur)==0 ){
						   i++;		*e=n.Enlocation;     *idv=n.idVoiture;     *prix=n.prixJour;*place=n.nbplaces;
						   }
   }

			fclose(fichier);
   return i;
}

//les voiture disponible
void disponible(){
	voiture n;
	FILE* fichier = NULL;
      fichier=fopen("voiture.txt","r");
   if(fichier==NULL){printf("\n\n\t\t\tLe fichier est introuvable !");}

else{
      	  	printf(" \n\n                                                                           Liste des onibles  \n");
	printf("   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
	printf("   \xb3  ID du Voiture       \xb3 la Marque           \xb3 le Nom              \xb3 le colore           \xb3 Num place           \xb3 Prix joure          \xb3 Enlocation          \xb3\n");
	printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");


 while(fscanf(fichier,"%d %s %s %s %d %d %d",&n.idVoiture,n.marque,n.nomVoiter,n.couleur,&n.nbplaces,&n.prixJour,&n.Enlocation)!=EOF){
	if(n.Enlocation==0){

	int a=nombre_chifre(n.idVoiture);
	printf("   \xb3  %d",n.idVoiture);print(a);
	a=nombre_chifre(n.nbplaces);
	a=strlen(n.marque);  	            printf("%s",n.marque);          print(a);
	a=strlen(n.nomVoiter);	            printf("%s",n.nomVoiter);       print(a);
	a=strlen(n.couleur);	            printf("%s",n.couleur);         print(a);
	a=nombre_chifre(n.nbplaces);        printf("%d",n.nbplaces);        print(a);
	a=nombre_chifre(n.prixJour);        printf("%d DH",n.prixJour);        print(a+3);
	a=nombre_chifre(n.Enlocation);      printf("%d",n.Enlocation);      print(a);
	printf("\n");
	printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
}
   }
	fclose(fichier); }

}


// calcule le cout de la location
int calculer(int anneeF,int moisF,int jourF,int anneeD,int moisD,int jourD,int prix){



	return ((anneeF*365+moisF*30+jourF)-(anneeD*365+moisD*30+jourD))*prix;

}



// Des fonctions pour la bonne  présentation
 int nombre_chifre(int n){

 	int i=0;
 	do{	i++;	 n=n/10;	 			 }while(n!=0);
	 return i;
 }

 void print(int a){

 	for(a;a<22;a++){
 		if(a==20)   printf("\xb3");
 		else		printf(" ");
	 }
 }

void fordelay(int j){
 int i,k;
    for(i=0;i<j;i++)
         k=i;
}




void main(){   system("color E0");
  char pass[10],password[10]="ELOUAFDI",ppassword[10]="med";
    int i=0;
	repet:
    printf("\n\n\t\tEntre le mot de passe (code--->ELOUAFDI) :");		   scanf("%s",pass);

    if (strcmp(pass,password)==0||strcmp(pass,ppassword)==0) {
       	printf("\n\nPassword Match!\nChargement");
        for(i=0;i<=6;i++) {
            fordelay(100000000);
            printf(".");
        }          system("cls");
            }

    else
        {   printf("\n\nLe mot de passe est un correct !!\a\a\a"); goto repet;}

	int choix=MenuPrincipal(),id;
do{
		switch(choix){

		case(1):       system("cls");    system("color B0");      choix=Menulocation();
			do{

	     if(choix==1){ system("cls"); VisualiserContrat();choix=Menulocation();}
	else if(choix==2){ system("cls");   LouerVoiture();choix=Menulocation();}
	else if(choix==3){ system("cls"); printf("\n\n\n\t\t\t Donne ID de voiture a rendu : ");scanf("%d",&id); Retourner_louer_Voiture(id,0);choix=Menulocation();}
	else if(choix==4){ system("cls");  Modifiercontret();             choix=Menulocation();}
	else if(choix!=5){ system("cls"); printf("\n\n\t\t\t\t\t CLe choix et incoruct :");choix=Menulocation();}

	    }while(choix!=5);   system("cls");     system("color E0");   choix=MenuPrincipal();break;


		case(2):       system("cls");    system("color C0");       choix=MenuGV();
		   do{

	     if(choix==1){ system("cls"); ListeVoiture();choix=MenuGV();}
	else if(choix==2){ system("cls");  AjouterVoiture();choix=MenuGV();}
	else if(choix==3){ system("cls");  ModifierVoiture();choix=MenuGV();}
	else if(choix==4){ system("cls");  SupprimerVoiture();choix=MenuGV();}
	else if(choix!=5){system("cls");   printf(" \n\n\t\t\t\t\t\t\t\t\t Erreur ");choix=MenuGV();}
	}while(choix!=5);    	system("cls");     system("color E0");     choix=MenuPrincipal();break;

		case(3):       system("cls");        system("color 90");    choix=MenuGC();
			do{

	     if(choix==1){system("cls"); ListeClient();choix=MenuGC();}
	else if(choix==2){system("cls"); AjouterClient();    choix=MenuGC();}
	else if(choix==3){system("cls"); ModifierClient();   choix=MenuGC();}
	else if(choix==4){system("cls"); SupprimerClient();  choix=MenuGC();}
	else if(choix!=5){system("cls"); printf("error");    choix=Menulocation();}

	}while(choix!=5);	system("cls");    system("color E0");   choix=MenuPrincipal();break;

		default :if(choix!=4) {

	    system("cls");printf("\n\n\n\t\t\t\t\t choise un des option : "); choix=MenuPrincipal();break;}
	}
	}while(choix!=4);		system("cls");system("color 4");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t En revoir   \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}
