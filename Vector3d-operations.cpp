#include <iostream>

using namespace std;

class Vector3d {

private:

    float x;
    float y;
    float z;


public:

    void operator-=(const Vector3d& v);
    void operator+=(const Vector3d& v);
    void operator*=(const Vector3d& v);
    void operator/=(const Vector3d& v);
    float calcScalarProduct(const Vector3d& v) const;
};



void Vector3d::operator -=(const Vector3d& v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}



void Vector3d::operator +=(const Vector3d& v) {

    x += v.x;
    y += v.y;
    z += v.z;
}



void Vector3d::operator *=(const Vector3d& v) {

    x *= v.x;
    y *= v.y;
    z *= v.z;
}



void Vector3d::operator /=(const Vector3d& v) {

    x /= v.x;
    y /= v.y;
    z /= v.z;

}

float Vector3d::calcScalarProduct(const Vector3d& v) const {

    return x * v.x + y * v.y + z * v.z;
}

int main()
{
    cout << "Hello World!\n";
}




