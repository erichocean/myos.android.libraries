/*
 * Copyright (c) 2013-2014. All rights reserved.
 *
 */

#import <stdio.h>
#import <stdlib.h>
//#import "gl_client_context.h"
#import <utils/Log.h>
#import <OpenGLES/EAGLMA.h>

static int _textureID;

static const GLvoid *_texCoords;
static const GLvoid *_vertices;
static GLfloat _opacity;
/*
#ifndef GL_TRUE
extern "C" {
	void glAlphaFunc(GLenum func, GLclampf ref);
	void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void glClearDepthf(GLclampf depth);
	void glClipPlanef(GLenum plane, const GLfloat* equation);
	void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	void glDepthRangef(GLclampf zNear, GLclampf zFar);
	void glFogf(GLenum pname, GLfloat param);
	void glFogfv(GLenum pname, const GLfloat* params);
	void glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glGetClipPlanef(GLenum pname, GLfloat* eqn);
	void glGetFloatv(GLenum pname, GLfloat* params);
	void glGetLightfv(GLenum light, GLenum pname, GLfloat* params);
	void glGetMaterialfv(GLenum face, GLenum pname, GLfloat* params);
	void glGetTexEnvfv(GLenum env, GLenum pname, GLfloat* params);
	void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
	void glLightModelf(GLenum pname, GLfloat param);
	void glLightModelfv(GLenum pname, const GLfloat* params);
	void glLightf(GLenum light, GLenum pname, GLfloat param);
	void glLightfv(GLenum light, GLenum pname, const GLfloat* params);
	void glLineWidth(GLfloat width);
	void glLoadMatrixf(const GLfloat* m);
	void glMaterialf(GLenum face, GLenum pname, GLfloat param);
	void glMaterialfv(GLenum face, GLenum pname, const GLfloat* params);
	void glMultMatrixf(const GLfloat* m);
	void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
	void glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glPointParameterf(GLenum pname, GLfloat param);
	void glPointParameterfv(GLenum pname, const GLfloat* params);
	void glPointSize(GLfloat size);
	void glPolygonOffset(GLfloat factor, GLfloat units);
	void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	void glScalef(GLfloat x, GLfloat y, GLfloat z);
	void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
	void glTexEnvfv(GLenum target, GLenum pname, const GLfloat* params);
	void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
	void glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
	void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
	void glActiveTexture(GLenum texture);
	void glAlphaFuncx(GLenum func, GLclampx ref);
	void glBindBuffer(GLenum target, GLuint buffer);
	void glBindTexture(GLenum target, GLuint texture);
	void glBlendFunc(GLenum sfactor, GLenum dfactor);
	void glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
	void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
	void glClear(GLbitfield mask);
	void glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
	void glClearDepthx(GLclampx depth);
	void glClearStencil(GLint s);
	void glClientActiveTexture(GLenum texture);
	void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
	void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
	void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
	void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	void glCullFace(GLenum mode);
	void glDeleteBuffers(GLsizei n, const GLuint* buffers);
	void glDeleteTextures(GLsizei n, const GLuint* textures);
	void glDepthFunc(GLenum func);
	void glDepthMask(GLboolean flag);
	void glDepthRangex(GLclampx zNear, GLclampx zFar);
	void glDisable(GLenum cap);
	void glDisableClientState(GLenum array);
	void glDrawArrays(GLenum mode, GLint first, GLsizei count);
	void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
	void glEnable(GLenum cap);
	void glEnableClientState(GLenum array);
	void glFinish();
	void glFlush();
	void glFogx(GLenum pname, GLfixed param);
	void glFogxv(GLenum pname, const GLfixed* params);
	void glFrontFace(GLenum mode);
	void glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glGetBooleanv(GLenum pname, GLboolean* params);
	void glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
	void glClipPlanex(GLenum pname, const GLfixed* eqn);
	void glGenBuffers(GLsizei n, GLuint* buffers);
	void glGenTextures(GLsizei n, GLuint* textures);
	GLenum glGetError();
	void glGetFixedv(GLenum pname, GLfixed* params);
	void glGetIntegerv(GLenum pname, GLint* params);
	void glGetLightxv(GLenum light, GLenum pname, GLfixed* params);
	void glGetMaterialxv(GLenum face, GLenum pname, GLfixed* params);
	void glGetPointerv(GLenum pname, GLvoid** params);
	const GLubyte* glGetString(GLenum name);
	void glGetTexEnviv(GLenum env, GLenum pname, GLint* params);
	void glGetTexEnvxv(GLenum env, GLenum pname, GLfixed* params);
	void glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);
	void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed* params);
	void glHint(GLenum target, GLenum mode);
	GLboolean glIsBuffer(GLuint buffer);
	GLboolean glIsEnabled(GLenum cap);
	GLboolean glIsTexture(GLuint texture);
	void glLightModelx(GLenum pname, GLfixed param);
	void glLightModelxv(GLenum pname, const GLfixed* params);
	void glLightx(GLenum light, GLenum pname, GLfixed param);
	void glLightxv(GLenum light, GLenum pname, const GLfixed* params);
	void glLineWidthx(GLfixed width);
	void glLoadIdentity();
	void glLoadMatrixx(const GLfixed* m);
	void glLogicOp(GLenum opcode);
	void glMaterialx(GLenum face, GLenum pname, GLfixed param);
	void glMaterialxv(GLenum face, GLenum pname, const GLfixed* params);
	void glMatrixMode(GLenum mode);
	void glMultMatrixx(const GLfixed* m);
	void glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz);
	void glNormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer);
	void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glPixelStorei(GLenum pname, GLint param);
	void glPointParameterx(GLenum pname, GLfixed param);
	void glPointParameterxv(GLenum pname, const GLfixed* params);
	void glPointSizex(GLfixed size);
	void glPolygonOffsetx(GLfixed factor, GLfixed units);
	void glPopMatrix();
	void glPushMatrix();
	void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
	void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
	void glSampleCoverage(GLclampf value, GLboolean invert);
	void glSampleCoveragex(GLclampx value, GLboolean invert);
	void glScalex(GLfixed x, GLfixed y, GLfixed z);
	void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
	void glShadeModel(GLenum mode);
	void glStencilFunc(GLenum func, GLint ref, GLuint mask);
	void glStencilMask(GLuint mask);
	void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
	void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glTexEnvi(GLenum target, GLenum pname, GLint param);
	void glTexEnvx(GLenum target, GLenum pname, GLfixed param);
	void glTexEnviv(GLenum target, GLenum pname, const GLint* params);
	void glTexEnvxv(GLenum target, GLenum pname, const GLfixed* params);
	void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
	void glTexParameteri(GLenum target, GLenum pname, GLint param);
	void glTexParameterx(GLenum target, GLenum pname, GLfixed param);
	void glTexParameteriv(GLenum target, GLenum pname, const GLint* params);
	void glTexParameterxv(GLenum target, GLenum pname, const GLfixed* params);
	void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
	void glTranslatex(GLfixed x, GLfixed y, GLfixed z);
	void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
	void glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid* pointer);
	void glVertexPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glColorPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glNormalPointerOffset(GLenum type, GLsizei stride, GLuint offset);
	void glPointSizePointerOffset(GLenum type, GLsizei stride, GLuint offset);
	void glTexCoordPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glWeightPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glMatrixIndexPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glVertexPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glColorPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glNormalPointerData(GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glTexCoordPointerData(GLint unit, GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glPointSizePointerData(GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glWeightPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glMatrixIndexPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glDrawElementsOffset(GLenum mode, GLsizei count, GLenum type, GLuint offset);
	void glDrawElementsData(GLenum mode, GLsizei count, GLenum type, void* data, GLuint datalen);
	void glGetCompressedTextureFormats(int count, GLint* formats);
	int glFinishRoundTrip();
	void glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha);
	void glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	void glBlendEquationOES(GLenum mode);
	void glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
	void glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height);
	void glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
	void glDrawTexsvOES(const GLshort* coords);
	void glDrawTexivOES(const GLint* coords);
	void glDrawTexxvOES(const GLfixed* coords);
	void glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
	void glDrawTexfvOES(const GLfloat* coords);
	void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image);
	void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image);
	void glAlphaFuncxOES(GLenum func, GLclampx ref);
	void glClearColorxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
	void glClearDepthxOES(GLclampx depth);
	void glClipPlanexOES(GLenum plane, const GLfixed* equation);
	void glClipPlanexIMG(GLenum plane, const GLfixed* equation);
	void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	void glDepthRangexOES(GLclampx zNear, GLclampx zFar);
	void glFogxOES(GLenum pname, GLfixed param);
	void glFogxvOES(GLenum pname, const GLfixed* params);
	void glFrustumxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glGetClipPlanexOES(GLenum pname, GLfixed* eqn);
	void glGetClipPlanex(GLenum pname, GLfixed* eqn);
	void glGetFixedvOES(GLenum pname, GLfixed* params);
	void glGetLightxvOES(GLenum light, GLenum pname, GLfixed* params);
	void glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed* params);
	void glGetTexEnvxvOES(GLenum env, GLenum pname, GLfixed* params);
	void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed* params);
	void glLightModelxOES(GLenum pname, GLfixed param);
	void glLightModelxvOES(GLenum pname, const GLfixed* params);
	void glLightxOES(GLenum light, GLenum pname, GLfixed param);
	void glLightxvOES(GLenum light, GLenum pname, const GLfixed* params);
	void glLineWidthxOES(GLfixed width);
	void glLoadMatrixxOES(const GLfixed* m);
	void glMaterialxOES(GLenum face, GLenum pname, GLfixed param);
	void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed* params);
	void glMultMatrixxOES(const GLfixed* m);
	void glMultiTexCoord4xOES(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz);
	void glOrthoxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glPointParameterxOES(GLenum pname, GLfixed param);
	void glPointParameterxvOES(GLenum pname, const GLfixed* params);
	void glPointSizexOES(GLfixed size);
	void glPolygonOffsetxOES(GLfixed factor, GLfixed units);
	void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
	void glSampleCoveragexOES(GLclampx value, GLboolean invert);
	void glScalexOES(GLfixed x, GLfixed y, GLfixed z);
	void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param);
	void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed* params);
	void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param);
	void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed* params);
	void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z);
	GLboolean glIsRenderbufferOES(GLuint renderbuffer);
	void glBindRenderbufferOES(GLenum target, GLuint renderbuffer);
	void glDeleteRenderbuffersOES(GLsizei n, const GLuint* renderbuffers);
	void glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers);
	void glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	void glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params);
	GLboolean glIsFramebufferOES(GLuint framebuffer);
	void glBindFramebufferOES(GLenum target, GLuint framebuffer);
	void glDeleteFramebuffersOES(GLsizei n, const GLuint* framebuffers);
	void glGenFramebuffersOES(GLsizei n, GLuint* framebuffers);
	GLenum glCheckFramebufferStatusOES(GLenum target);
	void glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	void glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	void glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint* params);
	void glGenerateMipmapOES(GLenum target);
	void* glMapBufferOES(GLenum target, GLenum access);
	GLboolean glUnmapBufferOES(GLenum target);
	void glGetBufferPointervOES(GLenum target, GLenum pname, GLvoid** params);
	void glCurrentPaletteMatrixOES(GLuint matrixpaletteindex);
	void glLoadPaletteFromModelViewMatrixOES();
	void glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	GLbitfield glQueryMatrixxOES(GLfixed* mantissa, GLint* exponent);
	void glDepthRangefOES(GLclampf zNear, GLclampf zFar);
	void glFrustumfOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glOrthofOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glClipPlanefOES(GLenum plane, const GLfloat* equation);
	void glClipPlanefIMG(GLenum plane, const GLfloat* equation);
	void glGetClipPlanefOES(GLenum pname, GLfloat* eqn);
	void glClearDepthfOES(GLclampf depth);
	void glTexGenfOES(GLenum coord, GLenum pname, GLfloat param);
	void glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat* params);
	void glTexGeniOES(GLenum coord, GLenum pname, GLint param);
	void glTexGenivOES(GLenum coord, GLenum pname, const GLint* params);
	void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param);
	void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed* params);
	void glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat* params);
	void glGetTexGenivOES(GLenum coord, GLenum pname, GLint* params);
	void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed* params);
	void glBindVertexArrayOES(GLuint array);
	void glDeleteVertexArraysOES(GLsizei n, const GLuint* arrays);
	void glGenVertexArraysOES(GLsizei n, GLuint* arrays);
	GLboolean glIsVertexArrayOES(GLuint array);
	void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum* attachments);
	void glMultiDrawArraysEXT(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
	void glMultiDrawElementsEXT(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
	void glMultiDrawArraysSUN(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
	void glMultiDrawElementsSUN(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
	void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
	void glDeleteFencesNV(GLsizei n, const GLuint* fences);
	void glGenFencesNV(GLsizei n, GLuint* fences);
	GLboolean glIsFenceNV(GLuint fence);
	GLboolean glTestFenceNV(GLuint fence);
	void glGetFenceivNV(GLuint fence, GLenum pname, GLint* params);
	void glFinishFenceNV(GLuint fence);
	void glSetFenceNV(GLuint fence, GLenum condition);
	void glGetDriverControlsQCOM(GLint* num, GLsizei size, GLuint* driverControls);
	void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString);
	void glEnableDriverControlQCOM(GLuint driverControl);
	void glDisableDriverControlQCOM(GLuint driverControl);
	void glExtGetTexturesQCOM(GLuint* textures, GLint maxTextures, GLint* numTextures);
	void glExtGetBuffersQCOM(GLuint* buffers, GLint maxBuffers, GLint* numBuffers);
	void glExtGetRenderbuffersQCOM(GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers);
	void glExtGetFramebuffersQCOM(GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers);
	void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params);
	void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param);
	void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid* texels);
	void glExtGetBufferPointervQCOM(GLenum target, GLvoid** params);
	void glExtGetShadersQCOM(GLuint* shaders, GLint maxShaders, GLint* numShaders);
	void glExtGetProgramsQCOM(GLuint* programs, GLint maxPrograms, GLint* numPrograms);
	GLboolean glExtIsProgramBinaryQCOM(GLuint program);
	void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar* source, GLint* length);
	void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
	void glEndTilingQCOM(GLbitfield preserveMask);
};

#endif
#ifndef GET_CONTEXT
static gl_client_context_t::CONTEXT_ACCESSOR_TYPE *getCurrentContext = NULL;
void gl_client_context_t::setContextAccessor(CONTEXT_ACCESSOR_TYPE *f) { getCurrentContext = f; }
#define GET_CONTEXT gl_client_context_t * ctx = getCurrentContext() 
#endif*/

