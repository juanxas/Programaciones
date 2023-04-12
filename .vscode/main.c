#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main() {
    int vida = 200; 
    int sit1 = 0, sit2, pos1, pos2, ataque;
    char nombre[50];
    char opcion;
    char armas;
    srand(time(NULL));
    printf("\n--- Bienvenido al JUEGO ---\n");
	printf("\nInserte el nombre del heroe o heroina: \n");
	fgets(nombre, sizeof(nombre), stdin);
	system("cls");
	printf("\nEl nombre del heroe/heroina es: %s\n", nombre);
	

    do { // 1er menú
        printf("\n--- JUEGO RPG ---\n");
        printf("a. Elegir arma\n");
        printf("b. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%c", &opcion);
        getchar();

        switch (opcion){
            case 'a':
               do{ // 2ndo menú
                  printf("\n");
                  printf("\n--- MENU DE ARMAS ---\n");
                  printf("1. Hacha\n");
                  printf("2. Espada\n");
                  printf("3. Arco\n");
                  printf("4. Regresar el menu principal\n");
                  printf("Ingrese una opcion (1-4):");
                  scanf("%c", &armas);
                  
                  getchar(); // se remueve el caracter
                  getchar();
                
                    switch (armas){
                	    case '1':
                	       system("cls");
                		   printf("Tienes el Hacha \n");
                		   printf("Dano ejercido: 50 \n");
                		   break;
                	    case '2':
                	       system("cls");
                		   printf("Tienes el Espada \n");
                		   printf("Dano ejercido: 30 \n");
                		   break;
                		case '3':
                		   system("cls");
					       printf("Tienes el Arco \n");
					       printf("Dano ejercido: 15 \n");
					       break; 
					    case '4':
					    	system("cls");
					        printf("Regresando al menu principal...\n");
                            break;
						default:
                            printf("Arma invalida. Intente nuevamente.\n");
                            break;  		   
				    }
			    }while(armas != '4');
			    
			
			     do{
					    printf("\n");
					    printf("\nPonte pilas!!\n");
					    printf("\nINICIAN LOS JUEGOS DEL HAMBRE\n");
					    printf("\n");
					    
					    switch(sit1){ 
							case'1':
								system("cls");
					            printf("Que quieres hacer?\n");
					            printf("1.Correr por tu vida\n");
					            printf("2.Enfrentarlo\n");
					            scanf("%d",&sit1);
					            
					            switch(pos1){
					            	case 1:
					            		system("cls");
					            		pos1 = rand() % 5 + 1;
					            	    printf("Al intentar correr \n");
							            printf("El demonio te alcanza y te embiste\n");
							            vida -= 30;
							            printf("Tienes %d de HP",vida);
							            printf("TEN CUIDADO MMVRG!!\n");
							            break;
							        case 2:
							        	system("cls");
							        	pos1 = rand() % 5 + 1;
							        	printf("Al enfrentarlo saliste golpeado pero victorioso\n");
							            vida -=15;
							            printf("Tienes %d de HP\n", vida);
						                break;
								}
							break;
							
							case'2':
								system("cls");
								printf("Te ecuentras con RUGAL\n");
					            printf("Que quieres hacer?\n");
					            printf("1.Teletransportarte\n");
					            printf("2.Sacar un oculto\n");
					            scanf("%d",&sit1);
					            
					            switch(pos1){
					            	case 1:
					            		pos1 = rand() % 5 + 1;
					            	    printf("Al Teletransportarte te saca la garra \n");
							            vida -= 25;
							            printf("Tienes %d de HP",vida);
							            printf("TEN CUIDADO MMVRG!!\n");
							            break;
							        case 2:
							        	pos1 = rand() % 5 + 1;
							            vida -=30;
							            printf("Tienes %d de HP\n", vida);
						                break;
								}
							break;
							
							case'3':
								system("cls");
								printf("Se presenta Goofy\n");
					            printf("Que procede?\n");
					            printf("1.Pegarle un izquierdazo\n");
					            printf("2.Llamar a Ochurus\n");
					            scanf("%d",&sit1);
					            
					            switch(pos1){
					            	case 1:
					            		pos1 = rand() % 5 + 1;
					            		system("cls");
					            	    printf("Recuperas HP de vida\n");
							            vida += 15;
							            printf("Tienes %d de HP",vida);
							            printf("Felicidades, pero sobres!!\n");
							            break;
							        case 2:
							        	pos1 = rand() % 5 + 1;
							        	printf("Sale la Mouseke herramienta misteriosa\n");
							        	printf("Por fishcado pierdes vida\n");
							            vida -=30;
							            printf("Tienes %d de HP\n", vida);
						                break;
								}
							break;
							
							case '4':
								system("cls");
					            printf("Te adentras en tu armario\n");
					            printf("Repenntinamente, sales a NARNIA \n");
					            printf("1.Te encuentras a la Mancha andante\n");
					            printf("2.Llamar a la Transparentosa\n");
					            scanf("%d",&sit1);
					            
					            switch(pos1){
						            case 1:
						            	pos1 = rand() % 5 + 1;
							            if(ataque >= 40 ){
								           printf("Logras derrotar a la Mancha andante y ganas la misión\n");
								           printf("Recuperas 20 de vida\n");
								           vida +=20;
								       }
						                break;
						            case 2:
						            	pos1 = rand() % 5 + 1;
								        printf("Te descrube la Transparentosa y sales afectado con heridas\n");
								        printf("Pierdes 20 de vida\n");
								        vida -=20;
								        printf("Te quedan %d puntos de vida\n", vida);
						                break;
					            }
					        break;
					        case '5': 
					            printf("\nTe encuentras a Frinky\n");
					            printf("\nY se te pega su demencia\n");
					            printf("\nPor lo cual te toca pelear con los chapas\n");
					            printf("\nQue quieres hacer?\n");
					            printf("1.Decirle: Quieto ahí CTM \n");
					            printf("2.Enviar un cohe bomba\n");
					            scanf("%d",&sit1);
								switch(pos1){
									case 1:
										pos1 = rand() % 5 + 1;
										printf("Al atacar al chapas \n");
										printf("Logras matarlo pero recibes muchos balazos\n");
										vida -= 80;
										printf("Tienes %d puntos de HP\n", vida);
									break;
									case 2:
										pos1 = rand() % 5 + 1;
										printf("\nAl enviar un coche bomba, matas a los chapas \n");
										printf("\nHace Kabum como los Apus \n");	
										printf("\nNo te quitan puntos de HP\n");
									break;
					            }
					        break;       
						}
						
						// 2nda situacion
					    switch(sit2){
					    	case '1':
					    		printf("Te encuentras con un Enemigo \n");
					            printf("\nQue decides hacer?\n");
					            printf("1.Atacar\n");
					            printf("2.Defenderte\n");
					            scanf("%d",&sit2);
					            switch(pos2){
					            	case 1:
					            		printf("Haz perdido el juego\n");
					            		printf("Haz perdido el juego\n");
					            		vida -= 200;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
					            	case 2:
					            		if(ataque >= 40 ){
					            			printf("\nObtienes un bonus\n");
					            			vida +=40;
					            			printf("Tienes %d puntos de HP\n", vida);
										}else{
											vida -=20;
								            printf("Si no te defiendes eres pierdes puntos de vida\n");
								            printf("Tienes %d puntos de HP\n", vida);
										}
									break;
								}
									
							break;		
						    case '2':
						    	printf("Entras a una selvas\n");
					            printf("\nQue decides hacer?\n");
					            printf("1.Explorar\n");
					            printf("2.Acampar\n");
					            scanf("%d",&sit2);
					            switch(pos2){
					            	case 1:
					            		printf("Al explorar, te pierdes\n");
					            		printf("Y te pica una arana venenosa\n");
					            		vida -= 30;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
					            	case 2:
					            		printf("Al acampar, descansas\n");
					            		printf("Consigues un desayuno gold, ganas puntos de HP\n");
					            		vida += 10;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;	
								}
							break;
							case'3':
							    printf("Te encuentras en un Camal\n");
					            printf("\nQue decides hacer?\n");
					            printf("1.Alimentar a las vacas\n");
					            printf("2.Sacrificarlas\n");
					            scanf("%d",&sit2);
					            switch(pos2){
					            	case 1:
					            		printf("\nAl entrar al Camal, alimetas a las vacas\n");
					            		printf("\nPero las vacas se enferman\n");
					            		vida -= 60;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
					            	case 2:
					            		printf("\nPor sacrificarlas\n");
					            		printf("\nY no hacerlas sufrir ganas puntos de HP\n");
					            		vida += 10;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
								}
							break;
							case '4':
								printf("Vas manejando tu Buggy\n");
					            printf("\nQue haces?\n");
					            printf("1.Acelerar a tope para transmutar al futuro\n");
					            printf("2.Ir en reversa para ir al pasado\n");
					            scanf("%d",&sit2);
					            switch(pos2){
					            	case 1:
					            		printf("\nTe encuentras a terminators\n");
					            		printf("\nY sacas tu arma para enfrentarlos\n");
					            		printf("\nPor lo que pierdes HP\n");
					            		vida -= 50;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
					            	case 2:
					            		printf("\nAl llegar al pasado\n");
					            		printf("\nLos policias te detienen\n");
					            		printf("\nTienes que enfrentarlos con tu Gun por corruptos\n");
					            		vida -= 45;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
								}
							break;	
							case '5':
								printf("Repentinamente llegas al mundo de Tinker bell\n");
					            printf("\nQue haces?\n");
					            printf("1.Cuadrarte al monje misterioso\n");
					            printf("2.Sacartela por la Tan\n");
					            scanf("%d",&sit2);
					            switch(pos2){
					            	case 1:
					            		printf("\nAl pelearte con el monje\n");
					            		printf("\nSales perjudicado pero no pierdes HP\n");
					            		vida = 0;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
					            	case 2:
					            		printf("\nYa que te la sacas\n");
					            		printf("\nY no peleas con tu arma, te restamos puntos de HP\n");
					            		vida -= 25;
										printf("Tienes %d puntos de HP\n", vida);
					            		break;
								}
			            }
			            
			            if(vida >= 1){
		                  printf ("\n%s acaba de ganar el juego. \n", nombre);
		                }
						else {
	 		               printf ("\n%s acaba de perder\n",nombre); 
	  	                }
			        }      
            break;
            case 'b':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;    
		}
	}while(opcion != 'b');
           
    return 0;
}