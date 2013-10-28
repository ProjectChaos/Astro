#ifndef KOORD_H
#define KOORD_H


class Koord
{
    public:
        Koord();
        ~Koord();
        int getX() { return x; }
        void setX(int val) { x = val; }
        int getY() { return y; }
        void setY(int val) { y = val; }
        int getZ() { return z; }
        void setZ(int val) { z = val; }
        void setKoord(int val1, int val2, int val3) {x = val1; y = val2; z = val3;}
        int x;
        int y;
        int z;
};

#endif // KOORD_H
