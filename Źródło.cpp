#include <iostream>
#include <time.h>
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

class Postac
{
public:
	int sila = 1300;
	int inteligencja = 13;
	int zrecznosc = 13;
	int zdrowieobecne = 44;
	int zdrowiecalkowite = 80;
	string imie;
};
Postac mojaPostac;

class statystyki_przedmiotow
{
public:
	int atak_broni = 1;
	int obrona_helmu = 1;
	int obrona_napiersnika = 1;
	int obrona_spodni = 1;
	int obrona_butow = 1;
};
statystyki_przedmiotow sp;

class szablonPrzeciwnik
{
public:
	int sila = 0;
	int inteligencja = 0;
	int zrecznosc = 0;
	int zdrowieobecne = 0;
	int zdrowiecalkowite = 0;
	string imie;
};
szablonPrzeciwnik przeciwnik;


class dlugi_sztylet
{
public:
	string nazwa_dlugi_sztylet = "Dlugi sztylet";
	int ilosc_dlugi_sztylet = 0;
	string opis_dlugi_sztylet = "Ostry jak brzytwa sztylet.";
	int wartosc_dlugi_sztylet = 30;
	int zmienna_wyboru_dlugi_sztylet = 0;
	int statystyka_ataku_dlugi_sztylet = 8;
};
dlugi_sztylet ds;
class drewniana_laga
{
public:
	string nazwa_drewniana_laga = "Drewniana laga";
	int ilosc_drewniana_laga = 0;
	string opis_drewniana_laga = "Gruby kij.";
	int wartosc_drewniana_laga = 5;
	int zmienna_wyboru_drewniana_laga = 0;
	int statystyka_ataku_drewniana_laga = 2;
};
drewniana_laga dl;
class dziurawe_buty
{
public:
	string nazwa_dziurawe_buty = "Dziurawe buty";
	int ilosc_dziurawe_buty = 0;
	string opis_dziurawe_buty = "Ledwo nadajace sie do uzytku, skorzane buty.";
	int wartosc_dziurawe_buty = 9;
	int zmienna_wyboru_dziurawe_buty = 0;
	int statystyka_obrony_dziurawe_buty = 2;
};
dziurawe_buty db;
class mikstura_sily
{
public:
	string nazwa_mikstura_sily = "Mikstura sily";
	int ilosc_mikstura_sily = 0;
	string opis_mikstura_sily = "Dodaje jeden punkt sily.";
	int wartosc_mikstura_sily = 30;
	int zmienna_wyboru_mikstura_sily = 0;
};
mikstura_sily ms;
class mikstura_zdrowia
{
public:
	string nazwa_mikstura_zdrowia = "Mikstura zdrowia";
	int ilosc_mikstura_zdrowia = 0;
	string opis_mikstura_zdrowia = "Odnawia 20 punktow zdrowia.";
	int wartosc_mikstura_zdrowia = 10;
	int zmienna_wyboru_mikstura_zdrowia = 0;
};
mikstura_zdrowia mz;
class noz_do_roslin
{
public:
	string nazwa_noz_do_roslin = "Noz do roslin";
	int ilosc_noz_do_roslin = 0;
	string opis_noz_do_roslin = "Noz uzywany do przycinania roslin.";
	int wartosc_noz_do_roslin = 25;
	int zmienna_wyboru_noz_do_roslin = 0;
	int statystyka_ataku_noz_do_roslin = 4;
};
noz_do_roslin ndr;
class podarta_koszula
{
public:
	string nazwa_podarta_koszula = "Podarta koszula";
	int ilosc_podarta_koszula = 0;
	string opis_podarta_koszula = "Podziurawiona i podarta koszula.";
	int wartosc_podarta_koszula = 5;
	int zmienna_wyboru_podarta_koszula = 0;
	int statystyka_obrony_podarta_koszula = 1;
};
podarta_koszula pk;
class sakiewka_ze_zlotem
{
public:
	string nazwa_sakiewka_ze_zlotem = "Sakiewka ze zlotem";
	int ilosc_sakiewka_ze_zlotem = 0;
	string opis_sakiewka_ze_zlotem = "Mozna otworzyc aby zdobyc od 50 do 70 sztuk zlota.";
	int wartosc_sakiewka_ze_zlotem = 60;
	int zmienna_wyboru_sakiewka_ze_zlotem = 0;
};
sakiewka_ze_zlotem szz;
class skorzana_kurtka
{
public:
	string nazwa_skorzana_kurtka = "Skorzana kurtka";
	int ilosc_skorzana_kurtka = 0;
	string opis_skorzana_kurtka = "Dobrze wykonana, skorzana kurtka. Lekka, dzieki czemu nie ogranicza ruchow.";
	int wartosc_skorzana_kurtka = 50;
	int zmienna_wyboru_skorzana_kurtka = 0;
	int statystyka_obrony_skorzana_kurtka = 9;
};
skorzana_kurtka sk;
class skorzane_spodnie
{
public:
	string nazwa_skorzane_spodnie = "Skorzane spodnie";
	int ilosc_skorzane_spodnie = 0;
	string opis_skorzane_spodnie = "Solidne, skorzane nogawice.";
	int wartosc_skorzane_spodnie = 35;
	int zmienna_wyboru_skorzane_spodnie = 0;
	int statystyka_obrony_skorzane_spodnie = 7;
};
skorzane_spodnie ss;
class skorzany_helm
{
public:
	string nazwa_skorzany_helm = "Skorzany helm";
	int ilosc_skorzany_helm = 0;
	string opis_skorzany_helm = "Dobrze wykonany, lekki, skorzany helm.";
	int wartosc_skorzany_helm = 25;
	int zmienna_wyboru_skorzany_helm = 0;
	int statystyka_obrony_skorzany_helm = 5;
};
skorzany_helm sh;
class zniszczone_spodnie
{
public:
	string nazwa_zniszczone_spodnie = "Zniszczone spodnie";
	int ilosc_zniszczone_spodnie = 0;
	string opis_zniszczone_spodnie = "Podziurawione i przetarte spodnie.";
	int wartosc_zniszczone_spodnie = 7;
	int zmienna_wyboru_zniszczone_spodnie = 0;
	int statystyka_obrony_zniszczone_spodnie = 2;
};
zniszczone_spodnie zs;




//funkcje do ekwipunku
void nadaj_zmienne_wyboru(void);
void wypiszekwipunek(void);
void wypiszprzedmiot(int, int, string);
void ekwipunek(void);
void przesun_znacznik(char);
void wybierz_przedmiot(void);
void sprawdzenie_jakie_sa_przedmioty(void);
void funkcja_bron(string, int*, string, int, int);
void funkcja_helm(string, int*, string, int, int);
void funkcja_napiersnik(string, int*, string, int, int);
void funkcja_spodnie(string, int*, string, int, int);
void funkcja_buty(string, int*, string, int, int);
//funkcje zak³adania przedmiotów etc.
void zaloz_bron(string);
void zaloz_helm(string);
void zaloz_napiersnik(string);
void zaloz_spodnie(string);
void zaloz_buty(string);
void wyposazenie_bron(void);
void wyposazenie_helm(void);
void wyposazenie_napiersnik(void);
void wyposazenie_spodnie(void);
void wyposazenie_buty(void);
void sprawdzenie_jakie_statystyki_sa_na_przedmiotach(void);
//funkcje przedmiotow specjalnych
void funkcja_mikstura_sily(void);
void funkcja_mikstura_zdrowia(void);
void funkcja_sakiewka_ze_zlotem(void);


//funkcje do postaci
void wypiszpostac(Postac**);
void zwiekszenie_statystyk(void);
void obliczPoziom(void);


//funkcje do poruszania siê po mapie
void wypisz_tab(char[]);
void idz_w_gore(char[]);
void idz_w_dol(char[]);
void idz_w_lewo(char[]);
void idz_w_prawo(char[]);


//funkcje do zbierania przedmiotów
void zbieranie_tab1(void);
void zbieranie_tab2(void);
void zbieranie_tab3(void);


//funkcje do walki
int losowanieLiczby(int zakresL, int zakresP); //losuje liczbe z zakresu od L do P, w³¹cznie z nimi
void wyswietlStatyPostac(Postac* mojaPostac); //wyœwietla statystyki postaci
void wyswietlStatyPrzeciwnik(szablonPrzeciwnik* przeciwnik); //wyœwietla statystyki przeciwnika
int trafienieGracz(Postac* mojaPostac, szablonPrzeciwnik* przeciwnik, int wybor); //sprawdza czy atak gracza trafil
int trafieniePrzeciwnik(Postac* mojaPostac, szablonPrzeciwnik* przeciwnik); //sprawdza czy atak przeciwnika trafil
void walka(Postac* mojaPostacWalka, statystyki_przedmiotow* spWalka, szablonPrzeciwnik* przeciwnikWalka); //glowna funkcja






//zmienne globalne do ekwipunku
int zloto = 0;
const int ilosc_przedmiotow = 12;
int spr = ilosc_przedmiotow;
int spr2 = 0;
int wybor_gracza = 1;
int tablica_wybor[ilosc_przedmiotow + 5] = { 0 };
//zmienne globalne do dzia³ania zak³adania przedmiotów
string bron = "BRAK";
string helm = "BRAK";
string napiersnik = "Podarta koszula";
string spodnie = "Zniszczone spodnie";
string buty = "BRAK";


//zmienne globalne do poziomow
int doswiadczenie = 0;
int poziom = 0;
int p = 1;


