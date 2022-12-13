/*
    Proyecto LPOO_2022-2 Grupo 3 Horario 07M1
    Sistema de generación de campeonatos
    Integrantes:
     -Mateo Guerrero Isuiza
     -Bryan Steven Cruz Sanchez
     -Jhoan Alexander Huaringa Chagray
     -Joshua Mijail Lizarbe Saavedra
 */

#pragma once
#include "DT.h"
#include "Tournament.h"

using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Footballteams {
    public:

        property int Id;
        property String^ NameTeam;
        property int numplayers;
        array <Byte>^ Photo;
        property char Status;
        property Tournament^ Tournament;
        property DT^ DT;
        property int pj;
        property int pg;
        property int pp;
        property int pe;
        property int puntos;
        property int Goals;
        property int GoalsL;
        property int GoalsV;
        property int TarjetasA;
        property int TarjetasR;
        property int TarjetasL;
        property int TarjetasV;
        property int TarjetasLR;
        property int TarjetasVR;
      
    };
}
