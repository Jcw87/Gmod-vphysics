#include "StdAfx.h"

#include "math.h"

float AngDragIntegral( float invInertia, float l, float w, float h )
{
	float w2 = w*w;
	float l2 = l*l;
	float h2 = h*h;

	return invInertia * ( (1.f/3.f)*w2*l*l2 + 0.5 * w2*w2*l + l*w2*h2 );
}

void BtMatrix_vimult(btMatrix3x3 * matrix, btVector3 * in, btVector3 * out)
{
	btScalar a = (matrix->getRow(0).getX()) * in->getX() + (matrix->getRow(1).getX()) * in->getY() + (matrix->getRow(2).getX()) * in->getZ();
	btScalar b = (matrix->getRow(0).getY()) * in->getX() + (matrix->getRow(1).getY()) * in->getY() + (matrix->getRow(2).getY()) * in->getZ();
	btScalar c = (matrix->getRow(0).getZ()) * in->getX() + (matrix->getRow(1).getZ()) * in->getY() + (matrix->getRow(2).getZ()) * in->getZ();

	out->setX(a);
	out->setY(b);
	out->setZ(c);
}

