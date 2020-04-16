#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "fonction_basiques.h"

/**
 * \fn ennemi_t ennemi_arbre_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer, load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger l'arbre horizontalement et fait également les animations de deplacement
 * \param ennemi L'arbre
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position de l'arbre
 */
/* Deplacement horizontal de l'arbe de facons linéaire et l'anime */
ennemi_t ennemi_arbre_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer, load_image_t tab_load_image[NB_IMAGE]){

		///printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);
		//printf("%d\n",ennemi.speed );

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.x >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 3
				if(ennemi.speed == 6){
					ennemi.image.dst.x -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 0;
				}else{
					ennemi.speed ++;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 2){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv3.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 3){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 4){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 5){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv_idle.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 6){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 7){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 8){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv6.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 9){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 10){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 11){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv_idle.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.x < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.x <= 640){
					if(ennemi.speed == 6){
						ennemi.image.dst.x += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed = 0;
					}else{
						ennemi.speed ++;
					}
					if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 2){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv3.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 3){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 4){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 5){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv_idle.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 6){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 7){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 8){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv6.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 9){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 10){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 11){
					ennemi.image = changement_image(ennemi.image,"boss/boss_mouv_idle.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.x > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_skeleton_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un skelete horizontalement (axe x) et fait également les animations de deplacement
 * \param ennemi Un squelette
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du squelette
 */
/* Deplacement horizontal d'un squelette de facons linéaire et l'anime */
ennemi_t ennemi_skeleton_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.x >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 3
				if(ennemi.speed == 3){
					ennemi.image.dst.x -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 0;
				}else{
					ennemi.speed ++;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_left1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_left2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.x < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.x <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.x += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_right1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_right2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.x > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_skeleton_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un skelete verticalement (axe y) et fait également les animations de deplacement
 * \param ennemi Un squelette
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du squelette
 */
/* Deplacement vertical d'un squelette de facons linéaire et l'anime */
ennemi_t ennemi_skeleton_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.y >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 3
				if(ennemi.speed == 3){
					ennemi.image.dst.y -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 0;
				}else{
					ennemi.speed ++;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_up1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_up2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.y < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.y <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.y += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_down1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/skeleton/skeleton_down2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.y > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_gnome_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un gnome horizontalement (axe x) et fait également les animations de deplacement
 * \param ennemi Un gnome
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du gnome
 */
/* Deplacement horizontal d'un gnome de facons linéaire et l'anime */
ennemi_t ennemi_gnome_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.x >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 2
				if(ennemi.speed == 0){
					ennemi.image.dst.x -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 1;
				}else{
					ennemi.speed = 0;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_left1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_left2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.x < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.x <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.x += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_right1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_right2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.x > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_gnome_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un gnome verticalement (axe y) et fait également les animations de deplacement
 * \param ennemi Un gnome
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du gnome
 */
/* Deplacement vertical d'un gnome de facons linéaire et l'anime */
ennemi_t ennemi_gnome_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.y >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 2
				if(ennemi.speed == 0){
					ennemi.image.dst.y -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 1;
				}else{
					ennemi.speed = 0;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_up1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_up2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation ++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 2){
					ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_up2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.y < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.y <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.y += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_down1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_down2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation ++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 2){
						ennemi.image = changement_image(ennemi.image,"mob/gnome/gnome_down3.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.y > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_rat_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un rat horizontalement (axe x) et fait également les animations de deplacement
 * \param ennemi Un rat
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du rat
 */
/* Deplacement horizontal d'un rat de facons linéaire et l'anime */
ennemi_t ennemi_rat_x_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.x >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 2
				if(ennemi.speed == 0){
					ennemi.image.dst.x -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 1;
				}else{
					ennemi.speed = 0;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/rat/rat_left1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/rat/rat_left2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.x < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.x <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.x += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/rat/rat_right1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/rat/rat_right2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.x > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_rat_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait bouger un rat verticalement (axe y) et fait également les animations de deplacement
 * \param ennemi Un rat
 * \param patern Longueur du deplacement
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie à la nouvelle position du rat
 */
/* Deplacement vertical d'un rat de facons linéaire et l'anime */
ennemi_t ennemi_rat_y_deplacement(ennemi_t ennemi, int patern,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

		//printf("ennemi pos : %d\n",ennemi.image.dst.x);
		//printf("cmp mouv : %d\n",ennemi.compteur_mouvement);
		//printf("patern done : %d\n",ennemi.patern_done);

		if(ennemi.patern_done == 0){
			if (ennemi.image.dst.y >= 0 && ennemi.compteur_mouvement <= patern){
				// Reduit la vitesse de l'ennemi par 2
				if(ennemi.speed == 0){
					ennemi.image.dst.y -= 1;
					ennemi.compteur_mouvement++;
					ennemi.speed = 1;
				}else{
					ennemi.speed = 0;
				}
				if(ennemi.animation == 0){
					ennemi.image = changement_image(ennemi.image,"mob/rat/rat_up1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 1){
					ennemi.image = changement_image(ennemi.image,"mob/rat/rat_up2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation ++;
						ennemi.compteur_animation = 0;
					}
				}else if(ennemi.animation == 2){
					ennemi.image = changement_image(ennemi.image,"mob/rat/rat_up3.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
					ennemi.compteur_animation++;
					if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
						ennemi.animation = 0;
						ennemi.compteur_animation = 0;
					}
				}
			}
			if(ennemi.compteur_mouvement > patern || ennemi.image.dst.y < 0){
				ennemi.patern_done = 1;
				ennemi.compteur_mouvement = 0;
				ennemi.animation = 0;
			}
		}else if(ennemi.patern_done == 1){
			if(ennemi.compteur_mouvement <= patern){
				if (ennemi.image.dst.y <= 640){
					if(ennemi.speed == 0){
						ennemi.image.dst.y += 1;
						ennemi.compteur_mouvement++;
						ennemi.speed =1;
					}else{
						ennemi.speed = 0;
					}
					if(ennemi.animation == 0){
						ennemi.image = changement_image(ennemi.image,"mob/rat/rat_down1.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 1){
						ennemi.image = changement_image(ennemi.image,"mob/rat/rat_down2.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation ++;
							ennemi.compteur_animation = 0;
						}
					}else if(ennemi.animation == 2){
						ennemi.image = changement_image(ennemi.image,"mob/rat/rat_down3.png",ennemi.image.dst.x,ennemi.image.dst.y,45,56,pRenderer,tab_load_image);
						ennemi.compteur_animation++;
						if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
							ennemi.animation = 0;
							ennemi.compteur_animation = 0;
						}
					}
				}
				if(ennemi.compteur_mouvement >= patern || ennemi.image.dst.y > 640){
					ennemi.patern_done = 0;
					ennemi.compteur_mouvement = 0;
					ennemi.animation = 0;
				}
			}
		}
		//SDL_Delay(2);
	return ennemi;
}