void glAlphaFunc(GLenum func, GLclampf ref)
{
	//GET_CONTEXT;
	 //ctx->glAlphaFunc(ctx, func, ref);
}

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	//GET_CONTEXT;
	 //ctx->glClearColor(ctx, red, green, blue, alpha);
}

void glClearDepthf(GLclampf depth)
{
	//GET_CONTEXT;
	 //ctx->glClearDepthf(ctx, depth);
}

void glClipPlanef(GLenum plane, const GLfloat* equation)
{
	//GET_CONTEXT;
	 //ctx->glClipPlanef(ctx, plane, equation);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    //ALOGD("glColor4f, alpha: %d", alpha);
    _opacity = alpha;
    /*
	//GET_CONTEXT;
    //ctx->glColor4f(ctx, red, green, blue, alpha);*/
}

void glDepthRangef(GLclampf zNear, GLclampf zFar)
{
	//GET_CONTEXT;
	 //ctx->glDepthRangef(ctx, zNear, zFar);
}

void glFogf(GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glFogf(ctx, pname, param);
}

void glFogfv(GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glFogfv(ctx, pname, params);
}

void glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	//GET_CONTEXT;
	 //ctx->glFrustumf(ctx, left, right, bottom, top, zNear, zFar);
}

void glGetClipPlanef(GLenum pname, GLfloat* eqn)
{
	//GET_CONTEXT;
	 //ctx->glGetClipPlanef(ctx, pname, eqn);
}

