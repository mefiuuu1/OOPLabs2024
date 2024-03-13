#include <iostream>
#include <stdio.h>
#include "Movie.h"
#include "MovieSeries.h"
#include "globalFct.h"
using namespace std;
int main() {
    Movie ep5;
    ep5.setNume((char*)"Star Wars: Episode V - The Empire Strikes Back");
    ep5.setNota(8.7);
    ep5.setAn(1980);
    ep5.setDurata(124);

    Movie ep4;
    ep4.setNume((char*)"Star Wars: Episode IV - A New Hope");
    ep4.setNota(8.6);
    ep4.setAn(1977);
    ep4.setDurata(121);

    Movie ep6;
    ep6.setNume((char*)"Star Wars: Episode VI - Return of the Jedi");
    ep6.setNota(8.3);
    ep6.setAn(1983);
    ep6.setDurata(131);

    printf(
        R"(
ep4, ep5 comparisons:
name        : %d
year        : %d
score       : %d
length      : %d
passed years: %d
)",
cmpNume(ep4, ep5),
cmpAn(ep4, ep5),
cmpIMDB(ep4, ep5),
cmpDurata(ep4, ep5),
cmpAniLansare(ep4, ep5));

    MovieSeries series;
    series.init();
    series.add(ep5);
    series.add(ep4);
    series.add(ep6);

    series.sort();
    series.print();
}