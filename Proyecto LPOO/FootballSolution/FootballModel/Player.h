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

#include "person.h"
#include "Footballteams.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Player : public person {
    public:
        property   String^ Position;
        property  int Number;
        property char Status;
        property Footballteams^ footballteams;
        };
}
