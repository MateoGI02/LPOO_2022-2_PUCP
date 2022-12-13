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

    public ref class goals {
    public:
       property int localg;
       property int visitg;
       property String^ time;
       property String^ stricker;
    };
}