//zmienne globalne do chodzenia po mapie
int pozycja_postaci = 4465;
const int rozmiar = 6486;
int ktora_tablica = 3;
char tab1[rozmiar] = "---------                       ---------------------------------------------------------------------------------------------------------\xA|#######|                       |#######################################################################################################|\xA|#######|                       |#########################----------------------------------------------------------------##############|\xA|#######|                      $|#########################|                                  ?                           |##############|\xA|#######|                       |#########################|                                                           $  |##############|\xA|#######|                       |#########################|                                                              |##############|\xA|#######|                       |#########################|             --------------------------------------------------##############|\xA|#######|                       |#########################|             |###############################################################|\xA|#######|                       |#########################|             |###############################################################|\xA|#######|                       |#########################|             |###############################################################|\xA|#######|                       |#########################|             |###############################################################|\xA|#######|                       ---------------------------             ------------------------------------############################|\xA|#######|                                                                                                  |############################|\xA|#######|                                                 ?                                                |############################|\xA|#######|                                                                                                  |############################|\xA|#######|                                                                                                  |############################|\xA|#######|                       ----------------------------           ------------------------            |############################|\xA|#######|$                      |##########################|           |######################|            |############################|\xA|#######|                       |##########################|           |######################|            |############################|\xA|#######|                       |##########################|     ?     |######################|            |############################|\xA|#######|                       |##########################|           |######################|            -----------------############|\xA|#######|                       |##########################|           |######################|                           $|############|\xA|#######|                       |###############------------           ----------#############|                            |############|\xA|#######|                       |###############|                               |#############|                            |############|\xA|#######|                       |###############|                               |#############|                            |############|\xA|#######|                       |###############|                               |#############-----------------            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                               |#############################|            |############|\xA|#######|                       |###############|                       $      $|#############################|            |############|\xA|#######|                       |###############---------------------------------#############################|            |############|\xA|#######|                       |#############################################################################|            |############|\xA|#######|                       |#############################################################################|            |############|\xA|#######|                       -------------------------------------------------------------------------------            |############|\xA|#######|                                       $        $                 ?                                               |############|\xA|#######|                                                                                                                  |############|\xA|#######|                                                                                                                  |############|\xA|#######|                                                                                                                  |############|\xA|#######|                                                                                                                  |############|\xA|#######--------------------------------------------------------------------------------------------------------------------############|\xA|#######################################################################################################################################|\xA|#######################################################################################################################################|\xA|#######################################################################################################################################|\xA-----------------------------------------------------------------------------------------------------------------------------------------";
char tab2[rozmiar] = "-----------------------------------------------------------------------------------------------------------------------------------------\xA                                                                                                                                        |\xA                                                                                                                                        |\xA                                                                                                                                        |\xA                                                                     ?                                                                  |\xA-----------------------------------------------------------------------------------------         -----------------------               |\xA|#################################################################################|                   |#################|               |\xA|#####----------------------------------------------------------------------------|                   |#################|               |\xA|#####|                                                                           |                   |#################|               |\xA|#####|                                                                           |                   |#################|               |\xA|#####|                                                                           |                   |#################|               |\xA|#####|                                                                           |                   |------------------               |\xA|#####|               ---------------------------------------------               |                   |                                 |\xA|#####|               |###########################################|               |                   |                                 |\xA|#####|               |###########################################|               |                   |                          ?      |\xA|#####|               |###########################################|               |          $        |          -------                |\xA|#####|               |###########################################|               ---------------------          |#####|                |\xA|#####|               |###########################################|                                              |#####|                |\xA|#####|               --------------------------------------######|                                              |#####|                |\xA|#####|                                                    |######|                                              |#####|                |\xA|#####|                                                    |######------------------------------------------------#####|                |\xA|#####|                                                    |###########################################################|                |\xA|#####--------------------------------------               ------------------------------------------------------------|      ?         |\xA|##########################################|                                                                           |                |\xA|##########################################|                                                                           |                |\xA|##########################################|                                                                           |                |\xA|##########################################|$                                                                          |                |\xA|##########################################-----------------------------------------                                   |                |\xA|##################################################################################|                                   |                |\xA|#######------------------------------------------------###########################|                                   |                |\xA|#######|                                              |###########################|                                   |                |\xA|#######|                                              |###########################|                                   |                |\xA|#######|                                              |###########################|               ---------------------                |\xA|#######|                                              |###########################|               |                                    |\xA|#######|                       ---------              |###########################|               |                                    |\xA|#######|                       |#######|              |###########################|               |        ----------------------------|\xA|#######|                       |#######|              |###########################|               |        |                           |\xA|#######|                       |#######|              |###########################|               |        |                           |\xA|#######|                       |#######|              |###########################|               |        |                           |\xA|#######|              ?        |#######|              -----------------------------                                                    |\xA|#######|                       |#######|                                                                                               |\xA|#######|                       |#######|                                                                                               |\xA|#######|                       |#######|                                                                                              $|\xA|#######|                       |#######|                                                                                               |\xA|#######|                       |#######---------------------------------------------------------------------                           |\xA|#######|                       |###########################################################################|                          $|\xA---------                       ---------------------------------------------------------------------------------------------------------";
char tab3[rozmiar] = "-----------------------------------------------------------------------------------------------------------------------------------------\xA|                                                                     |##########################|                                       \xA|                                                                     |##########################|                                       \xA|                                                                     |--------------------------|                                       \xA|                                                                     |                         $|                        ?              \xA|                                                                     |                          |          -----------------------------\xA|                                                                     |                          |          |###########################|\xA|                                                                     |                          |          |###########################|\xA|            ---------------------------------------------                                       |          |###########################|\xA|            |###########################################|                                       |          -----------------------#####|\xA|            |###########################################|                                       |                                |#####|\xA|            |###########################################|            |                          |                                |#####|\xA|            |###########################################|            |                          |                                |#####|\xA|            |###########################################|     ?      |---------------------------------------------------        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            -------------------------###################|            ----------------------------------------------------        |#####|\xA|                                   $|###################|                                                                        |#####|\xA|                                    |###################|                                                                        |#####|\xA|                                    |###################|$                                                                       |#####|\xA|                                    |###################--------------------------------------------------------------------------#####|\xA|-----------------------             |##################################################################################################|\xA|######################|             |############################################---------------------------------------------------###|\xA|######################|             |############################################|                                                 |###|\xA|######################|             |############################################|                                                 |###|\xA|######################|             |#######--------------------------------------                                                 |###|\xA|-----------------------             |#######|              ?                                                                       |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                  B                   |###|\xA|                                   $|#######|                                                                                      |###|\xA|         ----------------------------#######|           --------------------------                                                 |###|\xA|         |##################################|           |########################|                                                 |###|\xA|         -----------------------------------|           |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################--------------------------------------------------|###|\xA|                                                        |#############################################|       |########################|\xA-----------------------------------------------------------------------------------------------------------------------------------------";


//zmienna globalna zwyciêstwa
int wygrana = 0;






