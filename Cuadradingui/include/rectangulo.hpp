#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Rectangulo 
    {
        private:
            float altura;
            float base;

        public:
            // Constructor por defecto.
            Rectangulo();

            // Métodos Setters y Getters.
            void SetAltura(float al);
            float GetAltura() const;

            void SetBase(float ba);
            float GetBase() const;

            // Métodos para cálculos.
            float area() const;
            float perimetro() const;
    };

#endif