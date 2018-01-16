#include "IOpenGL.h" 
#include "ClassIdentifiers.h"

IOpenGL* IOpenGL::GetInstance(int classIdentifer)
{
	IOpenGL *iOpenGL = nullptr;
	switch (classIdentifer)
	{
	case LIGHTS:
		iOpenGL = new Lights();
		break;
	}

	return iOpenGL;
}