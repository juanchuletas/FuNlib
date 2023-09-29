#if !defined(_FUNQC_MENU)
#define _FUNQC_MENU
#include<iostream>
#include<string>
#include "../Tools/searchelements.hpp"
const std::string mesh[] = {"Froese-Fischer", "Exponential"};
const std::string elecStrucMethod[] = {"Hartree-Fock","DFT"};
const std::string dftMethod[] = {"LDA","PBE"};
const std::string kindOfConfinement [] = {"Free", "Hard-Walls", "Soft-Walls","Harmonic-Potential"}; 
const int MAXPOLGRADE = 20;
int atomic_structure_menu(int &atom,int &charge,double &rN, int &confinement,int &method,int &dftmet, double &rC,double &wall,double &omega);
void gridMenu(int &kindOfGrid);
void menuFEM(int &NumEle, int &order, bool &lobatto);
void title();


#endif // _FUNQC_MENU
