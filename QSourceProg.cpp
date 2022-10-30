#include "QSourceProg.h"

int QSourceProg::get_i()
{
    return i;
}

int QSourceProg::get_m()
{
    return m;
}

int* QSourceProg::get_pm()
{
    return &m;
}

int* QSourceProg::get_pi()
{
    return &i;
}

int QSourceProg::get_aKolvots()
{
    return a.kolvots;
}
int* QSourceProg::get_paKolvots()
{
    return &a.kolvots;
}
int QSourceProg::get_adlina()
{
    return a.dlina;
}
int* QSourceProg::get_padlina()
{
    return &a.dlina;
}

int QSourceProg::get_r_dlina()
{
    return r_dlina;
}

int* QSourceProg::get_r_pdlina()
{
    return &r_dlina;
}

int QSourceProg::get_i1()
{
    return i1;
}

int* QSourceProg::get_pi1()
{
    return &i1;
}

int QSourceProg::get_j()
{
    return j;
}

int* QSourceProg::get_pj()
{
    return &j;
}

GEN_PSP QSourceProg::get_a()
{
    return a;
}

PGEN_PSP QSourceProg::get_pa()
{
    return &a;
}

char* QSourceProg::get_b()
{
    return b;
}

void QSourceProg::set_i(int iNewi)
{
    i=iNewi;
}

void QSourceProg::set_m(int iNewM)
{
    m=iNewM;
}

void QSourceProg::set_r_dlina(int iNewR_dlina)
{
    r_dlina=iNewR_dlina;
}

void QSourceProg::set_i1(int iNewI1)
{
    i1=iNewI1;
}

void QSourceProg::set_j(int iNewJ)
{
    j=iNewJ;
}

// метод устанавливающий a.dlina
void QSourceProg::set_aDlina(int newA_dlina)
{
    a.dlina = newA_dlina;
}

void QSourceProg::set_aKolvots(int newKolvots)
{
    a.kolvots = newKolvots;
}

char* QSourceProg::get_aTs()
{
    return a.ts;
}