void glGetFloatv(GLenum pname, GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glGetFloatv(ctx, pname, params);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glGetLightfv(ctx, light, pname, params);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glGetMaterialfv(ctx, face, pname, params);
}

void glGetTexEnvfv(GLenum env, GLenum pname, GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glGetTexEnvfv(ctx, env, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glGetTexParameterfv(ctx, target, pname, params);
}

void glLightModelf(GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glLightModelf(ctx, pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glLightModelfv(ctx, pname, params);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glLightf(ctx, light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glLightfv(ctx, light, pname, params);
}

void glLineWidth(GLfloat width)
{
	//GET_CONTEXT;
	 //ctx->glLineWidth(ctx, width);
}

void glLoadMatrixf(const GLfloat* m)
{
	//GET_CONTEXT;
	 //ctx->glLoadMatrixf(ctx, m);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glMaterialf(ctx, face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glMaterialfv(ctx, face, pname, params);
}

void glMultMatrixf(const GLfloat* m)
{
	//GET_CONTEXT;
	 //ctx->glMultMatrixf(ctx, m);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	//GET_CONTEXT;
	 //ctx->glMultiTexCoord4f(ctx, target, s, t, r, q);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	//GET_CONTEXT;
	 //ctx->glNormal3f(ctx, nx, ny, nz);
}

void glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	//GET_CONTEXT;
	 //ctx->glOrthof(ctx, left, right, bottom, top, zNear, zFar);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glPointParameterf(ctx, pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glPointParameterfv(ctx, pname, params);
}

void glPointSize(GLfloat size)
{
	//GET_CONTEXT;
	 //ctx->glPointSize(ctx, size);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
	//GET_CONTEXT;
	 //ctx->glPolygonOffset(ctx, factor, units);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	//GET_CONTEXT;
	 //ctx->glRotatef(ctx, angle, x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	//GET_CONTEXT;
	 //ctx->glScalef(ctx, x, y, z);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glTexEnvf(ctx, target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glTexEnvfv(ctx, target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	//GET_CONTEXT;
	 //ctx->glTexParameterf(ctx, target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT;
	 //ctx->glTexParameterfv(ctx, target, pname, params);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	//GET_CONTEXT;
	 //ctx->glTranslatef(ctx, x, y, z);
}

void glActiveTexture(GLenum texture)
{
	//GET_CONTEXT;
	 //ctx->glActiveTexture(ctx, texture);
}

void glAlphaFuncx(GLenum func, GLclampx ref)
{
	//GET_CONTEXT;
	 //ctx->glAlphaFuncx(ctx, func, ref);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
	//GET_CONTEXT;
	 //ctx->glBindBuffer(ctx, target, buffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    _textureID = texture;
    //ALOGD("_textureID: %d", _textureID);
	//GET_CONTEXT;
    //ctx->glBindTexture(ctx, target, texture);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	//GET_CONTEXT;
	 //ctx->glBlendFunc(ctx, sfactor, dfactor);
}

void glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
{
	//GET_CONTEXT;
	 //ctx->glBufferData(ctx, target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
{
	//GET_CONTEXT;
	 //ctx->glBufferSubData(ctx, target, offset, size, data);
}

void glClear(GLbitfield mask)
{
	//GET_CONTEXT;
	 //ctx->glClear(ctx, mask);
}

void glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	//GET_CONTEXT;
	 //ctx->glClearColorx(ctx, red, green, blue, alpha);
}

void glClearDepthx(GLclampx depth)
{
	//GET_CONTEXT;
	 //ctx->glClearDepthx(ctx, depth);
}

void glClearStencil(GLint s)
{
	//GET_CONTEXT;
	 //ctx->glClearStencil(ctx, s);
}

void glClientActiveTexture(GLenum texture)
{
	//GET_CONTEXT;
	 //ctx->glClientActiveTexture(ctx, texture);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	//GET_CONTEXT;
	 //ctx->glColor4ub(ctx, red, green, blue, alpha);
}

void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	//GET_CONTEXT;
	 //ctx->glColor4x(ctx, red, green, blue, alpha);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	//GET_CONTEXT;
	 //ctx->glColorMask(ctx, red, green, blue, alpha);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	//GET_CONTEXT;
	 //ctx->glColorPointer(ctx, size, type, stride, pointer);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data)
{
	//GET_CONTEXT;
	 //ctx->glCompressedTexImage2D(ctx, target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	//GET_CONTEXT;
	 //ctx->glCompressedTexSubImage2D(ctx, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	//GET_CONTEXT;
	 //ctx->glCopyTexImage2D(ctx, target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	//GET_CONTEXT;
	 //ctx->glCopyTexSubImage2D(ctx, target, level, xoffset, yoffset, x, y, width, height);
}

void glCullFace(GLenum mode)
{
	//GET_CONTEXT; 
	 //ctx->glCullFace(ctx, mode);
}

void glDeleteBuffers(GLsizei n, const GLuint* buffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteBuffers(ctx, n, buffers);
}

void glDeleteTextures(GLsizei n, const GLuint* textures)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteTextures(ctx, n, textures);
}

void glDepthFunc(GLenum func)
{
	//GET_CONTEXT; 
	 //ctx->glDepthFunc(ctx, func);
}

void glDepthMask(GLboolean flag)
{
	//GET_CONTEXT; 
	 //ctx->glDepthMask(ctx, flag);
}

void glDepthRangex(GLclampx zNear, GLclampx zFar)
{
	//GET_CONTEXT; 
	 //ctx->glDepthRangex(ctx, zNear, zFar);
}

void glDisable(GLenum cap)
{
	//GET_CONTEXT; 
	 //ctx->glDisable(ctx, cap);
}

void glDisableClientState(GLenum array)
{
	//GET_CONTEXT; 
	 //ctx->glDisableClientState(ctx, array);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    //ALOGD("glDrawArrays, count: %d", count);
    /*
    static GLfloat _texCoords[];
    static GLfloat _vertices[];
    static GLfloat _opacity;*/
    EAGLMADraw(_textureID, _texCoords, _vertices, _opacity);
    
    /*
	//GET_CONTEXT;
    //ctx->glDrawArrays(ctx, mode, first, count);*/
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
	//GET_CONTEXT; 
	 //ctx->glDrawElements(ctx, mode, count, type, indices);
}

void glEnable(GLenum cap)
{
	//GET_CONTEXT; 
	 //ctx->glEnable(ctx, cap);
}

void glEnableClientState(GLenum array)
{
	//GET_CONTEXT; 
	 //ctx->glEnableClientState(ctx, array);
}

void glFinish()
{
	//GET_CONTEXT; 
	 //ctx->glFinish(ctx);
}

void glFlush()
{
	//GET_CONTEXT; 
	 //ctx->glFlush(ctx);
}

void glFogx(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glFogx(ctx, pname, param);
}

void glFogxv(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glFogxv(ctx, pname, params);
}

void glFrontFace(GLenum mode)
{
	//GET_CONTEXT; 
	 //ctx->glFrontFace(ctx, mode);
}

void glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	//GET_CONTEXT; 
	 //ctx->glFrustumx(ctx, left, right, bottom, top, zNear, zFar);
}

