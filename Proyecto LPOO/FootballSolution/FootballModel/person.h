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
    public ref class person {
    public:
        property String^ Number;
        property  String^ DocNumber;
        property  String^ Name;
        property  String^ Surname;
        property  int Age;
        property  String^  Nationality;
        property char Status;
        property  int Id;
        array <Byte>^ Photo;
    };

}



