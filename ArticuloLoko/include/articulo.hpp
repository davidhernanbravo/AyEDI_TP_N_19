#ifndef ARTICULO_HPP
#define ARTICULO_HPP

class Articulo
    {
        private:
            float costoBase;

        public:
            // Constructor.
            Articulo();
            
            // Métodos Setters y Getters.
            void SetCostoBase(float CB);
            float GetCostoBase() const;

            // Métodos para calcular los PVPs.
            float PVPMayor() const;
            float PVPDetal() const;
    };

#endif