void glGetBooleanv(GLenum pname, GLboolean* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetBooleanv(ctx, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetBufferParameteriv(ctx, target, pname, params);
}

void glClipPlanex(GLenum pname, const GLfixed* eqn)
{
	//GET_CONTEXT; 
	 //ctx->glClipPlanex(ctx, pname, eqn);
}

void glGenBuffers(GLsizei n, GLuint* buffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glGenBuffers(ctx, n, buffers);
}

void glGenTextures(GLsizei n, GLuint* textures)
{
    //ALOGD("glGenTextures");
    textures[0] = EAGLMAGenTexture();
    //ALOGD("textures[0]: %d", textures[0]);
    /*
	//GET_CONTEXT;
    if (n<0) {
        //ctx->setError(GL_INVALID_VALUE);
        return;
    }
    //ctx->glGenTextures(ctx, n, textures);*/
}

GLenum glGetError()
{
	//GET_CONTEXT; 
	 return 0;//ctx->glGetError(ctx);
}

void glGetFixedv(GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetFixedv(ctx, pname, params);
}

void glGetIntegerv(GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetIntegerv(ctx, pname, params);
}

void glGetLightxv(GLenum light, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetLightxv(ctx, light, pname, params);
}

void glGetMaterialxv(GLenum face, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetMaterialxv(ctx, face, pname, params);
}

void glGetPointerv(GLenum pname, GLvoid** params)
{
	//GET_CONTEXT; 
	 //ctx->glGetPointerv(ctx, pname, params);
}

const GLubyte* glGetString(GLenum name)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glGetString(ctx, name);
}

