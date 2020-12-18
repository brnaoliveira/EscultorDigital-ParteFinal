#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>
using namespace std;
struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};
class Sculptor {
protected:
    int nx,ny,nz; // Dimensions
    float r,g,b,a; // Current drawing color
    Voxel ***v;// 3D matrix

public:
  Sculptor(int _nx, int _ny, int _nz); // OK
  ~Sculptor(); // OK
  void setColor(float _r, float _g, float _b, float alpha); // OK
  void putVoxel(int x, int y, int z); // OK
  void cutVoxel(int x, int y, int z); // OK
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); // OK
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); // OK
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); //OK
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); //OK
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // OK
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // OK
  void writeOFF(string filename);
};
#endif // SCULPTOR_H
