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
#include "Tournament.h"
#include "Footballteams.h"
#include "Referee.h"
#include "Stadium.h"

using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class match {
    public:
       property Tournament^ tournament;
       property Footballteams^ TeamLocal;
       property Footballteams^ TeamVisit;
       property Stadium^ stadium;
       property Referee^ referee;
       property int date;
       property int hour;
       property String^ GolTeamLocal;
       property String^ GolTeamVisit;
       property String^ YellowTeamLocal;
       property String^ RedTeamLocal;
       property String^ YellowTeamVisit;
       property String^ RedTeamVisit;
      property Footballteams^ Footballteams;

    };

}