void glGetTexEnviv(GLenum env, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexEnviv(ctx, env, pname, params);
}

void glGetTexEnvxv(GLenum env, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexEnvxv(ctx, env, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexParameteriv(ctx, target, pname, params);
}

void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexParameterxv(ctx, target, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
	//GET_CONTEXT; 
	 //ctx->glHint(ctx, target, mode);
}

GLboolean glIsBuffer(GLuint buffer)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glIsBuffer(ctx, buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glIsEnabled(ctx, cap);
}

GLboolean glIsTexture(GLuint texture)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glIsTexture(ctx, texture);
}

void glLightModelx(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glLightModelx(ctx, pname, param);
}

void glLightModelxv(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glLightModelxv(ctx, pname, params);
}

void glLightx(GLenum light, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glLightx(ctx, light, pname, param);
}

void glLightxv(GLenum light, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glLightxv(ctx, light, pname, params);
}

void glLineWidthx(GLfixed width)
{
	//GET_CONTEXT; 
	 //ctx->glLineWidthx(ctx, width);
}

void glLoadIdentity()
{
	//GET_CONTEXT; 
	 //ctx->glLoadIdentity(ctx);
}

void glLoadMatrixx(const GLfixed* m)
{
	//GET_CONTEXT; 
	 //ctx->glLoadMatrixx(ctx, m);
}

void glLogicOp(GLenum opcode)
{
	//GET_CONTEXT;
    //ctx->glLogicOp(ctx, opcode);
}

void glMaterialx(GLenum face, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glMaterialx(ctx, face, pname, param);
}

void glMaterialxv(GLenum face, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glMaterialxv(ctx, face, pname, params);
}

void glMatrixMode(GLenum mode)
{
    //LOGD("glMatrixMode 1");
	//GET_CONTEXT;
    //LOGE("glMatrixMode 2");
    //ctx->glMatrixMode(ctx, mode);
    //LOGE("glMatrixMode 3");
}

void glMultMatrixx(const GLfixed* m)
{
	//GET_CONTEXT; 
	 //ctx->glMultMatrixx(ctx, m);
}

void glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	//GET_CONTEXT; 
	 //ctx->glMultiTexCoord4x(ctx, target, s, t, r, q);
}

void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
	//GET_CONTEXT; 
	 //ctx->glNormal3x(ctx, nx, ny, nz);
}

void glNormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	//GET_CONTEXT; 
	 //ctx->glNormalPointer(ctx, type, stride, pointer);
}

void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	//GET_CONTEXT; 
	 //ctx->glOrthox(ctx, left, right, bottom, top, zNear, zFar);
}

void glPixelStorei(GLenum pname, GLint param)
{
	//GET_CONTEXT; 
	 //ctx->glPixelStorei(ctx, pname, param);
}

void glPointParameterx(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glPointParameterx(ctx, pname, param);
}

void glPointParameterxv(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glPointParameterxv(ctx, pname, params);
}

void glPointSizex(GLfixed size)
{
	//GET_CONTEXT; 
	 //ctx->glPointSizex(ctx, size);
}

void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
	//GET_CONTEXT; 
	 //ctx->glPolygonOffsetx(ctx, factor, units);
}

void glPopMatrix()
{
	//GET_CONTEXT; 
	 //ctx->glPopMatrix(ctx);
}

void glPushMatrix()
{
	//GET_CONTEXT; 
	 //ctx->glPushMatrix(ctx);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
	//GET_CONTEXT; 
	 //ctx->glReadPixels(ctx, x, y, width, height, format, type, pixels);
}

void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glRotatex(ctx, angle, x, y, z);
}

void glSampleCoverage(GLclampf value, GLboolean invert)
{
	//GET_CONTEXT; 
	 //ctx->glSampleCoverage(ctx, value, invert);
}

void glSampleCoveragex(GLclampx value, GLboolean invert)
{
	//GET_CONTEXT; 
	 //ctx->glSampleCoveragex(ctx, value, invert);
}

void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glScalex(ctx, x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	//GET_CONTEXT; 
	 //ctx->glScissor(ctx, x, y, width, height);
}

void glShadeModel(GLenum mode)
{
	//GET_CONTEXT; 
	 //ctx->glShadeModel(ctx, mode);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	//GET_CONTEXT; 
	 //ctx->glStencilFunc(ctx, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
	//GET_CONTEXT; 
	 //ctx->glStencilMask(ctx, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	//GET_CONTEXT; 
	 //ctx->glStencilOp(ctx, fail, zfail, zpass);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
    //ALOGD("glTexCoordPointer: pointer: %p", pointer);
    _texCoords = pointer;
    /*
	//GET_CONTEXT;
    //ctx->glTexCoordPointer(ctx, size, type, stride, pointer);*/
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnvi(ctx, target, pname, param);
}

void glTexEnvx(GLenum target, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnvx(ctx, target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnviv(ctx, target, pname, params);
}

void glTexEnvxv(GLenum target, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnvxv(ctx, target, pname, params);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
    //ALOGD("glTexImage2D: _textureID: %d, pixels: %p", _textureID, pixels);
    EAGLMALoadImage(_textureID, width, height, pixels);
	/*GET_CONTEXT;
    //ctx->glTexImage2D(ctx, target, level, internalformat, width, height, border, format, type, pixels);*/
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameteri(ctx, target, pname, param);
}

void glTexParameterx(GLenum target, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameterx(ctx, target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameteriv(ctx, target, pname, params);
}

void glTexParameterxv(GLenum target, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameterxv(ctx, target, pname, params);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	//GET_CONTEXT; 
	 //ctx->glTexSubImage2D(ctx, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glTranslatex(ctx, x, y, z);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
    //ALOGD("glVertexPointer, pointer: %p", pointer);
    _vertices = pointer;
    /*
	//GET_CONTEXT;
    //ctx->glVertexPointer(ctx, size, type, stride, pointer);*/
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    /*
	//GET_CONTEXT;
    //ctx->glViewport(ctx, x, y, width, height);*/
}

void glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	//GET_CONTEXT; 
	 //ctx->glPointSizePointerOES(ctx, type, stride, pointer);
}

void glVertexPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glVertexPointerOffset(ctx, size, type, stride, offset);
}

void glColorPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glColorPointerOffset(ctx, size, type, stride, offset);
}

void glNormalPointerOffset(GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glNormalPointerOffset(ctx, type, stride, offset);
}

void glPointSizePointerOffset(GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glPointSizePointerOffset(ctx, type, stride, offset);
}

void glTexCoordPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glTexCoordPointerOffset(ctx, size, type, stride, offset);
}

void glWeightPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glWeightPointerOffset(ctx, size, type, stride, offset);
}

void glMatrixIndexPointerOffset(GLint size, GLenum type, GLsizei stride, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glMatrixIndexPointerOffset(ctx, size, type, stride, offset);
}

void glVertexPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glVertexPointerData(ctx, size, type, stride, data, datalen);
}

void glColorPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glColorPointerData(ctx, size, type, stride, data, datalen);
}

void glNormalPointerData(GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glNormalPointerData(ctx, type, stride, data, datalen);
}

void glTexCoordPointerData(GLint unit, GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glTexCoordPointerData(ctx, unit, size, type, stride, data, datalen);
}

void glPointSizePointerData(GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glPointSizePointerData(ctx, type, stride, data, datalen);
}

void glWeightPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glWeightPointerData(ctx, size, type, stride, data, datalen);
}

void glMatrixIndexPointerData(GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glMatrixIndexPointerData(ctx, size, type, stride, data, datalen);
}

void glDrawElementsOffset(GLenum mode, GLsizei count, GLenum type, GLuint offset)
{
	//GET_CONTEXT; 
	 //ctx->glDrawElementsOffset(ctx, mode, count, type, offset);
}

void glDrawElementsData(GLenum mode, GLsizei count, GLenum type, void* data, GLuint datalen)
{
	//GET_CONTEXT; 
	 //ctx->glDrawElementsData(ctx, mode, count, type, data, datalen);
}

void glGetCompressedTextureFormats(int count, GLint* formats)
{
	//GET_CONTEXT; 
	 //ctx->glGetCompressedTextureFormats(ctx, count, formats);
}

int glFinishRoundTrip()
{
	//GET_CONTEXT; 
	 return 0;//ctx->glFinishRoundTrip(ctx);
}

void glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha)
{
	//GET_CONTEXT; 
	 //ctx->glBlendEquationSeparateOES(ctx, modeRGB, modeAlpha);
}

void glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	//GET_CONTEXT; 
	 //ctx->glBlendFuncSeparateOES(ctx, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendEquationOES(GLenum mode)
{
	//GET_CONTEXT; 
	 //ctx->glBlendEquationOES(ctx, mode);
}

void glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexsOES(ctx, x, y, z, width, height);
}

void glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexiOES(ctx, x, y, z, width, height);
}

void glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexxOES(ctx, x, y, z, width, height);
}

void glDrawTexsvOES(const GLshort* coords)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexsvOES(ctx, coords);
}

void glDrawTexivOES(const GLint* coords)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexivOES(ctx, coords);
}

void glDrawTexxvOES(const GLfixed* coords)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexxvOES(ctx, coords);
}

void glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexfOES(ctx, x, y, z, width, height);
}

void glDrawTexfvOES(const GLfloat* coords)
{
	//GET_CONTEXT; 
	 //ctx->glDrawTexfvOES(ctx, coords);
}
/*
void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
	//GET_CONTEXT; 
	 //ctx->glEGLImageTargetTexture2DOES(ctx, target, image);
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
	//GET_CONTEXT; 
	 //ctx->glEGLImageTargetRenderbufferStorageOES(ctx, target, image);
}*/

void glAlphaFuncxOES(GLenum func, GLclampx ref)
{
	//GET_CONTEXT; 
	 //ctx->glAlphaFuncxOES(ctx, func, ref);
}

void glClearColorxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	//GET_CONTEXT; 
	 //ctx->glClearColorxOES(ctx, red, green, blue, alpha);
}

void glClearDepthxOES(GLclampx depth)
{
	//GET_CONTEXT; 
	 //ctx->glClearDepthxOES(ctx, depth);
}

void glClipPlanexOES(GLenum plane, const GLfixed* equation)
{
	//GET_CONTEXT; 
	 //ctx->glClipPlanexOES(ctx, plane, equation);
}

void glClipPlanexIMG(GLenum plane, const GLfixed* equation)
{
	//GET_CONTEXT; 
	 //ctx->glClipPlanexIMG(ctx, plane, equation);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	//GET_CONTEXT; 
	 //ctx->glColor4xOES(ctx, red, green, blue, alpha);
}

void glDepthRangexOES(GLclampx zNear, GLclampx zFar)
{
	//GET_CONTEXT; 
	 //ctx->glDepthRangexOES(ctx, zNear, zFar);
}

void glFogxOES(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glFogxOES(ctx, pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glFogxvOES(ctx, pname, params);
}

void glFrustumxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	//GET_CONTEXT; 
	 //ctx->glFrustumxOES(ctx, left, right, bottom, top, zNear, zFar);
}

void glGetClipPlanexOES(GLenum pname, GLfixed* eqn)
{
	//GET_CONTEXT; 
	 //ctx->glGetClipPlanexOES(ctx, pname, eqn);
}

void glGetClipPlanex(GLenum pname, GLfixed* eqn)
{
	//GET_CONTEXT; 
	 //ctx->glGetClipPlanex(ctx, pname, eqn);
}

void glGetFixedvOES(GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetFixedvOES(ctx, pname, params);
}

void glGetLightxvOES(GLenum light, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetLightxvOES(ctx, light, pname, params);
}

void glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetMaterialxvOES(ctx, face, pname, params);
}

