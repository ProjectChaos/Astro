#ifndef HOCHZAHL_H
#define HOCHZAHL_H


class Hochzahl
{
    public:
        Hochzahl();
        virtual ~Hochzahl();
        double getFaktor() { return faktor; }
        void SstFaktor(double val) { faktor = val; }
        int getOrdnung() { return ordnung; }
        void SetOrdnung(int val) { ordnung = val; }


        double faktor;
        int ordnung;
};

#endif // HOCHZAHL_H
