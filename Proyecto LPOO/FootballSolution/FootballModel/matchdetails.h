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
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class matchdetails {
    public:
       property String^ GolTeamLocal;
       property String^ GolTeamVisit;
       property String^ YellowTeamLocal;
       property String^ RedTeamLocal;
       property String^ YellowTeamVisit;
       property String^ RedTeamVisit;
       property int localpoints;
       property  int visitpoints;
    };

}