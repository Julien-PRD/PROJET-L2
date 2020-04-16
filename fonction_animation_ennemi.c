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
 * \fn ennemi_t ennemi_arbre_mort(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait l'animation de mort de l'Arbre
 * \param ennemi L'Arbre
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations de l'Arbre et desactive son affichage à la fin de l'animation
 */
/* Animation de mort de l'Arbre */
ennemi_t ennemi_arbre_mort(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

	if(ennemi.animation_death == 0){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 1){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 2){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death3.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 3){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 4){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death ++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 5){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death6.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death ++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 6){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death7.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death ++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 7){
		ennemi.image = changement_image(ennemi.image,"boss/boss_death8.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death = -1;
			ennemi.compteur_animation = 0;
			ennemi.affichage = 0;
		}
	}
	return ennemi;

}

/**
 * \fn ennemi_t attack_arbre(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait l'animation d'une attaque de l'Arbre
 * \param ennemi L'Arbre
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations de l'Arbre et reinitialise son compteur attack avant la prochaine attaque
 */
/* Animation d'attaque de l'Arbre */
ennemi_t attack_arbre(ennemi_t ennemi,SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

	if(ennemi.animation_blast == 0){
		ennemi.image = changement_image(ennemi.image,"boss/boss_explo1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 1){
		ennemi.image = changement_image(ennemi.image,"boss/boss_explo2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 2){
		ennemi.image = changement_image(ennemi.image,"boss/boss_explo3.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 3){
		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 4){
		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe2.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 5){
		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe3.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast == ennemi.limite_compteur_animation){
			ennemi.animation_blast++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 6){
		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe4.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast ++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 7){

		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe5.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast ++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 8){
		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe6.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast ++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 9){

		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe7.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast ++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 10){

		ennemi.image = changement_image(ennemi.image,"boss/boss_aoe8.png",ennemi.image.dst.x,ennemi.image.dst.y,200,400,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast ++;
			ennemi.compteur_animation_blast = 0;
		}
	}else if(ennemi.animation_blast == 11){
		ennemi.image = changement_image(ennemi.image,"boss/boss_explo1.png",ennemi.image.dst.x,ennemi.image.dst.y,200,200,pRenderer,tab_load_image);
		ennemi.compteur_animation_blast++;
		if (ennemi.compteur_animation_blast >= ennemi.limite_compteur_animation){
			ennemi.animation_blast =0;
			ennemi.compteur_animation_blast = 0;
			ennemi.attack = 0;
		}
	}
	return ennemi;
}

/**
 * \fn ennemi_t ennemi_mort(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui fait l'animation de mort de tous les autres enemis du jeu
 * \param ennemi Un ennemi
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations de l'ennemi et desactive son affichage à la fin de l'animation
 */
/* Animation de mort d'un ennemi */
ennemi_t ennemi_mort(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE]){

	if(ennemi.animation_death == 0){
		ennemi.image = changement_image(ennemi.image,"mob/mob_death1.png",ennemi.image.dst.x,ennemi.image.dst.y,46,46,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 1){
		ennemi.image = changement_image(ennemi.image,"mob/mob_death2.png",ennemi.image.dst.x,ennemi.image.dst.y,46,46,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 2){
		ennemi.image = changement_image(ennemi.image,"mob/mob_death3.png",ennemi.image.dst.x,ennemi.image.dst.y,46,46,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death++;
			ennemi.compteur_animation = 0;
		}
	}else if(ennemi.animation_death == 3){
		ennemi.image = changement_image(ennemi.image,"mob/mob_death4.png",ennemi.image.dst.x,ennemi.image.dst.y,46,46,pRenderer,tab_load_image);
		ennemi.compteur_animation++;
		if (ennemi.compteur_animation == ennemi.limite_compteur_animation){
			ennemi.animation_death = -1;
			ennemi.compteur_animation = 0;
			ennemi.affichage = 0;
		}
	}
	return ennemi;

}