void glGetTexEnvxvOES(GLenum env, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexEnvxvOES(ctx, env, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexParameterxvOES(ctx, target, pname, params);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glLightModelxOES(ctx, pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glLightModelxvOES(ctx, pname, params);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glLightxOES(ctx, light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glLightxvOES(ctx, light, pname, params);
}

void glLineWidthxOES(GLfixed width)
{
	//GET_CONTEXT; 
	 //ctx->glLineWidthxOES(ctx, width);
}

void glLoadMatrixxOES(const GLfixed* m)
{
	//GET_CONTEXT; 
	 //ctx->glLoadMatrixxOES(ctx, m);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glMaterialxOES(ctx, face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glMaterialxvOES(ctx, face, pname, params);
}

void glMultMatrixxOES(const GLfixed* m)
{
	//GET_CONTEXT; 
	 //ctx->glMultMatrixxOES(ctx, m);
}

void glMultiTexCoord4xOES(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	//GET_CONTEXT; 
	 //ctx->glMultiTexCoord4xOES(ctx, target, s, t, r, q);
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
	//GET_CONTEXT; 
	 //ctx->glNormal3xOES(ctx, nx, ny, nz);
}

void glOrthoxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	//GET_CONTEXT; 
	 //ctx->glOrthoxOES(ctx, left, right, bottom, top, zNear, zFar);
}

void glPointParameterxOES(GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glPointParameterxOES(ctx, pname, param);
}

void glPointParameterxvOES(GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glPointParameterxvOES(ctx, pname, params);
}

void glPointSizexOES(GLfixed size)
{
	//GET_CONTEXT; 
	 //ctx->glPointSizexOES(ctx, size);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
	//GET_CONTEXT; 
	 //ctx->glPolygonOffsetxOES(ctx, factor, units);
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glRotatexOES(ctx, angle, x, y, z);
}

void glSampleCoveragexOES(GLclampx value, GLboolean invert)
{
	//GET_CONTEXT; 
	 //ctx->glSampleCoveragexOES(ctx, value, invert);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glScalexOES(ctx, x, y, z);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnvxOES(ctx, target, pname, param);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexEnvxvOES(ctx, target, pname, params);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameterxOES(ctx, target, pname, param);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexParameterxvOES(ctx, target, pname, params);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
	//GET_CONTEXT; 
	 //ctx->glTranslatexOES(ctx, x, y, z);
}

GLboolean glIsRenderbufferOES(GLuint renderbuffer)
{
	//GET_CONTEXT; 
    return 0;//ctx->glIsRenderbufferOES(ctx, renderbuffer);
}

void glBindRenderbufferOES(GLenum target, GLuint renderbuffer)
{
	//GET_CONTEXT; 
	 //ctx->glBindRenderbufferOES(ctx, target, renderbuffer);
}

void glDeleteRenderbuffersOES(GLsizei n, const GLuint* renderbuffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteRenderbuffersOES(ctx, n, renderbuffers);
}

void glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glGenRenderbuffersOES(ctx, n, renderbuffers);
}

void glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	//GET_CONTEXT; 
	 //ctx->glRenderbufferStorageOES(ctx, target, internalformat, width, height);
}

void glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetRenderbufferParameterivOES(ctx, target, pname, params);
}

GLboolean glIsFramebufferOES(GLuint framebuffer)
{
	//GET_CONTEXT; 
    return 0;//ctx->glIsFramebufferOES(ctx, framebuffer);
}

void glBindFramebufferOES(GLenum target, GLuint framebuffer)
{
	//GET_CONTEXT; 
	 //ctx->glBindFramebufferOES(ctx, target, framebuffer);
}

void glDeleteFramebuffersOES(GLsizei n, const GLuint* framebuffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteFramebuffersOES(ctx, n, framebuffers);
}

void glGenFramebuffersOES(GLsizei n, GLuint* framebuffers)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glGenFramebuffersOES(ctx, n, framebuffers);
}

GLenum glCheckFramebufferStatusOES(GLenum target)
{
	//GET_CONTEXT; 
    return 0;//ctx->glCheckFramebufferStatusOES(ctx, target);
}

void glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	//GET_CONTEXT; 
	 //ctx->glFramebufferRenderbufferOES(ctx, target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	//GET_CONTEXT; 
	 //ctx->glFramebufferTexture2DOES(ctx, target, attachment, textarget, texture, level);
}

void glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetFramebufferAttachmentParameterivOES(ctx, target, attachment, pname, params);
}

void glGenerateMipmapOES(GLenum target)
{
	//GET_CONTEXT; 
	 //ctx->glGenerateMipmapOES(ctx, target);
}

void* glMapBufferOES(GLenum target, GLenum access)
{
	//GET_CONTEXT; 
    return 0;//ctx->glMapBufferOES(ctx, target, access);
}

GLboolean glUnmapBufferOES(GLenum target)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glUnmapBufferOES(ctx, target);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, GLvoid** params)
{
	//GET_CONTEXT; 
	 //ctx->glGetBufferPointervOES(ctx, target, pname, params);
}

void glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
	//GET_CONTEXT; 
	 //ctx->glCurrentPaletteMatrixOES(ctx, matrixpaletteindex);
}

void glLoadPaletteFromModelViewMatrixOES()
{
	//GET_CONTEXT; 
	 //ctx->glLoadPaletteFromModelViewMatrixOES(ctx);
}

void glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	//GET_CONTEXT; 
	 //ctx->glMatrixIndexPointerOES(ctx, size, type, stride, pointer);
}

void glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	//GET_CONTEXT; 
	 //ctx->glWeightPointerOES(ctx, size, type, stride, pointer);
}

GLbitfield glQueryMatrixxOES(GLfixed* mantissa, GLint* exponent)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glQueryMatrixxOES(ctx, mantissa, exponent);
}

void glDepthRangefOES(GLclampf zNear, GLclampf zFar)
{
	//GET_CONTEXT; 
	 //ctx->glDepthRangefOES(ctx, zNear, zFar);
}

void glFrustumfOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	//GET_CONTEXT; 
	 //ctx->glFrustumfOES(ctx, left, right, bottom, top, zNear, zFar);
}

void glOrthofOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	//GET_CONTEXT; 
	 //ctx->glOrthofOES(ctx, left, right, bottom, top, zNear, zFar);
}

void glClipPlanefOES(GLenum plane, const GLfloat* equation)
{
	//GET_CONTEXT; 
	 //ctx->glClipPlanefOES(ctx, plane, equation);
}

void glClipPlanefIMG(GLenum plane, const GLfloat* equation)
{
	//GET_CONTEXT; 
	 //ctx->glClipPlanefIMG(ctx, plane, equation);
}

