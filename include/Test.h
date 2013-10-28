#ifndef TEST_H
#define TEST_H
#include <string>

using namespace std;

class Test
{
    public:
//        Test::Test();
        Test(int, int, double, std::string);
        //: test1 (t1), test2 (t2), test3 (t3), test4 (t4){}

        virtual ~Test();
        int Gettest1() { return test1; }
        void Settest1(int val) { test1 = val; }
        int Gettest2() { return test2; }
        void Settest2(int val) { test2 = val; }
        double Gettest3() { return test3; }
        void Settest3(double val) { test3 = val; }
        std::string Gettest4() { return test4; }
        void Settest4(std::string val) { test4 = val; }
    protected:
    private:
        int test1;
        int test2;
        double test3;
        std::string test4;
};

#endif // TEST_H
