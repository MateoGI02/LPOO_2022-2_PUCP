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
#include "Tournament.h"

using namespace System;

namespace FootballModel {
	[Serializable]
	public ref class Referee : public person {
		public:
			property   String^ Position;
			property   int yearexp;
			property Tournament^ tournament;
	};


}
