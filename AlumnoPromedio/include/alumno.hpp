#ifndef ALUMNO_HPP
#define ALUMNO_HPP

#include <string>

using namespace std;

class Alumno 
    {
        private:
            string cedula;
            string nombre;
            float nota1;
            float nota2;
            float nota3;

        public:
            // Constructor.
            Alumno();

            // Métodos Setters y Getters.
            void SetCedula(string ced);
            string GetCedula() const;

            void SetNombre(string nom);
            string GetNombre() const;

            void SetNota1(float n1);
            float GetNota1() const;

            void SetNota2(float n2);
            float GetNota2() const;

            void SetNota3(float n3);
            float GetNota3() const;

            // Métodos para cálculos.
            float NotaFinal() const;
            string AproRepro() const;
    };

#endif