//+++++++++++++++++++++++++EKWIPUNEK++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void nadaj_zmienne_wyboru(void)
{
	int i = 1;
	ds.zmienna_wyboru_dlugi_sztylet = i;
	i++;
	dl.zmienna_wyboru_drewniana_laga = i;
	i++;
	db.zmienna_wyboru_dziurawe_buty = i;
	i++;
	ms.zmienna_wyboru_mikstura_sily = i;
	i++;
	mz.zmienna_wyboru_mikstura_zdrowia = i;
	i++;
	ndr.zmienna_wyboru_noz_do_roslin = i;
	i++;
	pk.zmienna_wyboru_podarta_koszula = i;
	i++;
	szz.zmienna_wyboru_sakiewka_ze_zlotem = i;
	i++;
	sk.zmienna_wyboru_skorzana_kurtka = i;
	i++;
	ss.zmienna_wyboru_skorzane_spodnie = i;
	i++;
	sh.zmienna_wyboru_skorzany_helm = i;
	i++;
	zs.zmienna_wyboru_zniszczone_spodnie = i;
}
void wypiszprzedmiot(int ilosc_przedmiotu, int zmienna_wyboru, string nazwa_przedmiotu)
{


	if (ilosc_przedmiotu > 0)
	{
		if (zmienna_wyboru == wybor_gracza)
		{
			cout << " > ";
		}

		cout << nazwa_przedmiotu << " [" << ilosc_przedmiotu << "]" << endl;
		spr2++;
	}
	else
	{
		spr--;
	}
}
void wypiszekwipunek(void)
{
	spr = ilosc_przedmiotow;
	spr2 = 0;
	system("cls");

	cout << "#############################################################" << endl;
	cout << "EKWIPUNEK:" << endl;
	cout << "Zloto = " << zloto << endl << endl;
	cout << "PRZEDMIOTY:" << endl;

	wypiszprzedmiot(ds.ilosc_dlugi_sztylet, ds.zmienna_wyboru_dlugi_sztylet, ds.nazwa_dlugi_sztylet);
	wypiszprzedmiot(dl.ilosc_drewniana_laga, dl.zmienna_wyboru_drewniana_laga, dl.nazwa_drewniana_laga);
	wypiszprzedmiot(db.ilosc_dziurawe_buty, db.zmienna_wyboru_dziurawe_buty, db.nazwa_dziurawe_buty);
	wypiszprzedmiot(ms.ilosc_mikstura_sily, ms.zmienna_wyboru_mikstura_sily, ms.nazwa_mikstura_sily);
	wypiszprzedmiot(mz.ilosc_mikstura_zdrowia, mz.zmienna_wyboru_mikstura_zdrowia, mz.nazwa_mikstura_zdrowia);
	wypiszprzedmiot(ndr.ilosc_noz_do_roslin, ndr.zmienna_wyboru_noz_do_roslin, ndr.nazwa_noz_do_roslin);
	wypiszprzedmiot(pk.ilosc_podarta_koszula, pk.zmienna_wyboru_podarta_koszula, pk.nazwa_podarta_koszula);
	wypiszprzedmiot(szz.ilosc_sakiewka_ze_zlotem, szz.zmienna_wyboru_sakiewka_ze_zlotem, szz.nazwa_sakiewka_ze_zlotem);
	wypiszprzedmiot(sk.ilosc_skorzana_kurtka, sk.zmienna_wyboru_skorzana_kurtka, sk.nazwa_skorzana_kurtka);
	wypiszprzedmiot(ss.ilosc_skorzane_spodnie, ss.zmienna_wyboru_skorzane_spodnie, ss.nazwa_skorzane_spodnie);
	wypiszprzedmiot(sh.ilosc_skorzany_helm, sh.zmienna_wyboru_skorzany_helm, sh.nazwa_skorzany_helm);
	wypiszprzedmiot(zs.ilosc_zniszczone_spodnie, zs.zmienna_wyboru_zniszczone_spodnie, zs.nazwa_zniszczone_spodnie);

	if (spr == 0)
	{
		cout << "Twoj ekwipunek jest pusty" << endl;
	}

	cout << "-------------------------------------------------------------" << endl;
	cout << "WYPOSAZENIE:" << endl << endl;
	if (wybor_gracza == ilosc_przedmiotow + 1)
		cout << " > ";
	cout << "BRON: " << bron << "    ";
	if (bron != "BRAK")
	{
		cout << "ATAK: " << sp.atak_broni;
	}
	cout << endl << endl;

	if (wybor_gracza == ilosc_przedmiotow + 2)
		cout << " > ";
	cout << "GLOWA: " << helm << "    ";
	if (helm != "BRAK")
	{
		cout << "OBRONA: " << sp.obrona_helmu;
	}
	cout << endl << endl;

	if (wybor_gracza == ilosc_przedmiotow + 3)
		cout << " > ";
	cout << "KLATKA PIERSIOWA: " << napiersnik << "    ";
	if (napiersnik != "BRAK")
	{
		cout << "OBRONA: " << sp.obrona_napiersnika;
	}
	cout << endl << endl;

	if (wybor_gracza == ilosc_przedmiotow + 4)
		cout << " > ";
	cout << "NOGI: " << spodnie << "    ";
	if (spodnie != "BRAK")
	{
		cout << "OBRONA: " << sp.obrona_spodni;
	}
	cout << endl << endl;


	if (wybor_gracza == ilosc_przedmiotow + 5)
		cout << " > ";
	cout << "STOPY: " << buty << "    ";
	if (buty != "BRAK")
	{
		cout << "OBRONA: " << sp.obrona_butow;
	}
	cout << endl << endl;

	cout << "#############################################################" << endl;
}
void ekwipunek(void)
{
	sprawdzenie_jakie_sa_przedmioty();
	char input;
	for (;;)
	{
		wypiszekwipunek();

		input = _getch();
		if (input == 'w' || input == 's')
			przesun_znacznik(input);
		else
		{
			if (input == 13)
				wybierz_przedmiot();
			else
			{
				if (input == 27)
					break;
			}
		}
	}
}
void przesun_znacznik(char input)
{
	int temporary = 0;
	if (input == 's')
	{
		for (int i = wybor_gracza; i < ilosc_przedmiotow + 5; i++)
		{
			if (tablica_wybor[i] == 1)
			{
				wybor_gracza = (i + 1);
				temporary++;
				break;
			}
		}
		if (temporary == 0)
		{
			for (int i = 0; i < wybor_gracza; i++)
			{
				if (tablica_wybor[i] == 1)
				{
					wybor_gracza = (i + 1);
					break;
				}
			}
		}
	}

	if (input == 'w')
	{
		for (int i = (wybor_gracza - 2); i >= 0; i--)
		{
			if (tablica_wybor[i] == 1)
			{
				wybor_gracza = (i + 1);
				temporary++;
				break;
			}
		}
		if (temporary == 0)
		{
			for (int i = ((ilosc_przedmiotow + 5) - 1); i >= (wybor_gracza - 1); i--)
			{
				if (tablica_wybor[i] == 1)
				{
					wybor_gracza = (i + 1);
					break;
				}
			}
		}
	}
}
void wybierz_przedmiot(void)
{
	if (wybor_gracza == ilosc_przedmiotow + 1)
		wyposazenie_bron();
	else
	{
		if (wybor_gracza == ilosc_przedmiotow + 2)
			wyposazenie_helm();
		else
		{
			if (wybor_gracza == ilosc_przedmiotow + 3)
				wyposazenie_napiersnik();
			else
			{
				if (wybor_gracza == ilosc_przedmiotow + 4)
					wyposazenie_spodnie();
				else
				{
					if (wybor_gracza == ilosc_przedmiotow + 5)
						wyposazenie_buty();
					else
					{
						if (wybor_gracza == pk.zmienna_wyboru_podarta_koszula)
							funkcja_napiersnik(pk.nazwa_podarta_koszula, &pk.ilosc_podarta_koszula, pk.opis_podarta_koszula, pk.wartosc_podarta_koszula, pk.statystyka_obrony_podarta_koszula);
						else
						{
							if (wybor_gracza == sk.zmienna_wyboru_skorzana_kurtka)
								funkcja_napiersnik(sk.nazwa_skorzana_kurtka, &sk.ilosc_skorzana_kurtka, sk.opis_skorzana_kurtka, sk.wartosc_skorzana_kurtka, sk.statystyka_obrony_skorzana_kurtka);
							else
							{
								if (wybor_gracza == ss.zmienna_wyboru_skorzane_spodnie)
									funkcja_spodnie(ss.nazwa_skorzane_spodnie, &ss.ilosc_skorzane_spodnie, ss.opis_skorzane_spodnie, ss.wartosc_skorzane_spodnie, ss.statystyka_obrony_skorzane_spodnie);
								else
								{
									if (wybor_gracza == sh.zmienna_wyboru_skorzany_helm)
										funkcja_helm(sh.nazwa_skorzany_helm, &sh.ilosc_skorzany_helm, sh.opis_skorzany_helm, sh.wartosc_skorzany_helm, sh.statystyka_obrony_skorzany_helm);
									else
									{
										if (wybor_gracza == zs.zmienna_wyboru_zniszczone_spodnie)
											funkcja_spodnie(zs.nazwa_zniszczone_spodnie, &zs.ilosc_zniszczone_spodnie, zs.opis_zniszczone_spodnie, zs.wartosc_zniszczone_spodnie, zs.statystyka_obrony_zniszczone_spodnie);
										else
										{
											if (wybor_gracza == ds.zmienna_wyboru_dlugi_sztylet)
												funkcja_bron(ds.nazwa_dlugi_sztylet, &ds.ilosc_dlugi_sztylet, ds.opis_dlugi_sztylet, ds.wartosc_dlugi_sztylet, ds.statystyka_ataku_dlugi_sztylet);
											else
											{
												if (wybor_gracza == dl.zmienna_wyboru_drewniana_laga)
													funkcja_bron(dl.nazwa_drewniana_laga, &dl.ilosc_drewniana_laga, dl.opis_drewniana_laga, dl.wartosc_drewniana_laga, dl.statystyka_ataku_drewniana_laga);
												else
												{
													if (wybor_gracza == db.zmienna_wyboru_dziurawe_buty)
														funkcja_buty(db.nazwa_dziurawe_buty, &db.ilosc_dziurawe_buty, db.opis_dziurawe_buty, db.wartosc_dziurawe_buty, db.statystyka_obrony_dziurawe_buty);
													else
													{
														if (wybor_gracza == mz.zmienna_wyboru_mikstura_zdrowia)
															funkcja_mikstura_zdrowia();
														else
														{
															if (wybor_gracza == ndr.zmienna_wyboru_noz_do_roslin)
																funkcja_bron(ndr.nazwa_noz_do_roslin, &ndr.ilosc_noz_do_roslin, ndr.opis_noz_do_roslin, ndr.wartosc_noz_do_roslin, ndr.statystyka_ataku_noz_do_roslin);
															else
															{
																if (wybor_gracza == ms.zmienna_wyboru_mikstura_sily)
																	funkcja_mikstura_sily();
																else
																{
																	if (wybor_gracza == szz.zmienna_wyboru_sakiewka_ze_zlotem)
																		funkcja_sakiewka_ze_zlotem();
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void sprawdzenie_jakie_sa_przedmioty(void)
{
	int temporary = 0;

	for (int i = 0; i < ilosc_przedmiotow + 5; i++)
		tablica_wybor[i] = 0;

	if (ds.ilosc_dlugi_sztylet > 0)
		tablica_wybor[(ds.zmienna_wyboru_dlugi_sztylet - 1)] = 1;
	if (dl.ilosc_drewniana_laga > 0)
		tablica_wybor[(dl.zmienna_wyboru_drewniana_laga - 1)] = 1;
	if (db.ilosc_dziurawe_buty > 0)
		tablica_wybor[(db.zmienna_wyboru_dziurawe_buty - 1)] = 1;
	if (ms.ilosc_mikstura_sily > 0)
		tablica_wybor[(ms.zmienna_wyboru_mikstura_sily - 1)] = 1;
	if (mz.ilosc_mikstura_zdrowia > 0)
		tablica_wybor[(mz.zmienna_wyboru_mikstura_zdrowia - 1)] = 1;
	if (ndr.ilosc_noz_do_roslin > 0)
		tablica_wybor[(ndr.zmienna_wyboru_noz_do_roslin - 1)] = 1;
	if (pk.ilosc_podarta_koszula > 0)
		tablica_wybor[(pk.zmienna_wyboru_podarta_koszula - 1)] = 1;
	if (szz.ilosc_sakiewka_ze_zlotem > 0)
		tablica_wybor[(szz.zmienna_wyboru_sakiewka_ze_zlotem - 1)] = 1;
	if (sk.ilosc_skorzana_kurtka > 0)
		tablica_wybor[(sk.zmienna_wyboru_skorzana_kurtka - 1)] = 1;
	if (ss.ilosc_skorzane_spodnie > 0)
		tablica_wybor[(ss.zmienna_wyboru_skorzane_spodnie - 1)] = 1;
	if (sh.ilosc_skorzany_helm > 0)
		tablica_wybor[(sh.zmienna_wyboru_skorzany_helm - 1)] = 1;
	if (zs.ilosc_zniszczone_spodnie > 0)
		tablica_wybor[(zs.zmienna_wyboru_zniszczone_spodnie - 1)] = 1;


	tablica_wybor[ilosc_przedmiotow] = 1;
	tablica_wybor[ilosc_przedmiotow + 1] = 1;
	tablica_wybor[ilosc_przedmiotow + 2] = 1;
	tablica_wybor[ilosc_przedmiotow + 3] = 1;
	tablica_wybor[ilosc_przedmiotow + 4] = 1;


	for (int i = 0; i < ilosc_przedmiotow + 5; i++)
	{
		if (tablica_wybor[i] == 1)
		{
			temporary = i;
			break;
		}
	}

	wybor_gracza = temporary + 1;
}
void zaloz_bron(string nazwa_broni)
{
	string temporary;
	temporary = bron;
	bron = nazwa_broni;


	if (temporary == ds.nazwa_dlugi_sztylet)
		ds.ilosc_dlugi_sztylet++;
	else
	{
		if (temporary == dl.nazwa_drewniana_laga)
			dl.ilosc_drewniana_laga++;
		else
		{
			if (temporary == ndr.nazwa_noz_do_roslin)
				ndr.ilosc_noz_do_roslin++;
		}
	}






	if (nazwa_broni == ds.nazwa_dlugi_sztylet)
	{
		ds.ilosc_dlugi_sztylet--;
	}
	else
	{
		if (nazwa_broni == dl.nazwa_drewniana_laga)
		{
			dl.ilosc_drewniana_laga--;
		}
		else
		{
			if (nazwa_broni == ndr.nazwa_noz_do_roslin)
			{
				ndr.ilosc_noz_do_roslin--;
			}
		}
	}
	sprawdzenie_jakie_sa_przedmioty();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
}
void zaloz_helm(string nazwa_helmu)
{
	string temporary;
	temporary = helm;
	helm = nazwa_helmu;

	if (temporary == sh.nazwa_skorzany_helm)
		sh.ilosc_skorzany_helm++;





	if (nazwa_helmu == sh.nazwa_skorzany_helm)
	{
		sh.ilosc_skorzany_helm--;
	}
	sprawdzenie_jakie_sa_przedmioty();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
}
void zaloz_napiersnik(string nazwa_napiersnika)
{
	string temporary;
	temporary = napiersnik;
	napiersnik = nazwa_napiersnika;

	if (temporary == pk.nazwa_podarta_koszula)
		pk.ilosc_podarta_koszula++;
	else
	{
		if (temporary == sk.nazwa_skorzana_kurtka)
			sk.ilosc_skorzana_kurtka++;
	}




	if (nazwa_napiersnika == pk.nazwa_podarta_koszula)
	{
		pk.ilosc_podarta_koszula--;
	}
	else
	{
		if (nazwa_napiersnika == sk.nazwa_skorzana_kurtka)
		{
			sk.ilosc_skorzana_kurtka--;
		}
	}

	sprawdzenie_jakie_sa_przedmioty();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
}
void zaloz_spodnie(string nazwa_spodni)
{
	string temporary;
	temporary = spodnie;
	spodnie = nazwa_spodni;

	if (temporary == zs.nazwa_zniszczone_spodnie)
		zs.ilosc_zniszczone_spodnie++;
	else
	{
		if (temporary == ss.nazwa_skorzane_spodnie)
			ss.ilosc_skorzane_spodnie++;
	}




	if (nazwa_spodni == zs.nazwa_zniszczone_spodnie)
	{
		zs.ilosc_zniszczone_spodnie--;
	}
	else
	{
		if (nazwa_spodni == ss.nazwa_skorzane_spodnie)
		{
			ss.ilosc_skorzane_spodnie--;
		}
	}
	sprawdzenie_jakie_sa_przedmioty();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
}
void zaloz_buty(string nazwa_butow)
{
	string temporary;
	temporary = buty;
	buty = nazwa_butow;

	if (temporary == db.nazwa_dziurawe_buty)
		db.ilosc_dziurawe_buty++;





	if (nazwa_butow == db.nazwa_dziurawe_buty)
	{
		db.ilosc_dziurawe_buty--;
	}
	sprawdzenie_jakie_sa_przedmioty();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
}
void sprawdzenie_jakie_statystyki_sa_na_przedmiotach(void)
{
	//BRONIE
	if (bron == "BRAK")
	{
		sp.atak_broni = 0;
	}
	else
	{
		if (bron == ndr.nazwa_noz_do_roslin)
		{
			sp.atak_broni = ndr.statystyka_ataku_noz_do_roslin;
		}
		else
		{
			if (bron == dl.nazwa_drewniana_laga)
			{
				sp.atak_broni = dl.statystyka_ataku_drewniana_laga;
			}
			else
			{
				if (bron == ds.nazwa_dlugi_sztylet)
				{
					sp.atak_broni = ds.statystyka_ataku_dlugi_sztylet;
				}
			}
		}
	}
	//HELMY
	if (helm == "BRAK")
	{
		sp.obrona_helmu = 0;
	}
	else
	{
		if (helm == sh.nazwa_skorzany_helm)
		{
			sp.obrona_helmu = sh.statystyka_obrony_skorzany_helm;
		}
	}
	//NAPIERSNIKI
	if (napiersnik == "BRAK")
	{
		sp.obrona_napiersnika = 0;
	}
	else
	{
		if (napiersnik == pk.nazwa_podarta_koszula)
		{
			sp.obrona_napiersnika = pk.statystyka_obrony_podarta_koszula;
		}
		else
		{
			if (napiersnik == sk.nazwa_skorzana_kurtka)
			{
				sp.obrona_napiersnika = sk.statystyka_obrony_skorzana_kurtka;
			}
		}
	}
	//SPODNIE
	if (spodnie == "BRAK")
	{
		sp.obrona_spodni = 0;
	}
	else
	{
		if (spodnie == zs.nazwa_zniszczone_spodnie)
		{
			sp.obrona_spodni = zs.statystyka_obrony_zniszczone_spodnie;
		}
		else
		{
			if (spodnie == ss.nazwa_skorzane_spodnie)
			{
				sp.obrona_spodni = ss.statystyka_obrony_skorzane_spodnie;
			}
		}
	}
	//BUTY
	if (buty == "BRAK")
	{
		sp.obrona_butow = 0;
	}
	else
	{
		if (buty == db.nazwa_dziurawe_buty)
		{
			sp.obrona_butow = db.statystyka_obrony_dziurawe_buty;
		}
	}
}
void funkcja_bron(string nazwa_przedmiot, int* ilosc_przedmiot, string opis_przedmiot, int wartosc_przedmiot, int statystyka_ataku_przedmiot)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << nazwa_przedmiot << endl;
		cout << "ILOSC: " << *ilosc_przedmiot << endl;
		cout << "OPIS: " << opis_przedmiot << endl;
		cout << "WARTOSC: " << wartosc_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "STATYSTYKI:" << endl;
		cout << "ATAK: " << statystyka_ataku_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "ZALOZ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				zaloz_bron(nazwa_przedmiot);
				break;
			}
			else
			{
				(*ilosc_przedmiot)--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (*ilosc_przedmiot == 0)
			break;
	}
}
void funkcja_helm(string nazwa_przedmiot, int* ilosc_przedmiot, string opis_przedmiot, int wartosc_przedmiot, int statystyka_obrony_przedmiot)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << nazwa_przedmiot << endl;
		cout << "ILOSC: " << *ilosc_przedmiot << endl;
		cout << "OPIS: " << opis_przedmiot << endl;
		cout << "WARTOSC: " << wartosc_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "STATYSTYKI:" << endl;
		cout << "OBRONA: " << statystyka_obrony_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "ZALOZ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				zaloz_helm(nazwa_przedmiot);
				break;
			}
			else
			{
				(*ilosc_przedmiot)--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (*ilosc_przedmiot == 0)
			break;
	}
}
void funkcja_napiersnik(string nazwa_przedmiot, int* ilosc_przedmiot, string opis_przedmiot, int wartosc_przedmiot, int statystyka_obrony_przedmiot)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << nazwa_przedmiot << endl;
		cout << "ILOSC: " << *ilosc_przedmiot << endl;
		cout << "OPIS: " << opis_przedmiot << endl;
		cout << "WARTOSC: " << wartosc_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "STATYSTYKI:" << endl;
		cout << "OBRONA: " << statystyka_obrony_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "ZALOZ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				zaloz_napiersnik(nazwa_przedmiot);
				break;
			}
			else
			{
				(*ilosc_przedmiot)--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (*ilosc_przedmiot == 0)
			break;
	}
}
void funkcja_spodnie(string nazwa_przedmiot, int* ilosc_przedmiot, string opis_przedmiot, int wartosc_przedmiot, int statystyka_obrony_przedmiot)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << nazwa_przedmiot << endl;
		cout << "ILOSC: " << *ilosc_przedmiot << endl;
		cout << "OPIS: " << opis_przedmiot << endl;
		cout << "WARTOSC: " << wartosc_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "STATYSTYKI:" << endl;
		cout << "OBRONA: " << statystyka_obrony_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "ZALOZ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				zaloz_spodnie(nazwa_przedmiot);
				break;
			}
			else
			{
				(*ilosc_przedmiot)--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (*ilosc_przedmiot == 0)
			break;
	}
}
void funkcja_buty(string nazwa_przedmiot, int* ilosc_przedmiot, string opis_przedmiot, int wartosc_przedmiot, int statystyka_obrony_przedmiot)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << nazwa_przedmiot << endl;
		cout << "ILOSC: " << *ilosc_przedmiot << endl;
		cout << "OPIS: " << opis_przedmiot << endl;
		cout << "WARTOSC: " << wartosc_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "STATYSTYKI:" << endl;
		cout << "OBRONA: " << statystyka_obrony_przedmiot << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "ZALOZ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				zaloz_buty(nazwa_przedmiot);
				break;
			}
			else
			{
				(*ilosc_przedmiot)--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (*ilosc_przedmiot == 0)
			break;
	}
}
void wyposazenie_bron(void)
{
	int wskaznik = 1;
	int sw = 0;
	if (bron == ds.nazwa_dlugi_sztylet)
		sw = 1;
	else
	{
		if (bron == dl.nazwa_drewniana_laga)
			sw = 2;
		else
		{
			if (bron == ndr.nazwa_noz_do_roslin)
				sw = 3;
		}
	}

	switch (sw)
	{
	case 1:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << ds.nazwa_dlugi_sztylet << endl;
			cout << "OPIS: " << ds.opis_dlugi_sztylet << endl;
			cout << "WARTOSC: " << ds.wartosc_dlugi_sztylet << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "ATAK: " << ds.statystyka_ataku_dlugi_sztylet << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				bron = "BRAK";
				ds.ilosc_dlugi_sztylet++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	case 2:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << dl.nazwa_drewniana_laga << endl;
			cout << "OPIS: " << dl.opis_drewniana_laga << endl;
			cout << "WARTOSC: " << dl.wartosc_drewniana_laga << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "ATAK: " << dl.statystyka_ataku_drewniana_laga << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				bron = "BRAK";
				dl.ilosc_drewniana_laga++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	case 3:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << ndr.nazwa_noz_do_roslin << endl;
			cout << "OPIS: " << ndr.opis_noz_do_roslin << endl;
			cout << "WARTOSC: " << ndr.wartosc_noz_do_roslin << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "ATAK " << ndr.statystyka_ataku_noz_do_roslin << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				bron = "BRAK";
				ndr.ilosc_noz_do_roslin++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	default:
		break;
	}
}
void wyposazenie_helm(void)
{
	int wskaznik = 1;
	int sw = 0;
	if (helm == sh.nazwa_skorzany_helm)
		sw = 1;


	switch (sw)
	{
	case 1:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << sh.nazwa_skorzany_helm << endl;
			cout << "OPIS: " << sh.opis_skorzany_helm << endl;
			cout << "WARTOSC: " << sh.wartosc_skorzany_helm << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << sh.statystyka_obrony_skorzany_helm << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				helm = "BRAK";
				sh.ilosc_skorzany_helm++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	default:
		break;
	}
}
void wyposazenie_napiersnik(void)
{
	int wskaznik = 1;
	int sw = 0;
	if (napiersnik == pk.nazwa_podarta_koszula)
		sw = 1;
	else
	{
		if (napiersnik == sk.nazwa_skorzana_kurtka)
			sw = 2;
	}

	switch (sw)
	{
	case 1:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << pk.nazwa_podarta_koszula << endl;
			cout << "OPIS: " << pk.opis_podarta_koszula << endl;
			cout << "WARTOSC: " << pk.wartosc_podarta_koszula << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << pk.statystyka_obrony_podarta_koszula << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				napiersnik = "BRAK";
				pk.ilosc_podarta_koszula++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	case 2:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << sk.nazwa_skorzana_kurtka << endl;
			cout << "OPIS: " << sk.opis_skorzana_kurtka << endl;
			cout << "WARTOSC: " << sk.wartosc_skorzana_kurtka << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << sk.statystyka_obrony_skorzana_kurtka << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				napiersnik = "BRAK";
				sk.ilosc_skorzana_kurtka++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	default:
		break;
	}
}
void wyposazenie_spodnie(void)
{
	int wskaznik = 1;
	int sw = 0;
	if (spodnie == zs.nazwa_zniszczone_spodnie)
		sw = 1;
	else
	{
		if (spodnie == ss.nazwa_skorzane_spodnie)
			sw = 2;
	}

	switch (sw)
	{
	case 1:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << zs.nazwa_zniszczone_spodnie << endl;
			cout << "OPIS: " << zs.opis_zniszczone_spodnie << endl;
			cout << "WARTOSC: " << zs.wartosc_zniszczone_spodnie << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << zs.statystyka_obrony_zniszczone_spodnie << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				spodnie = "BRAK";
				zs.ilosc_zniszczone_spodnie++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	case 2:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << ss.nazwa_skorzane_spodnie << endl;
			cout << "OPIS: " << ss.opis_skorzane_spodnie << endl;
			cout << "WARTOSC: " << ss.wartosc_skorzane_spodnie << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << ss.statystyka_obrony_skorzane_spodnie << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				spodnie = "BRAK";
				ss.ilosc_skorzane_spodnie++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	default:
		break;
	}
}
void wyposazenie_buty(void)
{
	int wskaznik = 1;
	int sw = 0;
	if (buty == db.nazwa_dziurawe_buty)
		sw = 1;


	switch (sw)
	{
	case 1:
		for (;;)
		{
			system("cls");

			char input;

			cout << "#############################################################" << endl;
			cout << "NAZWA: " << db.nazwa_dziurawe_buty << endl;
			cout << "OPIS: " << db.opis_dziurawe_buty << endl;
			cout << "WARTOSC: " << db.wartosc_dziurawe_buty << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "STATYSTYKI:" << endl;
			cout << "OBRONA: " << db.statystyka_obrony_dziurawe_buty << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << " > " << "ZDEJMIJ" << endl;
			cout << "#############################################################" << endl;

			input = _getch();

			if (input == 13)
			{
				buty = "BRAK";
				db.ilosc_dziurawe_buty++;
				sprawdzenie_jakie_sa_przedmioty();
				sprawdzenie_jakie_statystyki_sa_na_przedmiotach();
				break;
			}

			if (input == 27)
				break;
		}
		break;

	default:
		break;
	}
}
void funkcja_mikstura_sily(void)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << ms.nazwa_mikstura_sily << endl;
		cout << "ILOSC: " << ms.ilosc_mikstura_sily << endl;
		cout << "OPIS: " << ms.opis_mikstura_sily << endl;
		cout << "WARTOSC: " << ms.wartosc_mikstura_sily << endl;
		cout << "-------------------------------------------------------------" << endl;

		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "UZYJ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
			{
				wskaznik = 2;
			}
			else
			{
				wskaznik = 1;
			}
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				mojaPostac.sila++;

				ms.ilosc_mikstura_sily--;
				sprawdzenie_jakie_sa_przedmioty();
			}
			else
			{
				ms.ilosc_mikstura_sily--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
		{
			break;
		}

		if (ms.ilosc_mikstura_sily == 0)
		{
			break;
		}
	}
}
void funkcja_mikstura_zdrowia(void)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << mz.nazwa_mikstura_zdrowia << endl;
		cout << "ILOSC: " << mz.ilosc_mikstura_zdrowia << endl;
		cout << "OPIS: " << mz.opis_mikstura_zdrowia << endl;
		cout << "WARTOSC: " << mz.wartosc_mikstura_zdrowia << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "UZYJ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
			{
				wskaznik = 2;
			}
			else
			{
				wskaznik = 1;
			}
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				mojaPostac.zdrowieobecne = mojaPostac.zdrowieobecne + 20;
				if (mojaPostac.zdrowieobecne > mojaPostac.zdrowiecalkowite)
				{
					mojaPostac.zdrowieobecne = mojaPostac.zdrowiecalkowite;
				}

				mz.ilosc_mikstura_zdrowia--;
				sprawdzenie_jakie_sa_przedmioty();
			}
			else
			{
				mz.ilosc_mikstura_zdrowia--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
		{
			break;
		}

		if (mz.ilosc_mikstura_zdrowia == 0)
		{
			break;
		}
	}
}
void funkcja_sakiewka_ze_zlotem(void)
{
	int wskaznik = 1;
	for (;;)
	{
		system("cls");

		char input;

		cout << "#############################################################" << endl;
		cout << "NAZWA: " << szz.nazwa_sakiewka_ze_zlotem << endl;
		cout << "ILOSC: " << szz.ilosc_sakiewka_ze_zlotem << endl;
		cout << "OPIS: " << szz.opis_sakiewka_ze_zlotem << endl;
		cout << "WARTOSC: " << szz.wartosc_sakiewka_ze_zlotem << endl;
		cout << "-------------------------------------------------------------" << endl;
		if (wskaznik == 1)
		{
			cout << " > ";
		}
		cout << "UZYJ" << endl;
		if (wskaznik == 2)
		{
			cout << " > ";
		}
		cout << "WYRZUC" << endl;
		cout << "#############################################################" << endl;

		input = _getch();

		if (input == 'w' || input == 's')
		{
			if (wskaznik == 1)
				wskaznik = 2;
			else
				wskaznik = 1;
		}

		if (input == 13)
		{
			if (wskaznik == 1)
			{
				srand(time(NULL));
				int a = 50;
				int b = 70;
				int x = 0;

				x = a + rand() % (b - a + 1);

				zloto = zloto + x;

				szz.ilosc_sakiewka_ze_zlotem--;
				sprawdzenie_jakie_sa_przedmioty();
			}
			else
			{
				szz.ilosc_sakiewka_ze_zlotem--;
				sprawdzenie_jakie_sa_przedmioty();
			}
		}

		if (input == 27)
			break;

		if (szz.ilosc_sakiewka_ze_zlotem == 0)
			break;
	}
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++POSTAÆ+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void wypiszpostac(Postac**)
{
    system("cls");
    cout << "#############################################################" << endl << "POSTAC:" << endl;
    cout << endl;
    cout << "Imie: " << mojaPostac.imie;
    cout << endl;
    cout << "Zdrowie = " << mojaPostac.zdrowieobecne << "/" << mojaPostac.zdrowiecalkowite << endl;
    cout << "Poziom = " << poziom << endl;
    cout << "Doswiadczenie = " << doswiadczenie << endl;
    cout << endl;
    cout << "STATYSTYKI:" << endl;
    cout << "Sila = " << mojaPostac.sila << endl;
    cout << "Inteligencja = " << mojaPostac.inteligencja << endl;
    cout << "#############################################################" << endl;

    for (;;)
    {
        int input;
        input = _getch();

        if (input == 27)
        {
            break;
        }
    }
}
void zwiekszenie_statystyk(void)
{

    int a = 1;
    int b = 2;
    int x = 0;

    x = a + rand() % (b - a + 1);
    mojaPostac.sila = mojaPostac.sila + x;
    cout << "Sila + " << x << endl;

    x = a + rand() % (b - a + 1);
    mojaPostac.inteligencja = mojaPostac.inteligencja + x;
    cout << "Inteligencja + " << x << endl;

    a = 7;
    b = 10;

    x = a + rand() % (b - a + 1);
    mojaPostac.zdrowiecalkowite = mojaPostac.zdrowiecalkowite + x;
    mojaPostac.zdrowieobecne = mojaPostac.zdrowieobecne + x;
    cout << "Zdrowie + " << x << endl;
}
void obliczPoziom(void)
{
    for (;;)
    {
        if ((doswiadczenie / (p * 10)) >= 1)
        {
            system("cls");
            poziom++;
            doswiadczenie = doswiadczenie - (p * 10);
            cout << "Gratulacje, Twoj poziom wzrosl!" << endl << "Poziom = " << poziom << endl << endl;
            zwiekszenie_statystyk();
            system("pause");
            cout << endl;
            p++;
        }
        else
        {
            break;
        }
    }
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++PORUSZANIE SIÊ PO MAPIE++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void wypisz_tab(char tab[])
{
	system("cls");

	tab[pozycja_postaci] = '*';

	cout << tab;
}
void idz_w_gore(char tab[])
{
	system("cls");

	pozycja_postaci = pozycja_postaci - 138;

	if (pozycja_postaci >= 0 && pozycja_postaci <= rozmiar && tab[pozycja_postaci] == ' ')
	{
		if (pozycja_postaci >= 0 && pozycja_postaci <= 137)
		{
			ktora_tablica = 2;
			tab[pozycja_postaci + 138] = ' ';
			pozycja_postaci = pozycja_postaci + 6210;
		}
		else
		{
			tab[pozycja_postaci + 138] = ' ';
			tab[pozycja_postaci] = '*';
		}
	}
	else
	{
		pozycja_postaci = pozycja_postaci + 138;
	}
}
void idz_w_dol(char tab[])
{
	system("cls");

	pozycja_postaci = pozycja_postaci + 138;

	if (pozycja_postaci >= 0 && pozycja_postaci <= rozmiar && tab[pozycja_postaci] == ' ')
	{
		if (pozycja_postaci >= 6347 && pozycja_postaci <= 6485)
		{
			if (ktora_tablica == 2)
			{
				ktora_tablica = 1;
				tab[pozycja_postaci - 138] = ' ';
				pozycja_postaci = pozycja_postaci - 6210;
			}
			else
			{
				if (ktora_tablica == 3)
				{
					system("cls");
					cout << "Gratulacje! Uciekles z lochu." << endl;
					wygrana = 1;
				}
			}
		}
		else
		{
			tab[pozycja_postaci - 138] = ' ';
			tab[pozycja_postaci] = '*';
		}
	}
	else
	{
		pozycja_postaci = pozycja_postaci - 138;
	}
}
void idz_w_lewo(char tab[])
{
	system("cls");

	pozycja_postaci = pozycja_postaci - 1;

	if (pozycja_postaci >= 0 && pozycja_postaci <= rozmiar && tab[pozycja_postaci] == ' ')
	{
		if (pozycja_postaci % 138 == 0)
		{
			ktora_tablica = 3;
			tab[pozycja_postaci + 1] = ' ';
			pozycja_postaci = pozycja_postaci + 135;
		}
		else
		{
			tab[pozycja_postaci + 1] = ' ';
			tab[pozycja_postaci] = '*';
		}
	}
	else
	{
		pozycja_postaci = pozycja_postaci + 1;
	}
}
void idz_w_prawo(char tab[])
{
	system("cls");

	pozycja_postaci = pozycja_postaci + 1;

	if (pozycja_postaci >= 0 && pozycja_postaci <= rozmiar && tab[pozycja_postaci] == ' ')
	{
		if ((pozycja_postaci - 136) % 138 == 0)
		{
			ktora_tablica = 2;
			tab[pozycja_postaci - 1] = ' ';
			pozycja_postaci = pozycja_postaci - 135;
		}
		else
		{
			tab[pozycja_postaci - 1] = ' ';
			tab[pozycja_postaci] = '*';
		}
	}
	else
	{
		pozycja_postaci = pozycja_postaci - 1;
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++ZBIERANIE PRZEDMIOTÓW++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void zbieranie_tab1(void)
{
	if (tab1[pozycja_postaci - 1] == '$' || tab1[pozycja_postaci + 1] == '$' || tab1[pozycja_postaci - 138] == '$' || tab1[pozycja_postaci + 138] == '$')
	{
		if (pozycja_postaci - 1 == 445 || pozycja_postaci + 1 == 445 || pozycja_postaci - 138 == 445 || pozycja_postaci + 138 == 445)
		{
			ndr.ilosc_noz_do_roslin++;
			if (pozycja_postaci - 1 == 445)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 445)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 445)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 445)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 2355 || pozycja_postaci + 1 == 2355 || pozycja_postaci - 138 == 2355 || pozycja_postaci + 138 == 2355)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 2355)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 2355)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 2355)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 2355)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 4488 || pozycja_postaci + 1 == 4488 || pozycja_postaci - 138 == 4488 || pozycja_postaci + 138 == 4488)
		{
			dl.ilosc_drewniana_laga++;
			if (pozycja_postaci - 1 == 4488)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 4488)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 4488)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 4488)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 4495 || pozycja_postaci + 1 == 4495 || pozycja_postaci - 138 == 4495 || pozycja_postaci + 138 == 4495)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 4495)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 4495)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 4495)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 4495)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 670 || pozycja_postaci + 1 == 670 || pozycja_postaci - 138 == 670 || pozycja_postaci + 138 == 670)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 670)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 670)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 670)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 670)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 3020 || pozycja_postaci + 1 == 3020 || pozycja_postaci - 138 == 3020 || pozycja_postaci + 138 == 3020)
		{
			db.ilosc_dziurawe_buty++;
			if (pozycja_postaci - 1 == 3020)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 3020)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 3020)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 3020)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 5154 || pozycja_postaci + 1 == 5154 || pozycja_postaci - 138 == 5154 || pozycja_postaci + 138 == 5154)
		{
			szz.ilosc_sakiewka_ze_zlotem++;
			if (pozycja_postaci - 1 == 5154)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 5154)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 5154)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 5154)
				tab1[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 5163 || pozycja_postaci + 1 == 5163 || pozycja_postaci - 138 == 5163 || pozycja_postaci + 138 == 5163)
		{
			ms.ilosc_mikstura_sily++;
			if (pozycja_postaci - 1 == 5163)
				tab1[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 5163)
				tab1[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 5163)
				tab1[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 5163)
				tab1[pozycja_postaci + 138] = ' ';
		}
	}
}
void zbieranie_tab2(void)
{
	if (tab2[pozycja_postaci - 1] == '$' || tab2[pozycja_postaci + 1] == '$' || tab2[pozycja_postaci - 138] == '$' || tab2[pozycja_postaci + 138] == '$')
	{
		if (pozycja_postaci - 1 == 2163 || pozycja_postaci + 1 == 2163 || pozycja_postaci - 138 == 2163 || pozycja_postaci + 138 == 2163)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 2163)
				tab2[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 2163)
				tab2[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 2163)
				tab2[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 2163)
				tab2[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 3632 || pozycja_postaci + 1 == 3632 || pozycja_postaci - 138 == 3632 || pozycja_postaci + 138 == 3632)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 3632)
				tab2[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 3632)
				tab2[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 3632)
				tab2[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 3632)
				tab2[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 5931 || pozycja_postaci + 1 == 5931 || pozycja_postaci - 138 == 5931 || pozycja_postaci + 138 == 5931)
		{
			ss.ilosc_skorzane_spodnie++;
			if (pozycja_postaci - 1 == 5931)
				tab2[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 5931)
				tab2[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 5931)
				tab2[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 5931)
				tab2[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 6345 || pozycja_postaci + 1 == 6345 || pozycja_postaci - 138 == 6345 || pozycja_postaci + 138 == 6345)
		{
			sk.ilosc_skorzana_kurtka++;
			if (pozycja_postaci - 1 == 6345)
				tab2[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 6345)
				tab2[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 6345)
				tab2[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 6345)
				tab2[pozycja_postaci + 138] = ' ';
		}
	}
}
void zbieranie_tab3(void)
{
	if (tab3[pozycja_postaci - 1] == '$' || tab3[pozycja_postaci + 1] == '$' || tab3[pozycja_postaci - 138] == '$' || tab3[pozycja_postaci + 138] == '$')
	{
		if (pozycja_postaci - 1 == 648 || pozycja_postaci + 1 == 648 || pozycja_postaci - 138 == 648 || pozycja_postaci + 138 == 648)
		{
			sh.ilosc_skorzany_helm++;
			if (pozycja_postaci - 1 == 648)
				tab3[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 648)
				tab3[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 648)
				tab3[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 648)
				tab3[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 2956 || pozycja_postaci + 1 == 2956 || pozycja_postaci - 138 == 2956 || pozycja_postaci + 138 == 2956)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 2956)
				tab3[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 2956)
				tab3[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 2956)
				tab3[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 2956)
				tab3[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 2658 || pozycja_postaci + 1 == 2658 || pozycja_postaci - 138 == 2658 || pozycja_postaci + 138 == 2658)
		{
			mz.ilosc_mikstura_zdrowia++;
			if (pozycja_postaci - 1 == 2658)
				tab3[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 2658)
				tab3[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 2658)
				tab3[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 2658)
				tab3[pozycja_postaci + 138] = ' ';
		}
		else if (pozycja_postaci - 1 == 5004 || pozycja_postaci + 1 == 5004 || pozycja_postaci - 138 == 5004 || pozycja_postaci + 138 == 5004)
		{
			ds.ilosc_dlugi_sztylet++;
			if (pozycja_postaci - 1 == 5004)
				tab3[pozycja_postaci - 1] = ' ';
			else if (pozycja_postaci + 1 == 5004)
				tab3[pozycja_postaci + 1] = ' ';
			else if (pozycja_postaci - 138 == 5004)
				tab3[pozycja_postaci - 138] = ' ';
			else if (pozycja_postaci + 138 == 5004)
				tab3[pozycja_postaci + 138] = ' ';
		}
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++WALKA++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int losowanieLiczby(int zakresL, int zakresP)
{
    return zakresL + rand() % (zakresP - zakresL + 1);
}
void wyswietlStatyPostac(Postac* mojaPostac)
{
    cout << endl;
    cout << mojaPostac->imie << endl;
    cout << "1. Sila: " << mojaPostac->sila << endl;
    cout << "2. Zrecznosc: " << mojaPostac->zrecznosc << endl;
    cout << "3. Inteligencja: " << mojaPostac->inteligencja << endl;
    cout << "4. Zdrowie: " << mojaPostac->zdrowieobecne << "/" << mojaPostac->zdrowiecalkowite << endl;
}
void wyswietlStatyPrzeciwnik(szablonPrzeciwnik* przeciwnik)
{
    cout << endl;
    cout << przeciwnik->imie << endl;
    cout << "1. Sila: " << przeciwnik->sila << endl;
    cout << "2. Zrecznosc: " << przeciwnik->zrecznosc << endl;
    cout << "3. Inteligencja: " << przeciwnik->inteligencja << endl;
    cout << "4. Zdrowie: " << przeciwnik->zdrowieobecne << "/" << przeciwnik->zdrowiecalkowite << endl;
}
int trafienieGracz(Postac* mojaPostac, szablonPrzeciwnik* przeciwnik, int wybor)
{
    double szansaTrafienia = 0;
    int sila = mojaPostac->sila; //zmienne lokalne zeby latwiej sie czytalo
    int zrecznosc = mojaPostac->zrecznosc;
    int inteligencja = mojaPostac->inteligencja;
    if (wybor == 1)
    {
        szansaTrafienia = ((1.0 * sila + 0.5 * zrecznosc + 0.1 * inteligencja) / (przeciwnik->sila + sila + zrecznosc));
    }
    else if (wybor == 2)
    {
        szansaTrafienia = ((0.5 * sila + 1.0 * zrecznosc + 0.1 * inteligencja) / (przeciwnik->zrecznosc + sila + zrecznosc));
    }
    else if (wybor == 3)
    {
        szansaTrafienia = (1.0 * inteligencja + 0.1 * sila + 0.5 * zrecznosc) / (przeciwnik->inteligencja + inteligencja + zrecznosc);
    }
    szansaTrafienia *= 100;

    if (losowanieLiczby(0, 100) <= szansaTrafienia)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int trafieniePrzeciwnik(Postac* mojaPostac, szablonPrzeciwnik* przeciwnik)
{
    double szansaTrafienia; //szansa powodzenia ataku
    int sila = przeciwnik->sila; //zmienne lokalne zeby latwiej sie czytalo
    int zrecznosc = przeciwnik->zrecznosc;
    int inteligencja = przeciwnik->inteligencja;

    if (sila > zrecznosc && sila > inteligencja) //wykonaj silny atak gdy najwieksza jest sila
    {
        szansaTrafienia = ((1.0 * sila + 0.5 * zrecznosc + 0.1 * inteligencja) / (mojaPostac->sila + sila + zrecznosc));
    }
    else if (zrecznosc > inteligencja) //szybki gdy zrecznosc
    {
        szansaTrafienia = ((0.5 * sila + 1.0 * zrecznosc + 0.1 * inteligencja) / (mojaPostac->zrecznosc + sila + zrecznosc));
    }
    else //magiczny gdy inteligencja
    {
        szansaTrafienia = ((1.0 * inteligencja + 0.1 * sila + 0.5 * zrecznosc) / (mojaPostac->inteligencja + inteligencja + zrecznosc));
    }
    szansaTrafienia *= 100;
    if (losowanieLiczby(0, 100) <= szansaTrafienia) //jesli liczba jest z tego przedzialu to trafil
    {
        return true;
    }
    else
    {
        return false;
    }
}
void walka(Postac* mojaPostacWalka, statystyki_przedmiotow* spWalka, szablonPrzeciwnik* przeciwnikWalka)
{
    while (mojaPostacWalka->zdrowieobecne > 0 && przeciwnikWalka->zdrowieobecne > 0)
    {
        system("cls");
        wyswietlStatyPostac(mojaPostacWalka);
        wyswietlStatyPrzeciwnik(przeciwnikWalka);
        cout << endl;

        cout << "WYBOR" << endl;
        cout << "1. Atak silny (sila, szansa " << 100 * ((1.0 * mojaPostacWalka->sila + 0.5 * mojaPostacWalka->zrecznosc + 0.1 * mojaPostacWalka->inteligencja) / (przeciwnikWalka->sila + mojaPostacWalka->sila + mojaPostacWalka->zrecznosc)) << "%)" << endl;
        cout << "2. Atak szybki (zrecznosc, szansa " << 100 * ((0.5 * mojaPostacWalka->sila + 1.0 * mojaPostacWalka->zrecznosc + 0.1 * mojaPostacWalka->inteligencja) / (przeciwnikWalka->zrecznosc + mojaPostacWalka->sila + mojaPostacWalka->zrecznosc))
            << "%)" << endl;
        cout << "3. Magiczny strzal (inteligencja, szansa "
            << 100 * (1.0 * mojaPostacWalka->inteligencja + 0.1 * mojaPostacWalka->sila + 0.5 * mojaPostacWalka->zrecznosc) / (mojaPostacWalka->inteligencja + mojaPostacWalka->inteligencja + mojaPostacWalka->zrecznosc) << "%)" << endl;
        int KP = spWalka->obrona_butow + spWalka->obrona_helmu + spWalka->obrona_napiersnika + spWalka->obrona_spodni;
        int wybor;
        cin >> wybor;

        if (trafienieGracz(mojaPostacWalka, przeciwnikWalka, wybor))
        {
            if (wybor == 1)
            {
                przeciwnikWalka->zdrowieobecne -= (mojaPostacWalka->sila + spWalka->atak_broni);
            }
            else if (wybor == 2)
            {
                przeciwnikWalka->zdrowieobecne -= (mojaPostacWalka->zrecznosc + spWalka->atak_broni);
            }
            else if (wybor == 3)
            {
                przeciwnikWalka->zdrowieobecne -= (mojaPostacWalka->inteligencja + (int)0.5 * spWalka->atak_broni);
            }
        }
        if (trafieniePrzeciwnik(mojaPostacWalka, przeciwnikWalka) && przeciwnikWalka->zdrowieobecne > 0)
        {
            int sila = przeciwnikWalka->sila; //zmienne lokalne zeby latwiej sie czytalo
            int zrecznosc = przeciwnikWalka->zrecznosc;
            int inteligencja = przeciwnikWalka->inteligencja;

            if (sila > zrecznosc && sila > inteligencja) //wykonaj silny atak gdy najwieksza jest sila
            {
                mojaPostacWalka->zdrowieobecne -= (int)((1.0 * sila + 0.5 * zrecznosc + 0.1 * inteligencja) / (KP + 1));
            }
            else if (zrecznosc > inteligencja) //szybki gdy zrecznosc
            {
                mojaPostacWalka->zdrowieobecne -= (int)((0.8 * sila + 1.2 * zrecznosc + 0.1 * inteligencja) / (KP + 1));
            }
            else //magiczny gdy inteligencja
            {
                mojaPostacWalka->zdrowieobecne -= (int)((1.0 * inteligencja + 0.1 * sila + 0.5 * zrecznosc) / (KP + 1));
            }
        }
    }
    if (mojaPostacWalka->zdrowieobecne <= 0)
    {
        wyswietlStatyPostac(mojaPostacWalka);
        cout << "Koniec gry";
        exit(-1);
    }
    else cout << "Wygrales";
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{
	srand(time(NULL));

	szablonPrzeciwnik Goblin; //szablon potwora Goblin
	{
		Goblin.zdrowiecalkowite = 40;
		Goblin.zdrowieobecne = 40;
		Goblin.sila = 10;
		Goblin.zrecznosc = 12;
		Goblin.imie = "Goblin";

	}
	szablonPrzeciwnik Boss;
	{
		Boss.zdrowiecalkowite = 100;
		Boss.zdrowieobecne = 100;
		Boss.sila = 15;
		Boss.zrecznosc = 14;
		Boss.imie = "Boss";
	}

	nadaj_zmienne_wyboru();
	sprawdzenie_jakie_statystyki_sa_na_przedmiotach();


	cout << "Wpisz swoje imie: ";
	getline(cin, mojaPostac.imie);
	cout << endl << "Budzisz sie w ciemnym lochu, jedyne co masz przy sobie to podarte ubrania. Twoim jedynym celem jest wydostac sie z tego okropnego miejsca" << endl;
	system("pause");

	char input;

	for (;;)
	{
		if (ktora_tablica == 1 && (tab1[pozycja_postaci - 1] == '?' || tab1[pozycja_postaci + 1] == '?' || tab1[pozycja_postaci - 138] == '?' || tab1[pozycja_postaci + 138] == '?'))
		{
			przeciwnik = Goblin;
			walka(&mojaPostac, &sp, &przeciwnik);
			if (tab1[pozycja_postaci - 1] == '?') tab1[pozycja_postaci - 1] = ' ';
			else if (tab1[pozycja_postaci + 1] == '?') tab1[pozycja_postaci + 1] = ' ';
			else if (tab1[pozycja_postaci - 138] == '?') tab1[pozycja_postaci - 138] = ' ';
			else if (tab1[pozycja_postaci + 138] == '?') tab1[pozycja_postaci = 138] = ' ';
		}
		if (ktora_tablica == 1)
		{
			wypisz_tab(tab1);
		}
		else
		{
			if (ktora_tablica == 2 && (tab2[pozycja_postaci - 1] == '?' || tab2[pozycja_postaci + 1] == '?' || tab2[pozycja_postaci - 138] == '?' || tab2[pozycja_postaci + 138] == '?'))
			{
				przeciwnik = Goblin;
				walka(&mojaPostac, &sp, &przeciwnik);
				if (tab2[pozycja_postaci - 1] == '?') tab2[pozycja_postaci - 1] = ' ';
				else if (tab2[pozycja_postaci + 1] == '?') tab2[pozycja_postaci + 1] = ' ';
				else if (tab2[pozycja_postaci - 138] == '?') tab2[pozycja_postaci - 138] = ' ';
				else if (tab2[pozycja_postaci + 138] == '?') tab2[pozycja_postaci + 138] = ' ';
			}
			if (ktora_tablica == 2)
			{
				wypisz_tab(tab2);
			}


			else
			{
				if (ktora_tablica == 3 && (tab3[pozycja_postaci - 1] == '?' || tab3[pozycja_postaci + 1] == '?' || tab3[pozycja_postaci - 138] == '?' || tab3[pozycja_postaci + 138] == '?'))
				{
					przeciwnik = Goblin;
					walka(&mojaPostac, &sp, &przeciwnik);
					if (tab3[pozycja_postaci - 1] == '?') tab3[pozycja_postaci - 1] = ' ';
					else if (tab3[pozycja_postaci + 1] == '?') tab3[pozycja_postaci + 1] = ' ';
					else if (tab3[pozycja_postaci - 138] == '?') tab3[pozycja_postaci - 138] = ' ';
					else if (tab3[pozycja_postaci + 138] == '?') tab3[pozycja_postaci = 138] = ' ';
				}
				if (ktora_tablica == 3 && (tab3[pozycja_postaci - 1] == 'B' || tab3[pozycja_postaci + 1] == 'B' || tab3[pozycja_postaci - 138] == 'B' || tab3[pozycja_postaci + 138] == 'B'))
				{
					przeciwnik = Boss;
					walka(&mojaPostac, &sp, &przeciwnik);
					if (tab3[pozycja_postaci - 1] == 'B') tab3[pozycja_postaci - 1] = ' ';
					else if (tab3[pozycja_postaci + 1] == 'B') tab3[pozycja_postaci + 1] = ' ';
					else if (tab3[pozycja_postaci - 138] == 'B') tab3[pozycja_postaci - 138] = ' ';
					else if (tab3[pozycja_postaci + 138] == 'B') tab3[pozycja_postaci = 138] = ' ';
					char tab4[rozmiar] = "-----------------------------------------------------------------------------------------------------------------------------------------\xA|                                                                     |##########################|                                       \xA|                                                                     |##########################|                                       \xA|                                                                     |--------------------------|                                       \xA|                                                                     |                          |                                       \xA|                                                                     |                          |          -----------------------------\xA|                                                                     |                          |          |###########################|\xA|                                                                     |                          |          |###########################|\xA|            ---------------------------------------------                                       |          |###########################|\xA|            |###########################################|                                       |          -----------------------#####|\xA|            |###########################################|                                       |                                |#####|\xA|            |###########################################|            |                          |                                |#####|\xA|            |###########################################|            |                          |                                |#####|\xA|            |###########################################|            |---------------------------------------------------        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            |###########################################|            |##################################################|        |#####|\xA|            -------------------------###################|            ----------------------------------------------------        |#####|\xA|                                    |###################|                                                                        |#####|\xA|                                    |###################|                                                                        |#####|\xA|                                    |###################|                                                                        |#####|\xA|                                    |###################--------------------------------------------------------------------------#####|\xA|-----------------------             |##################################################################################################|\xA|######################|             |############################################---------------------------------------------------###|\xA|######################|             |############################################|                                                 |###|\xA|######################|             |############################################|                                                 |###|\xA|######################|             |#######--------------------------------------                                                 |###|\xA|-----------------------             |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|                                    |#######|                                                                                      |###|\xA|         ----------------------------#######|           --------------------------                                                 |###|\xA|         |##################################|           |########################|                                                 |###|\xA|         -----------------------------------|           |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################|                                                 |###|\xA|                                                        |########################----------------------       ---------------------|###|\xA|                                                        |#############################################|       |########################|\xA--------------------------------------------------------------------------------------------------------       --------------------------";
					for (int i = 0; i < rozmiar; i++)
					{
						tab3[i] = tab4[i];
					}
				}
				if (ktora_tablica == 3)
				{
					wypisz_tab(tab3);
				}
			}
		}


		input = _getch();

		if (input == 13)
		{
			if (ktora_tablica == 1)
			{
				zbieranie_tab1();
			}
			else
			{
				if (ktora_tablica == 2)
				{
					zbieranie_tab2;
				}
				else
				{
					if (ktora_tablica == 3)
					{
						zbieranie_tab3;
					}
				}
			}
		}

		if (input == 'w')
		{
			if (ktora_tablica == 1)
			{
				idz_w_gore(tab1);
			}
			else
			{
				if (ktora_tablica == 2)
				{
					idz_w_gore(tab2);
				}
				else
				{
					if (ktora_tablica == 3)
					{
						idz_w_gore(tab3);
					}
				}
			}
		}

		if (input == 's')
		{
			if (ktora_tablica == 1)
			{
				idz_w_dol(tab1);
			}
			else
			{
				if (ktora_tablica == 2)
				{
					idz_w_dol(tab2);
				}
				else
				{
					if (ktora_tablica == 3)
					{
						idz_w_dol(tab3);
					}
				}
			}

			if (wygrana == 1)
			{
				return 0;
			}
		}

		if (input == 'd')
		{
			if (ktora_tablica == 1)
			{
				idz_w_prawo(tab1);
			}
			else
			{
				if (ktora_tablica == 2)
				{
					idz_w_prawo(tab2);
				}
				else
				{
					if (ktora_tablica == 3)
					{
						idz_w_prawo(tab3);
					}
				}
			}
		}

		if (input == 'a')
		{
			if (ktora_tablica == 1)
			{
				idz_w_lewo(tab1);
			}
			else
			{
				if (ktora_tablica == 2)
				{
					idz_w_lewo(tab2);
				}
				else
				{
					if (ktora_tablica == 3)
					{
						idz_w_lewo(tab3);
					}
				}
			}
		}

		if (input == 'e')
		{
			ekwipunek();
		}

		if (input == 'p')
		{
			wypiszpostac(NULL);
		}

		zwiekszenie_statystyk();
		obliczPoziom();
	}
}


//INSTRUKCJA DODAWANIA KOLEJNYCH PRZEDMIOTÓW

//zwiêksz iloœæ przedmiotów
//wszystko ma byæ alfabetycznie!!!!
//dodaj klasê przedmiotu pomiêdzy istniej¹ce klasy
//dodaj funkcjê przedmiotu pod klas¹ jeœli to przedmiot specjalny
//dodaj w funkcji nadaj_zmienne_wyboru pomiêdzy istniej¹ce wiesze wiersz z odpowiednim przedmiotem i linijkê i++
//dodaj funkcjê wypisania odpowiedniego przedmiotu pomiêdzy istniej¹ce linijki w funkcji wypisz_ekwipunek
//w funkcji wybierz_przedmiot wpisz funkcjê dla odpowiedniego typu przedmiotu z odpowiednim warunkiem w najbardziej zewnêtrzym miejscu
//w funkcjê sprawdzenie_jakie_sa_przedmioty wpisz tam gdzie s¹ ify odpowiednie dwie linijki z tym przedmiotem
//zaleznie od tego czy to bron czy co, to do odpowiedniej funkcji zakladania i funkcji wyposarzenia dodac odpowiednie warukni
//zale¿nie od tego jaki to typ przedmiotu w odpowiednim miejscu funkcji sprawdzenie_jakie_statystyki_sa_na_przedmiotach dodaæ w zewnêtrznym miejscu else if