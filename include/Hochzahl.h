#ifndef HOCHZAHL_H
#define HOCHZAHL_H


class Hochzahl
{
    public:
        Hochzahl();
        virtual ~Hochzahl();
        double Getfaktor() { return faktor; }
        void Setfaktor(double val) { faktor = val; }
        int Getordnung() { return ordnung; }
        void Setordnung(int val) { ordnung = val; }
    protected:
    private:
        double faktor;
        int ordnung;
};

#endif // HOCHZAHL_H
