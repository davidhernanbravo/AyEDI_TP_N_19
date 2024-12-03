#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

using namespace std;

class Persona 
    {
        private:
            string nombre;
            int dia, mes, anio;         // Fecha de nacimiento.
            int diaActual, mesActual, anioActual; // Fecha actual.

        public:
            // Constructor por defecto.
            Persona();

            // Métodos para establecer y obtener el nombre.
            void SetNombre(string nom);
            string GetNombre() const;

            // Métodos para establecer y obtener la fecha de nacimiento.
            void SetDia(int d);
            int GetDia() const;
            void SetMes(int m);
            int GetMes() const;
            void SetAnio(int a);
            int GetAnio() const;

            // Métodos para establecer y obtener la fecha actual.
            void SetDiaActual(int da);
            int GetDiaActual() const;
            void SetMesActual(int ma);
            int GetMesActual() const;
            void SetAnioActual(int aa);
            int GetAnioActual() const;

            // Método para calcular la edad.
            int obtenerEdad() const;
    };

#endif