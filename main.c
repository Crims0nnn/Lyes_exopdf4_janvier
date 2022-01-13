#include <stdio.h>
#include <stdlib.h>

int main()
{
//EXERCICE 1//

int habitant=1,i,ville=0,lieux;
printf("Entrer le nombre de lieux visiter  \n");
scanf("%d",&lieux);


for(i=0;i<lieux;i++){
    printf("Veuillez saisir le nombre d'habitant \n");
    scanf("%d",&habitant);
    if(habitant>10000){
        ville=ville+1;}
}
printf("vous avez visiter ""%d" " ville(s) \n",ville);

//EXERCICE 1 EN ALGO//
/*
VAR
Entier:habitant=1,ville,lieux;     ici la variable habitant est définie à 1 pour pouvoir rentrer directement dans la boucle

ECRIRE"Veuillez saisir le nombre de lieux visités"
LIRE lieux


POUR i de i<lieux FAIRE PAS DE 1      boucle qui continue tant que i est inferieur a lieux
ECRIRE"Veulliez entrer le nombre d'habitant"
LIRE habitant
SI habitant>10000   vérification de entier habitant
ville=ville+1        si habitant est supérieur ou égal à 10000 alors ville augmente de 1
FINTANTQUE
LIRE ville          Affiche le nombre de ville une fois que l'utilisateur à entrer 0

*/

//EXERCICE 2//

int age,poids;

printf("Quel est votre age? \n");
scanf("%d",&age);
printf("Quel poids font vos bagages? \n");
scanf("%d",&poids);

if(age==60){
    printf("Vous ne payez rien!");
    }else
        if(age<10){
            printf("Vous devez payez 5 ecus \n");
         }else
            if (age>10 || age!=60 || poids>=20){
                printf("Vous payez 40 ecus \n");
            }else
                if (age>10 || age!=60 || poids<20){
                        printf("Vous payez 30 ecus \n");
                }


//EXERCICE 2 EN ALGO//

/*

VAR:age,poids

ECRIRE"Quel est votre age?"
LIRE age
ECRIRE"Quel est votre poids?"
LIRE poids

SI age==60
ECRIRE"vous ne payer rien!"
SINON
	SI age<10
		ECRIRE"vous payez 5 écus"

		SINON
			SI age>10 ET age!=60 ET poids>=20
				ECRIRE"vous payez 40 écus"

				SINON
					SI age>10 ET age!=60 ET poids<20
						ECRIRE"vous payez 30 écus"
FINSI
	FINSI
			FINSI
					FINSI

*/
//EXERCICE 3//

int maxi=0,place=0;

printf("Combien de place? Entrer 0 pour sortir du programme \n");    //demande a l'utilisateur le nombre de place//
    scanf("%d",&place);

for(i=0;place!=0;i++){                      //boucle jusqu'a ce que place soit =0
    printf("Combien de place ? \n");
    scanf("%d",&place);
    maxi=maxi+place;                        //maxi contient le nombre de place actuelle dans la salle
        if (maxi>250)                       //Vérifie si il reste de la place
            printf("impossible d'entrer \n");
            else
                if(maxi==250)               //Vérifie si il reste de la place
                    printf("La salle est plein \n");
}

// EXERCICE 3 EN ALGO//

/*

VAR
ENTIER maxi,place;

POUR i de maxi<=250 FAIRE PAS DE 1
    ECRIRE Combien de place?
    LIRE place
    maxi=maxi+place
        SI maxi>250
            ECRIRE impossible d'entrer
            SINON
                SI maxi=250
                    ECRIRE La salle est plein

        FINSI
                FINSI
FINPOUR

*/

//EXERCICE 4//


for(i=0;i<=8;i++){                  //boucle qui permettra d'afficher un nombre prédéfinie de ligne
    switch(i){
        case 1 : printf("X \n");break;      //vérifie la valeur de i
        case 2 : printf("XX \n");break;
        case 3 : printf("XOX \n");break;
        case 4 : printf("XOOX \n");break;
        case 5 : printf("XOOOX \n");break;
        case 6 : printf("XOOOOX \n");break;
        case 7 : printf("XOOOOOX \n");break;
        case 8 : printf("XOOOOOOX \n");break;
        }
}

for(i=0;i<=10;i++){                                  //boucle qui permettra d'afficher un nombre prédéfinie de ligne
    switch(i){
        case 1 : printf("0000000000 \n");break;      //vérifie la valeur de i
        case 2 : printf(" 111111111 \n");break;
        case 3 : printf("  22222222 \n");break;
        case 4 : printf("   3333333 \n");break;
        case 5 : printf("    444444 \n");break;
        case 6 : printf("     55555 \n");break;
        case 7 : printf("      6666 \n");break;
        case 8 : printf("       777 \n");break;
        case 9 : printf("        88 \n");break;
        case 10 : printf("         9 \n");break;
        }
}

//EXERCICE 4 EN ALGO//
/*
VAR
ENTIER i

POUR i de i<=8 FAIRE PAS DE 1

	CAS i PARMI:
		CAS 1 ECRIRE "X"
		CAS 2 ECRIRE "XX"
		CAS 3 ECRIRE "XOX"
		CAS 4 ECRIRE "XOOX"
		CAS 5 ECRIRE "XOOOX"
		CAS 6 ECRIRE "XOOOOX"
		CAS 7 ECRIRE "XOOOOOX"
		CAS 8 ECRIRE "XOOOOOOX"
	FINCASPARMI
FINPOUR


POUR i de i<=10 FAIRE PAS DE 1

	CAS i PARMI:
		CAS 1 ECRIRE "0000000000"
		CAS 2 ECRIRE "111111111"
		CAS 3 ECRIRE "22222222"
		CAS 4 ECRIRE "3333333"
		CAS 5 ECRIRE "444444"
		CAS 6 ECRIRE "55555"
		CAS 7 ECRIRE "6666"
		CAS 8 ECRIRE "777"
		CAS 9 ECRIRE "88"
		CAS 10 ECRIRE "9"
	FINCASPARMI
FINPOUR

*/

//EXERCICE 5//


int n_i,n_j,L,l,P;
char c_1,c_2;

printf("Entrer la longueur \n");  //demande a l'utilisateur la longueur
scanf("%d",&L);
printf("Entrer la largeur \n");   //demande a l'utilisateur la largeur
scanf("%d",&l);
printf("Le premier caractere \n"); //demande a l'utilisateur le caractere pour les bordures du carré
scanf(" %c",&c_1);
printf("Le deuxieme caractere \n"); //demande a l'utilisateur le caractere pour remplir le carré
scanf(" %c",&c_2);

P=L*l;                              // Longueur* largeur

for(n_i=0;n_i<P;n_i++){     //boucle qui vérifie que n_i est inférieur à P(P qui correspond a la multiplication)
    for(n_j=0;n_j<P;n_j++){ //boucle qui vérifie que n_j est inférieur à P(P qui correspond a la multiplication)
        if ( n_j==0 || n_i==0 || n_j==P-1 || n_i==P-1){ //Si l'un des conditions suivantes et remplit alors affiche la bordure
            printf(" %c",c_1);
            }else{
                printf(" %c",c_2);} //Sinon remplie le carré
    }
printf("\n");}



//EXERCICE 5 EN ALGO//

/*
VAR
ENTIER n_i,n_j,L,l,P;
CHAR c_1,c_2;

ECRIRE"Entrer la longueur"
LIRE L
ECRIRE"Entrer la largeur"
LIRE l
ECRIRE"Veuillez choisir un caractère pour les bordures"
LIRE c_1
ECRIRE"Veuillez choisir un caractère pour remplir le carré"
LIRE c_2

P=L*l

POUR n_i de n_i<P FAIRE PAS DE 1
    POUR n_j de n_j<P FAIRE PAS DE 1
        SI n_j==0 OU n_i==0 OU n_j==P-1 OU n_i==P-1
            ECRIRE(c_1)
            SINON
                ECRIRE(c_2)
ECRIRE(\n)
        FINSI
FINPOUR

*/

//EXERCICE 6//



int malade=1,jour=1,population;             //ici jour et malade commence à 1 car l'énnoncer nous l'informer


printf("Entrer le nombre d'habitant \n"); //demande le nombre d'habitant
scanf("%d",&population);

for(i=1;malade<=population;i++){        //vérifie que le nombre de malade et inférieur ou égale a la population
    malade=malade+malade*2;             //propagation de la maladie comme un malade contamine 2 personne
    jour=jour+1;                        //nombre de jour augmentant tant que la boucle n'est pas fini
}

printf("nombre de jours:" "%d \n",jour);

//EXERCICE 6 EN ALGO//

/*
VAR
ENTIER malade=1,jour=1,population;

ECRIRE"Entrer le nombre d'habitant"
LIRE population

POUR i de malade<=population FAIRE PAS DE 1
    malade=malade+malade*2
    jour=jour+1
FINPOUR
ECRIRE"nombre de jours"+jour
*/

//EXERCICE 7//


int pierre,m_i=0,nbr=0;

printf("Indiquer le nombre de pierre que vous disposez \n"); //demande le nombre de pierre a l'utilisateur
scanf("%d",&pierre);

while(nbr+(m_i*m_i)<pierre){  //Tant que le nombre de pierre restant n'est pas supérieur au nombre de pierre max
      nbr=nbr+(m_i*m_i);      //Le nombre de pierre pour faire un étage
      m_i++;
}
printf("hauteur est de %d et il reste %d pierre",i-1,nbr); //résultat


//EXERCICE 7 EN ALGO//

/*
VAR
ENTIER pierre,nbr=0,i=0;

ECRIRE("Combien de pierre avez vous ?")
LIRE pierre

TANTQUE(nbr + (i*i)<pierre)
FAIRE
    nbr=nbr+(i*i);
    i+1;
FINTANTQUE
ECRIRE("La hauteur est de "+ i-1 +"et il reste" + nbr +"pierre")

*/













    return 0;
}
