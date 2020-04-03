#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "vie.h"
void initialiservie(vie *v)
{
(*v).couleur= {255,255,255};
(*v).police = TTF_OpenFont("arial.ttf", 30);
(*v).texte = TTF_RenderText_Blended(police,"vie", couleurBlanche);
(*v).posvie.x=300;
(*v).posvie.y=100;
(*v).nbvie=3;
}
void initialiserscore(score *s)
{
(*s).couleur= {255,255,255};
(*s).police = TTF_OpenFont("arial.ttf", 30);
(*s).texte = TTF_RenderText_Blended(police,"score", couleurBlanche);
(*s).posvie.x=20;
(*s).posvie.y=100;
(*s).topscore=0000;
(*s).score=0000;
}
void initialisertemps(temps *t)
{
(*t).couleur= {255,255,255};
(*t).police = TTF_OpenFont("arial.ttf", 30);
(*t).texte = TTF_RenderText_Blended(police,"temps", couleurBlanche);
(*t).posvie.x=150;
(*t).posvie.y=100;
(*t).tempsinitial=0000;
(*t).tempscourant=0000;
}
void modificationvie(vie *v,int c)
{

}
void modificationscore(score *s)
{

}
void modificationtemps(temps *t)
{

}
void affichervie(vie v)
{

}
void afficherscore(score s)
{

}
void affichertemps(temps t)
{

}
