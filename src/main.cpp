#include <Arduino.h>
#include "lorris_send.hpp"

float sinus;
float cosin;

Parser <0xFF,8> lorris; /* 
                        * ve spicatich zavorkach je prvni argument hlavicka dat poslanych do lorris, neni treba jakkoliv menit.
                        * jako druhy argument je maximalni pocet baitu ktere posilas, muzes posilat i mene nez uvedes
                        * takze pokut si nejses jista kolik mas baitu tak tam klidne dej 253 (maximum co zvladne knihovna)
                        * za zavorkama je jmeno tohoto nastaveni, zavolas ho takhle / lorris.send(a,b,c,,,,); /
                        * v kulatych zavorkach je prvni argument jmeno portu po kterem ta data posilas,
                        * napriklad pokut to budes posilat po USB tak tam bude Serial
                        * druhy argument asi nemusis resit napis tam 0
                        * teprve treti a dalsi argumenty jsou ta cisla ktera posilas do lorris
                        * co se poctu hodnot tyce maximum je 253 pokut budou v datovem typu char, vlastne si omezena
                        * jenom mnozstvi baitu ktere si nadefinujes v druhem argumentu spicatych zavorek
                        * kdyby ti nahodou nestacili, jakoze ti stacit budou,
                        * tak si krome / Parser <0xFF,8> lorris; / deklaruj jeste dalsi kde budes mit jinou hlavicku
                        * a jiny nazev napriklad / Parser <1xFF,8> lorris2; / nebo uplne jine jmeno pro lepsi orientaci
                        */


void setup()
{

}

void loop()
{

}