void glGetClipPlanefOES(GLenum pname, GLfloat* eqn)
{
	//GET_CONTEXT; 
	 //ctx->glGetClipPlanefOES(ctx, pname, eqn);
}

void glClearDepthfOES(GLclampf depth)
{
	//GET_CONTEXT; 
	 //ctx->glClearDepthfOES(ctx, depth);
}

void glTexGenfOES(GLenum coord, GLenum pname, GLfloat param)
{
	//GET_CONTEXT; 
	 //ctx->glTexGenfOES(ctx, coord, pname, param);
}

void glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexGenfvOES(ctx, coord, pname, params);
}

void glTexGeniOES(GLenum coord, GLenum pname, GLint param)
{
	//GET_CONTEXT; 
	 //ctx->glTexGeniOES(ctx, coord, pname, param);
}

void glTexGenivOES(GLenum coord, GLenum pname, const GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexGenivOES(ctx, coord, pname, params);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
	//GET_CONTEXT; 
	 //ctx->glTexGenxOES(ctx, coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glTexGenxvOES(ctx, coord, pname, params);
}

void glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexGenfvOES(ctx, coord, pname, params);
}

void glGetTexGenivOES(GLenum coord, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexGenivOES(ctx, coord, pname, params);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetTexGenxvOES(ctx, coord, pname, params);
}

void glBindVertexArrayOES(GLuint array)
{
	//GET_CONTEXT; 
	 //ctx->glBindVertexArrayOES(ctx, array);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint* arrays)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteVertexArraysOES(ctx, n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint* arrays)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glGenVertexArraysOES(ctx, n, arrays);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glIsVertexArrayOES(ctx, array);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum* attachments)
{
	//GET_CONTEXT; 
	 //ctx->glDiscardFramebufferEXT(ctx, target, numAttachments, attachments);
}

void glMultiDrawArraysEXT(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount)
{
	//GET_CONTEXT; 
	 //ctx->glMultiDrawArraysEXT(ctx, mode, first, count, primcount);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount)
{
	//GET_CONTEXT; 
	 //ctx->glMultiDrawElementsEXT(ctx, mode, count, type, indices, primcount);
}

void glMultiDrawArraysSUN(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount)
{
	//GET_CONTEXT; 
	 //ctx->glMultiDrawArraysSUN(ctx, mode, first, count, primcount);
}

void glMultiDrawElementsSUN(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount)
{
	//GET_CONTEXT; 
	 //ctx->glMultiDrawElementsSUN(ctx, mode, count, type, indices, primcount);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	//GET_CONTEXT; 
	 //ctx->glRenderbufferStorageMultisampleIMG(ctx, target, samples, internalformat, width, height);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	//GET_CONTEXT; 
	 //ctx->glFramebufferTexture2DMultisampleIMG(ctx, target, attachment, textarget, texture, level, samples);
}

void glDeleteFencesNV(GLsizei n, const GLuint* fences)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glDeleteFencesNV(ctx, n, fences);
}

void glGenFencesNV(GLsizei n, GLuint* fences)
{
	//GET_CONTEXT; 
	 //if(n<0){ ctx->setError(GL_INVALID_VALUE); return; }
	 //ctx->glGenFencesNV(ctx, n, fences);
}

GLboolean glIsFenceNV(GLuint fence)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glIsFenceNV(ctx, fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glTestFenceNV(ctx, fence);
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glGetFenceivNV(ctx, fence, pname, params);
}

void glFinishFenceNV(GLuint fence)
{
	//GET_CONTEXT; 
	 //ctx->glFinishFenceNV(ctx, fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
	//GET_CONTEXT; 
	 //ctx->glSetFenceNV(ctx, fence, condition);
}

void glGetDriverControlsQCOM(GLint* num, GLsizei size, GLuint* driverControls)
{
	//GET_CONTEXT; 
	 //ctx->glGetDriverControlsQCOM(ctx, num, size, driverControls);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString)
{
	//GET_CONTEXT; 
	 //ctx->glGetDriverControlStringQCOM(ctx, driverControl, bufSize, length, driverControlString);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
	//GET_CONTEXT; 
	 //ctx->glEnableDriverControlQCOM(ctx, driverControl);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
	//GET_CONTEXT; 
	 //ctx->glDisableDriverControlQCOM(ctx, driverControl);
}

void glExtGetTexturesQCOM(GLuint* textures, GLint maxTextures, GLint* numTextures)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetTexturesQCOM(ctx, textures, maxTextures, numTextures);
}

void glExtGetBuffersQCOM(GLuint* buffers, GLint maxBuffers, GLint* numBuffers)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetBuffersQCOM(ctx, buffers, maxBuffers, numBuffers);
}

void glExtGetRenderbuffersQCOM(GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetRenderbuffersQCOM(ctx, renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetFramebuffersQCOM(GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetFramebuffersQCOM(ctx, framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetTexLevelParameterivQCOM(ctx, texture, face, level, pname, params);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
	//GET_CONTEXT; 
	 //ctx->glExtTexObjectStateOverrideiQCOM(ctx, target, pname, param);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid* texels)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetTexSubImageQCOM(ctx, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetBufferPointervQCOM(GLenum target, GLvoid** params)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetBufferPointervQCOM(ctx, target, params);
}

void glExtGetShadersQCOM(GLuint* shaders, GLint maxShaders, GLint* numShaders)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetShadersQCOM(ctx, shaders, maxShaders, numShaders);
}

void glExtGetProgramsQCOM(GLuint* programs, GLint maxPrograms, GLint* numPrograms)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetProgramsQCOM(ctx, programs, maxPrograms, numPrograms);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
	//GET_CONTEXT; 
	 return 0;//ctx->glExtIsProgramBinaryQCOM(ctx, program);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar* source, GLint* length)
{
	//GET_CONTEXT; 
	 //ctx->glExtGetProgramBinarySourceQCOM(ctx, program, shadertype, source, length);
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
	//GET_CONTEXT; 
	 //ctx->glStartTilingQCOM(ctx, x, y, width, height, preserveMask);
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
	//GET_CONTEXT; 
	 //ctx->glEndTilingQCOM(ctx, preserveMask);
}

