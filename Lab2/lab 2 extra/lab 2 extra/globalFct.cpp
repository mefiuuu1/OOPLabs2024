#include "globalFct.h"
#include "Movie.h"
#include <cstring>
int cmpNume(Movie x, Movie y) {
	if (strcmp(x.getNume(), y.getNume()) == 0)
		return 0;
	else
		if (strcmp(x.getNume(), y.getNume()) > 0)
			return 1;
		else
			return -1;
}

int cmpAn(Movie x, Movie y) {
	if (x.getAn() == y.getAn())
		return 0;
	else
		if (x.getAn() > y.getAn())
			return 1;
		else
			return -1;
}

int cmpIMDB(Movie x, Movie y) {
	if (x.getNota() == y.getNota())
		return 0;
	else
		if (x.getNota() > y.getNota())
			return 1;
		else
			return -1;
}

int cmpDurata(Movie x, Movie y) {
	if (x.getDurata() == y.getDurata())
		return 0;
	else
		if (x.getDurata() > y.getDurata())
			return 1;
		else
			return -1;
}

int cmpAniLansare(Movie x, Movie y) {
	if (x.AniLansare() == y.AniLansare())
		return 0;
	else
		if (x.AniLansare() > y.AniLansare())
			return 1;
		else
			return -1;
}