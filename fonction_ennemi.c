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
 * \fn ennemi_t combat_arbre(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui démarre le combat contre l'Arbre, elle le fait attaqué, se deplacer, et mourir lorsque ses hp sont a 0
 * \param ennemi L'Arbre
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations de l'Arbre
 */
/* Combat contre l'Arbre */
ennemi_t combat_arbre(ennemi_t arbre,SDL_Renderer * pRenderer, load_image_t tab_load_image[NB_IMAGE]){

  if(arbre.hp > 0){
    if(arbre.attack == 500){
      arbre=attack_arbre(arbre,pRenderer,tab_load_image);
      arbre.affichage=1;
      //SDL_Log("Attack : arbre.attack = %d", arbre.attack);
    }else{
      //SDL_Log("Deplacement");
      arbre=ennemi_arbre_deplacement(arbre,200,pRenderer,tab_load_image);
      arbre.attack++;
      arbre.animation_blast = 0;
      arbre.affichage=1;
    }
  }else{
    arbre.affichage=1;
    arbre=ennemi_arbre_mort(arbre,pRenderer,tab_load_image);
  }
  if(arbre.hp == 0){
    //SDL_Log("animation mort");
  }
  //printf("CT : %d\n", arbre.compteur_invincibility);
  //printf("HP : %d\n", arbre.hp);
  return arbre;
}

/**
 * \fn ennemi_t combat_skeleton(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui démarre le combat contre un squelette, elle le fait attaqué, se deplacer, et mourir lorsque ses hp sont a 0
 * \param ennemi Un squelette
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations du squelette
 */
/* Combat contre un squelette */
ennemi_t combat_skeleton(ennemi_t ennemi, SDL_Renderer * pRenderer, load_image_t tab_load_image[NB_IMAGE]){

  if(ennemi.hp > 0){
    ennemi=ennemi_skeleton_x_deplacement(ennemi,200,pRenderer,tab_load_image);
    ennemi.attack++;
    ennemi.animation_blast = 0;
    ennemi.affichage=1;
  }else{
    ennemi.affichage = 1;
    ennemi=ennemi_mort(ennemi,pRenderer,tab_load_image);
  }
  return ennemi;
}

/**
 * \fn ennemi_t combat_rat(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui démarre le combat contre un rat, elle le fait attaqué, se deplacer, et mourir lorsque ses hp sont a 0
 * \param ennemi Un rat
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations du rat
 */
/* Combat contre un rat */
ennemi_t combat_rat(ennemi_t ennemi, SDL_Renderer * pRenderer, load_image_t tab_load_image[NB_IMAGE]){

  if(ennemi.hp > 0){
    ennemi=ennemi_rat_y_deplacement(ennemi,200,pRenderer,tab_load_image);
    ennemi.attack++;
    ennemi.animation_blast = 0;
    ennemi.affichage=1;
  }else{
    ennemi=ennemi_mort(ennemi,pRenderer,tab_load_image);
    ennemi.affichage=0;
  }
  return ennemi;

}

/**
 * \fn ennemi_t combat_gnome(ennemi_t ennemi, SDL_Renderer* pRenderer,load_image_t tab_load_image[NB_IMAGE])
 * \brief Fonction qui démarre le combat contre un gnome, elle le fait attaqué, se deplacer, et mourir lorsque ses hp sont a 0
 * \param ennemi Un gnome
 * \param pRenderer La fenetre d'affichage
 * \param tab_load_image La zone mémoire de toutes les images du jeu
 * \return Renvoie les informations du gnome
 */
/* Combat contre un gnome */
ennemi_t combat_gnome(ennemi_t ennemi, SDL_Renderer * pRenderer, load_image_t tab_load_image[NB_IMAGE]){

  if(ennemi.hp != 0){
    ennemi=ennemi_gnome_y_deplacement(ennemi,200,pRenderer,tab_load_image);
    ennemi.attack++;
    ennemi.animation_blast = 0;
    ennemi.affichage=1;
  }else{
    ennemi=ennemi_mort(ennemi,pRenderer,tab_load_image);
    ennemi.affichage=1;
  }
  return ennemi;

}
