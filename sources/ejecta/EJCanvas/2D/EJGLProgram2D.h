/****************************************************************************

****************************************************************************/

#ifndef __EJ_GL_PROGRAM_2D_H__
#define __EJ_GL_PROGRAM_2D_H__

#ifdef _WINDOWS
#include <windows.h>
#include <tchar.h>
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glext.h>
#else
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#endif

#include "EJCanvas2DTypes.h"
#include "EJCocoa/NSString.h"

enum {
	kEJGLProgram2DAttributePos,
	kEJGLProgram2DAttributeUV,
	kEJGLProgram2DAttributeColor
};

class EJGLProgram2D : public NSObject {
private:
	GLuint program;
	GLuint screen;
	
	void bindAttributeLocations();
	void getUniforms();

	static GLint compileShaderFile(NSString *file, GLenum type);
	static GLint compileShaderSource(NSString *source, GLenum type);
	static void linkProgram(GLuint program);

public:
	EJGLProgram2D();
	~EJGLProgram2D();

	bool initWithVertexShader(NSString *vertexShaderFile, NSString *fragmentShaderFile);

	GLuint getProgram() const { return program; }

	GLuint getScreen() const { return screen; }
	//TODO: const GLuint getTranslate() { return translate; }
};

#endif // __EJ_GL_PROGRAM_2D_H__