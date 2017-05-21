#ifndef ENEMY_HPP_INCLUDED
#define ENEMY_HPP_INCLUDED

class Coordinate{
private:
    int x;
    int y;
public:
    Coordinate(int a,int b);
    ~Coordinate ();
    int get_x();
    void set_x(int x);
    int get_y();
    void set_y(int y);
    bool operator == (Coordinate b);
    Coordinate operator + (double v);
    Coordinate operator + (Coordinate b);
    Coordinate operator - (double v);
    Coordinate operator - (Coordinate b);
    Coordinate operator * (double v);
    Coordinate sum_axis (Coordinate a, double v, char axis);
    Coordinate sub_axis (Coordinate a, double v, char axis);
    Coordinate mult_axis (Coordinate a, double v, char axis);
};

#endif // ENEMY_HPP_INCLUDE
