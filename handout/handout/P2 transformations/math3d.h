//
//  VECTOR3D.h
//  StereoRendering
//
//  Created by Jose Maria Benito on 09/12/13.
//  Copyright (c) 2013 Jose Maria. All rights reserved.
//

#ifndef StereoRendering_VECTOR3D_h
#define StereoRendering_VECTOR3D_h

#define ABS(x) (x < 0 ? -(x) : (x))
#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)
#define TRUE  1
#define FALSE 0
#define ESC 27
#define PI 3.141592653589793238462643
#define DTOR            0.0174532925    // degrees to radians
#define RTOD            57.2957795      // radians to degrees


typedef struct {
    double x,y,z;
} VECTOR3D;


typedef struct {
    double r,g,b;
} COLOUR;

typedef struct {
    VECTOR3D column0;
    VECTOR3D column1;
    VECTOR3D column2;
} MATRIX3;


typedef struct {
    float m[16];
} MATRIX4;

static const COLOUR grey = {0.7,0.7,0.7};
static const COLOUR red = {1,0,0};
static const COLOUR green = {0,1,0};
static const COLOUR blue = {0,0,1};

static const COLOUR darkred = {0.6,0,0};
static const COLOUR darkgreen = {0,0.6,0};

// TODO

VECTOR3D Add(VECTOR3D a, VECTOR3D b)
{
    VECTOR3D ret;
    ret.x = a.x+b.x;
    ret.y = a.y+b.y;
    ret.z = a.z+b.z;
    return ret;
}
//
VECTOR3D Substract(VECTOR3D a, VECTOR3D b) {
	VECTOR3D ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	ret.z = a.z - b.z;
	return ret;
}

//VECTOR3D Multiply(VECTOR3D a, VECTOR3D b);
//
VECTOR3D MultiplyWithScalar(float scalar, VECTOR3D a) {
	VECTOR3D ret;
	ret.x = a.x * scalar;
	ret.y = a.y * scalar;
	ret.z = a.z * scalar;
	return ret;
}

double Magnitude(VECTOR3D a) {
	return sqrt(powf(a.x, 2) + powf(a.y, 2)+ powf(a.z, 2));
	
}

//VECTOR3D Normalize(VECTOR3D a); // DIVIDE AGAINST MAGNITUDE EACH AXIS
//
//VECTOR3D CrossProduct(VECTOR3D a, VECTOR3D b);
//
//double DotProduct(VECTOR3D a, VECTOR3D b);
//
//MATRIX3 Transpose(MATRIX3 m);
//
//VECTOR3D Transform (MATRIX3 m, VECTOR3D a);
//
//MATRIX4 InverseOrthogonalMatrix(MATRIX3 A, VECTOR3D t);


#endif
