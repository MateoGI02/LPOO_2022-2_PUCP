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
#include "Organizer.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Tournament {
    public:
        property String^ NameTournament;
        property int Id;
        property char Status;
        property int numteams;
        property String^ Inidate;
        property String^ Enddate;
        property String^ Premio;
        property String^ IniGame;
        array <Byte>^ Photo;
        property Organizer^ Organizer;
    };

}