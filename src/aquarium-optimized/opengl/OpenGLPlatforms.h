#ifndef OPENGL_PLATFORMS
#define OPENGL_PLATFORMS

#include <KHR/khrplatform.h>

using GLvoid         = void;
using GLchar         = char;
using GLenum         = unsigned int;
using GLboolean      = unsigned char;
using GLbitfield     = unsigned int;
using GLbyte         = khronos_int8_t;
using GLshort        = short;
using GLint          = int;
using GLsizei        = int;
using GLubyte        = khronos_uint8_t;
using GLushort       = unsigned short;
using GLuint         = unsigned int;
using GLfloat        = khronos_float_t;
using GLclampf       = khronos_float_t;
using GLdouble       = double;
using GLclampd       = double;
using GLfixed        = khronos_int32_t;
using GLintptr       = khronos_intptr_t;
using GLsizeiptr     = khronos_ssize_t;
using GLhalf         = unsigned short;
using GLint64        = khronos_int64_t;
using GLuint64       = khronos_uint64_t;
using GLsync         = struct __GLsync *;
using GLDEBUGPROC    = void(KHRONOS_APIENTRY *)(GLenum source,
                                             GLenum type,
                                             GLuint id,
                                             GLenum severity,
                                             GLsizei length,
                                             const GLchar *message,
                                             const void *userParam);
using GLDEBUGPROCARB = GLDEBUGPROC;
using GLDEBUGPROCKHR = GLDEBUGPROC;
using GLDEBUGPROCAMD = void(KHRONOS_APIENTRY *)(GLuint id,
                                                GLenum category,
                                                GLenum severity,
                                                GLsizei length,
                                                const GLchar *message,
                                                void *userParam);

// OpenGL ES 2.0
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_FUNC_ADD 0x8006
#define GL_BLEND_EQUATION 0x8009
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_BLEND_COLOR 0x8005
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_STREAM_DRAW 0x88E0
#define GL_STATIC_DRAW 0x88E4
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_FRONT_AND_BACK 0x0408
#define GL_TEXTURE_2D 0x0DE1
#define GL_CULL_FACE 0x0B44
#define GL_BLEND 0x0BE2
#define GL_DITHER 0x0BD0
#define GL_STENCIL_TEST 0x0B90
#define GL_DEPTH_TEST 0x0B71
#define GL_SCISSOR_TEST 0x0C11
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_LINE_WIDTH 0x0B21
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VIEWPORT 0x0BA2
#define GL_SCISSOR_BOX 0x0C10
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_FIXED 0x140C
#define GL_DEPTH_COMPONENT 0x1902
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_SHADER_TYPE 0x8B4F
#define GL_DELETE_STATUS 0x8B80
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_INVERT 0x150A
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_TEXTURE 0x1702
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_REPEAT 0x2901
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_MIRRORED_REPEAT 0x8370
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_CUBE 0x8B60
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_COMPILE_STATUS 0x8B81
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_SHADER_COMPILER 0x8DFA
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGB565 0x8D62
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_STENCIL_INDEX8 0x8D48
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_NONE 0
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS 0x8CD9
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506

using PFNGLACTIVETEXTUREPROC         = void(KHRONOS_APIENTRY *)(GLenum texture);
using PFNGLATTACHSHADERPROC          = void(KHRONOS_APIENTRY *)(GLuint program, GLuint shader);
using PFNGLBINDATTRIBLOCATIONPROC    = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLuint index,
                                                             const GLchar *name);
using PFNGLBINDBUFFERPROC            = void(KHRONOS_APIENTRY *)(GLenum target, GLuint buffer);
using PFNGLBINDFRAMEBUFFERPROC       = void(KHRONOS_APIENTRY *)(GLenum target, GLuint framebuffer);
using PFNGLBINDRENDERBUFFERPROC      = void(KHRONOS_APIENTRY *)(GLenum target, GLuint renderbuffer);
using PFNGLBINDTEXTUREPROC           = void(KHRONOS_APIENTRY *)(GLenum target, GLuint texture);
using PFNGLBLENDCOLORPROC            = void(KHRONOS_APIENTRY *)(GLfloat red,
                                                     GLfloat green,
                                                     GLfloat blue,
                                                     GLfloat alpha);
using PFNGLBLENDEQUATIONPROC         = void(KHRONOS_APIENTRY *)(GLenum mode);
using PFNGLBLENDEQUATIONSEPARATEPROC = void(KHRONOS_APIENTRY *)(GLenum modeRGB, GLenum modeAlpha);
using PFNGLBLENDFUNCPROC             = void(KHRONOS_APIENTRY *)(GLenum sfactor, GLenum dfactor);
using PFNGLBLENDFUNCSEPARATEPROC     = void(KHRONOS_APIENTRY *)(GLenum sfactorRGB,
                                                            GLenum dfactorRGB,
                                                            GLenum sfactorAlpha,
                                                            GLenum dfactorAlpha);
using PFNGLBUFFERDATAPROC            = void(KHRONOS_APIENTRY *)(GLenum target,
                                                     GLsizeiptr size,
                                                     const void *data,
                                                     GLenum usage);
using PFNGLBUFFERSUBDATAPROC         = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLintptr offset,
                                                        GLsizeiptr size,
                                                        const void *data);
using PFNGLCHECKFRAMEBUFFERSTATUSPROC  = GLenum(KHRONOS_APIENTRY *)(GLenum target);
using PFNGLCLEARPROC                   = void(KHRONOS_APIENTRY *)(GLbitfield mask);
using PFNGLCLEARCOLORPROC              = void(KHRONOS_APIENTRY *)(GLfloat red,
                                                     GLfloat green,
                                                     GLfloat blue,
                                                     GLfloat alpha);
using PFNGLCLEARDEPTHFPROC             = void(KHRONOS_APIENTRY *)(GLfloat d);
using PFNGLCLEARSTENCILPROC            = void(KHRONOS_APIENTRY *)(GLint s);
using PFNGLCOLORMASKPROC               = void(KHRONOS_APIENTRY *)(GLboolean red,
                                                    GLboolean green,
                                                    GLboolean blue,
                                                    GLboolean alpha);
using PFNGLCOMPILESHADERPROC           = void(KHRONOS_APIENTRY *)(GLuint shader);
using PFNGLCOMPRESSEDTEXIMAGE2DPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLint level,
                                                               GLenum internalformat,
                                                               GLsizei width,
                                                               GLsizei height,
                                                               GLint border,
                                                               GLsizei imageSize,
                                                               const void *data);
using PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLint level,
                                                                  GLint xoffset,
                                                                  GLint yoffset,
                                                                  GLsizei width,
                                                                  GLsizei height,
                                                                  GLenum format,
                                                                  GLsizei imageSize,
                                                                  const void *data);
using PFNGLCOPYTEXIMAGE2DPROC          = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLint level,
                                                         GLenum internalformat,
                                                         GLint x,
                                                         GLint y,
                                                         GLsizei width,
                                                         GLsizei height,
                                                         GLint border);
using PFNGLCOPYTEXSUBIMAGE2DPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLint x,
                                                            GLint y,
                                                            GLsizei width,
                                                            GLsizei height);
using PFNGLCREATEPROGRAMPROC           = GLuint(KHRONOS_APIENTRY *)();
using PFNGLCREATESHADERPROC            = GLuint(KHRONOS_APIENTRY *)(GLenum type);
using PFNGLCULLFACEPROC                = void(KHRONOS_APIENTRY *)(GLenum mode);
using PFNGLDELETEBUFFERSPROC           = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *buffers);
using PFNGLDELETEFRAMEBUFFERSPROC = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *framebuffers);
using PFNGLDELETEPROGRAMPROC      = void(KHRONOS_APIENTRY *)(GLuint program);
using PFNGLDELETERENDERBUFFERSPROC = void(KHRONOS_APIENTRY *)(GLsizei n,
                                                              const GLuint *renderbuffers);
using PFNGLDELETESHADERPROC        = void(KHRONOS_APIENTRY *)(GLuint shader);
using PFNGLDELETETEXTURESPROC      = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *textures);
using PFNGLDEPTHFUNCPROC           = void(KHRONOS_APIENTRY *)(GLenum func);
using PFNGLDEPTHMASKPROC           = void(KHRONOS_APIENTRY *)(GLboolean flag);
using PFNGLDEPTHRANGEFPROC         = void(KHRONOS_APIENTRY *)(GLfloat n, GLfloat f);
using PFNGLDETACHSHADERPROC        = void(KHRONOS_APIENTRY *)(GLuint program, GLuint shader);
using PFNGLDISABLEPROC             = void(KHRONOS_APIENTRY *)(GLenum cap);
using PFNGLDISABLEVERTEXATTRIBARRAYPROC = void(KHRONOS_APIENTRY *)(GLuint index);
using PFNGLDRAWARRAYSPROC   = void(KHRONOS_APIENTRY *)(GLenum mode, GLint first, GLsizei count);
using PFNGLDRAWELEMENTSPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                       GLsizei count,
                                                       GLenum type,
                                                       const void *indices);
using PFNGLENABLEPROC       = void(KHRONOS_APIENTRY *)(GLenum cap);
using PFNGLENABLEVERTEXATTRIBARRAYPROC = void(KHRONOS_APIENTRY *)(GLuint index);
using PFNGLFINISHPROC                  = void(KHRONOS_APIENTRY *)();
using PFNGLFLUSHPROC                   = void(KHRONOS_APIENTRY *)();
using PFNGLFRAMEBUFFERRENDERBUFFERPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLenum attachment,
                                                                  GLenum renderbuffertarget,
                                                                  GLuint renderbuffer);
using PFNGLFRAMEBUFFERTEXTURE2DPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLenum attachment,
                                                               GLenum textarget,
                                                               GLuint texture,
                                                               GLint level);
using PFNGLFRONTFACEPROC               = void(KHRONOS_APIENTRY *)(GLenum mode);
using PFNGLGENBUFFERSPROC              = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *buffers);
using PFNGLGENERATEMIPMAPPROC          = void(KHRONOS_APIENTRY *)(GLenum target);
using PFNGLGENFRAMEBUFFERSPROC         = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *framebuffers);
using PFNGLGENRENDERBUFFERSPROC        = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *renderbuffers);
using PFNGLGENTEXTURESPROC             = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *textures);
using PFNGLGETACTIVEATTRIBPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                          GLuint index,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLint *size,
                                                          GLenum *type,
                                                          GLchar *name);
using PFNGLGETACTIVEUNIFORMPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLuint index,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLint *size,
                                                           GLenum *type,
                                                           GLchar *name);
using PFNGLGETATTACHEDSHADERSPROC      = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLsizei maxCount,
                                                             GLsizei *count,
                                                             GLuint *shaders);
using PFNGLGETATTRIBLOCATIONPROC    = GLint(KHRONOS_APIENTRY *)(GLuint program, const GLchar *name);
using PFNGLGETBOOLEANVPROC          = void(KHRONOS_APIENTRY *)(GLenum pname, GLboolean *data);
using PFNGLGETBUFFERPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLenum pname,
                                                               GLint *params);
using PFNGLGETERRORPROC             = GLenum(KHRONOS_APIENTRY *)();
using PFNGLGETFLOATVPROC            = void(KHRONOS_APIENTRY *)(GLenum pname, GLfloat *data);
using PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                              GLenum attachment,
                                                                              GLenum pname,
                                                                              GLint *params);
using PFNGLGETINTEGERVPROC  = void(KHRONOS_APIENTRY *)(GLenum pname, GLint *data);
using PFNGLGETPROGRAMIVPROC = void(KHRONOS_APIENTRY *)(GLuint program, GLenum pname, GLint *params);
using PFNGLGETPROGRAMINFOLOGPROC          = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLchar *infoLog);
using PFNGLGETRENDERBUFFERPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                     GLenum pname,
                                                                     GLint *params);
using PFNGLGETSHADERIVPROC = void(KHRONOS_APIENTRY *)(GLuint shader, GLenum pname, GLint *params);
using PFNGLGETSHADERINFOLOGPROC         = void(KHRONOS_APIENTRY *)(GLuint shader,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLchar *infoLog);
using PFNGLGETSHADERPRECISIONFORMATPROC = void(KHRONOS_APIENTRY *)(GLenum shadertype,
                                                                   GLenum precisiontype,
                                                                   GLint *range,
                                                                   GLint *precision);
using PFNGLGETSHADERSOURCEPROC          = void(KHRONOS_APIENTRY *)(GLuint shader,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLchar *source);
using PFNGLGETSTRINGPROC                = const GLubyte *(KHRONOS_APIENTRY *)(GLenum name);
using PFNGLGETTEXPARAMETERFVPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLenum pname,
                                                            GLfloat *params);
using PFNGLGETTEXPARAMETERIVPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLenum pname,
                                                            GLint *params);
using PFNGLGETUNIFORMFVPROC             = void(KHRONOS_APIENTRY *)(GLuint program,
                                                       GLint location,
                                                       GLfloat *params);
using PFNGLGETUNIFORMIVPROC             = void(KHRONOS_APIENTRY *)(GLuint program,
                                                       GLint location,
                                                       GLint *params);
using PFNGLGETUNIFORMLOCATIONPROC = GLint(KHRONOS_APIENTRY *)(GLuint program, const GLchar *name);
using PFNGLGETVERTEXATTRIBFVPROC  = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum pname,
                                                            GLfloat *params);
using PFNGLGETVERTEXATTRIBIVPROC  = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum pname,
                                                            GLint *params);
using PFNGLGETVERTEXATTRIBPOINTERVPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                                  GLenum pname,
                                                                  void **pointer);
using PFNGLHINTPROC                    = void(KHRONOS_APIENTRY *)(GLenum target, GLenum mode);
using PFNGLISBUFFERPROC                = GLboolean(KHRONOS_APIENTRY *)(GLuint buffer);
using PFNGLISENABLEDPROC               = GLboolean(KHRONOS_APIENTRY *)(GLenum cap);
using PFNGLISFRAMEBUFFERPROC           = GLboolean(KHRONOS_APIENTRY *)(GLuint framebuffer);
using PFNGLISPROGRAMPROC               = GLboolean(KHRONOS_APIENTRY *)(GLuint program);
using PFNGLISRENDERBUFFERPROC          = GLboolean(KHRONOS_APIENTRY *)(GLuint renderbuffer);
using PFNGLISSHADERPROC                = GLboolean(KHRONOS_APIENTRY *)(GLuint shader);
using PFNGLISTEXTUREPROC               = GLboolean(KHRONOS_APIENTRY *)(GLuint texture);
using PFNGLLINEWIDTHPROC               = void(KHRONOS_APIENTRY *)(GLfloat width);
using PFNGLLINKPROGRAMPROC             = void(KHRONOS_APIENTRY *)(GLuint program);
using PFNGLPIXELSTOREIPROC             = void(KHRONOS_APIENTRY *)(GLenum pname, GLint param);
using PFNGLPOLYGONOFFSETPROC           = void(KHRONOS_APIENTRY *)(GLfloat factor, GLfloat units);
using PFNGLREADPIXELSPROC              = void(KHRONOS_APIENTRY *)(GLint x,
                                                     GLint y,
                                                     GLsizei width,
                                                     GLsizei height,
                                                     GLenum format,
                                                     GLenum type,
                                                     void *pixels);
using PFNGLRELEASESHADERCOMPILERPROC   = void(KHRONOS_APIENTRY *)();
using PFNGLRENDERBUFFERSTORAGEPROC     = void(KHRONOS_APIENTRY *)(GLenum target,
                                                              GLenum internalformat,
                                                              GLsizei width,
                                                              GLsizei height);
using PFNGLSAMPLECOVERAGEPROC          = void(KHRONOS_APIENTRY *)(GLfloat value, GLboolean invert);
using PFNGLSCISSORPROC = void(KHRONOS_APIENTRY *)(GLint x, GLint y, GLsizei width, GLsizei height);
using PFNGLSHADERBINARYPROC        = void(KHRONOS_APIENTRY *)(GLsizei count,
                                                       const GLuint *shaders,
                                                       GLenum binaryformat,
                                                       const void *binary,
                                                       GLsizei length);
using PFNGLSHADERSOURCEPROC        = void(KHRONOS_APIENTRY *)(GLuint shader,
                                                       GLsizei count,
                                                       const GLchar *const *string,
                                                       const GLint *length);
using PFNGLSTENCILFUNCPROC         = void(KHRONOS_APIENTRY *)(GLenum func, GLint ref, GLuint mask);
using PFNGLSTENCILFUNCSEPARATEPROC = void(KHRONOS_APIENTRY *)(GLenum face,
                                                              GLenum func,
                                                              GLint ref,
                                                              GLuint mask);
using PFNGLSTENCILMASKPROC         = void(KHRONOS_APIENTRY *)(GLuint mask);
using PFNGLSTENCILMASKSEPARATEPROC = void(KHRONOS_APIENTRY *)(GLenum face, GLuint mask);
using PFNGLSTENCILOPPROC = void(KHRONOS_APIENTRY *)(GLenum fail, GLenum zfail, GLenum zpass);
using PFNGLSTENCILOPSEPARATEPROC = void(KHRONOS_APIENTRY *)(GLenum face,
                                                            GLenum sfail,
                                                            GLenum dpfail,
                                                            GLenum dppass);
using PFNGLTEXIMAGE2DPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                     GLint level,
                                                     GLint internalformat,
                                                     GLsizei width,
                                                     GLsizei height,
                                                     GLint border,
                                                     GLenum format,
                                                     GLenum type,
                                                     const void *pixels);
using PFNGLTEXPARAMETERFPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLenum pname, GLfloat param);
using PFNGLTEXPARAMETERFVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLenum pname,
                                                         const GLfloat *params);
using PFNGLTEXPARAMETERIPROC  = void(KHRONOS_APIENTRY *)(GLenum target, GLenum pname, GLint param);
using PFNGLTEXPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLenum pname,
                                                         const GLint *params);
using PFNGLTEXSUBIMAGE2DPROC  = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLint level,
                                                        GLint xoffset,
                                                        GLint yoffset,
                                                        GLsizei width,
                                                        GLsizei height,
                                                        GLenum format,
                                                        GLenum type,
                                                        const void *pixels);
using PFNGLUNIFORM1FPROC      = void(KHRONOS_APIENTRY *)(GLint location, GLfloat v0);
using PFNGLUNIFORM1FVPROC     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value);
using PFNGLUNIFORM1IPROC      = void(KHRONOS_APIENTRY *)(GLint location, GLint v0);
using PFNGLUNIFORM1IVPROC     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLint *value);
using PFNGLUNIFORM2FPROC      = void(KHRONOS_APIENTRY *)(GLint location, GLfloat v0, GLfloat v1);
using PFNGLUNIFORM2FVPROC     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value);
using PFNGLUNIFORM2IPROC      = void(KHRONOS_APIENTRY *)(GLint location, GLint v0, GLint v1);
using PFNGLUNIFORM2IVPROC     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLint *value);
using PFNGLUNIFORM3FPROC      = void(KHRONOS_APIENTRY *)(GLint location,
                                                    GLfloat v0,
                                                    GLfloat v1,
                                                    GLfloat v2);
using PFNGLUNIFORM3FVPROC     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value);
using PFNGLUNIFORM3IPROC  = void(KHRONOS_APIENTRY *)(GLint location, GLint v0, GLint v1, GLint v2);
using PFNGLUNIFORM3IVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLint *value);
using PFNGLUNIFORM4FPROC =
    void(KHRONOS_APIENTRY *)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
using PFNGLUNIFORM4FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value);
using PFNGLUNIFORM4IPROC =
    void(KHRONOS_APIENTRY *)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
using PFNGLUNIFORM4IVPROC       = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLint *value);
using PFNGLUNIFORMMATRIX2FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value);
using PFNGLUNIFORMMATRIX3FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value);
using PFNGLUNIFORMMATRIX4FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value);
using PFNGLUSEPROGRAMPROC       = void(KHRONOS_APIENTRY *)(GLuint program);
using PFNGLVALIDATEPROGRAMPROC  = void(KHRONOS_APIENTRY *)(GLuint program);
using PFNGLVERTEXATTRIB1FPROC   = void(KHRONOS_APIENTRY *)(GLuint index, GLfloat x);
using PFNGLVERTEXATTRIB1FVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLfloat *v);
using PFNGLVERTEXATTRIB2FPROC   = void(KHRONOS_APIENTRY *)(GLuint index, GLfloat x, GLfloat y);
using PFNGLVERTEXATTRIB2FVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLfloat *v);
using PFNGLVERTEXATTRIB3FPROC   = void(KHRONOS_APIENTRY *)(GLuint index,
                                                         GLfloat x,
                                                         GLfloat y,
                                                         GLfloat z);
using PFNGLVERTEXATTRIB3FVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLfloat *v);
using PFNGLVERTEXATTRIB4FPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
using PFNGLVERTEXATTRIB4FVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLfloat *v);
using PFNGLVERTEXATTRIBPOINTERPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                              GLint size,
                                                              GLenum type,
                                                              GLboolean normalized,
                                                              GLsizei stride,
                                                              const void *pointer);
using PFNGLVIEWPORTPROC = void(KHRONOS_APIENTRY *)(GLint x, GLint y, GLsizei width, GLsizei height);

// OpenGL ES 3.0
#define GL_READ_BUFFER 0x0C02
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_RED 0x1903
#define GL_RGB8 0x8051
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_3D 0x806F
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_PIXEL_PACK_BUFFER 0x88EB
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#define GL_FLOAT_MAT2x3 0x8B65
#define GL_FLOAT_MAT2x4 0x8B66
#define GL_FLOAT_MAT3x2 0x8B67
#define GL_FLOAT_MAT3x4 0x8B68
#define GL_FLOAT_MAT4x2 0x8B69
#define GL_FLOAT_MAT4x3 0x8B6A
#define GL_SRGB 0x8C40
#define GL_SRGB8 0x8C41
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_RGBA32F 0x8814
#define GL_RGB32F 0x8815
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGB32UI 0x8D71
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGBA8UI 0x8D7C
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGB32I 0x8D83
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT1 0x8CE1
#define GL_COLOR_ATTACHMENT2 0x8CE2
#define GL_COLOR_ATTACHMENT3 0x8CE3
#define GL_COLOR_ATTACHMENT4 0x8CE4
#define GL_COLOR_ATTACHMENT5 0x8CE5
#define GL_COLOR_ATTACHMENT6 0x8CE6
#define GL_COLOR_ATTACHMENT7 0x8CE7
#define GL_COLOR_ATTACHMENT8 0x8CE8
#define GL_COLOR_ATTACHMENT9 0x8CE9
#define GL_COLOR_ATTACHMENT10 0x8CEA
#define GL_COLOR_ATTACHMENT11 0x8CEB
#define GL_COLOR_ATTACHMENT12 0x8CEC
#define GL_COLOR_ATTACHMENT13 0x8CED
#define GL_COLOR_ATTACHMENT14 0x8CEE
#define GL_COLOR_ATTACHMENT15 0x8CEF
#define GL_COLOR_ATTACHMENT16 0x8CF0
#define GL_COLOR_ATTACHMENT17 0x8CF1
#define GL_COLOR_ATTACHMENT18 0x8CF2
#define GL_COLOR_ATTACHMENT19 0x8CF3
#define GL_COLOR_ATTACHMENT20 0x8CF4
#define GL_COLOR_ATTACHMENT21 0x8CF5
#define GL_COLOR_ATTACHMENT22 0x8CF6
#define GL_COLOR_ATTACHMENT23 0x8CF7
#define GL_COLOR_ATTACHMENT24 0x8CF8
#define GL_COLOR_ATTACHMENT25 0x8CF9
#define GL_COLOR_ATTACHMENT26 0x8CFA
#define GL_COLOR_ATTACHMENT27 0x8CFB
#define GL_COLOR_ATTACHMENT28 0x8CFC
#define GL_COLOR_ATTACHMENT29 0x8CFD
#define GL_COLOR_ATTACHMENT30 0x8CFE
#define GL_COLOR_ATTACHMENT31 0x8CFF
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_HALF_FLOAT 0x140B
#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_RG8 0x822B
#define GL_R16F 0x822D
#define GL_R32F 0x822E
#define GL_RG16F 0x822F
#define GL_RG32F 0x8230
#define GL_R8I 0x8231
#define GL_R8UI 0x8232
#define GL_R16I 0x8233
#define GL_R16UI 0x8234
#define GL_R32I 0x8235
#define GL_R32UI 0x8236
#define GL_RG8I 0x8237
#define GL_RG8UI 0x8238
#define GL_RG16I 0x8239
#define GL_RG16UI 0x823A
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGB8_SNORM 0x8F96
#define GL_RGBA8_SNORM 0x8F97
#define GL_SIGNED_NORMALIZED 0x8F9C
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#define GL_COPY_READ_BUFFER 0x8F36
#define GL_COPY_WRITE_BUFFER 0x8F37
#define GL_COPY_READ_BUFFER_BINDING 0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING 0x8F37
#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#define GL_UNIFORM_OFFSET 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFF
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#define GL_OBJECT_TYPE 0x9112
#define GL_SYNC_CONDITION 0x9113
#define GL_SYNC_STATUS 0x9114
#define GL_SYNC_FLAGS 0x9115
#define GL_SYNC_FENCE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#define GL_UNSIGNALED 0x9118
#define GL_SIGNALED 0x9119
#define GL_ALREADY_SIGNALED 0x911A
#define GL_TIMEOUT_EXPIRED 0x911B
#define GL_CONDITION_SATISFIED 0x911C
#define GL_WAIT_FAILED 0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFF
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_SAMPLER_BINDING 0x8919
#define GL_RGB10_A2UI 0x906F
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_INT_2_10_10_10_REV 0x8D9F
#define GL_TRANSFORM_FEEDBACK 0x8E22
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#define GL_PROGRAM_BINARY_FORMATS 0x87FF
#define GL_COMPRESSED_R11_EAC 0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#define GL_COMPRESSED_RG11_EAC 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#define GL_COMPRESSED_RGB8_ETC2 0x9274
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F
#define GL_MAX_ELEMENT_INDEX 0x8D6B
#define GL_NUM_SAMPLE_COUNTS 0x9380
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF

using PFNGLREADBUFFERPROC              = void(KHRONOS_APIENTRY *)(GLenum src);
using PFNGLDRAWRANGEELEMENTSPROC       = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                            GLuint start,
                                                            GLuint end,
                                                            GLsizei count,
                                                            GLenum type,
                                                            const void *indices);
using PFNGLTEXIMAGE3DPROC              = void(KHRONOS_APIENTRY *)(GLenum target,
                                                     GLint level,
                                                     GLint internalformat,
                                                     GLsizei width,
                                                     GLsizei height,
                                                     GLsizei depth,
                                                     GLint border,
                                                     GLenum format,
                                                     GLenum type,
                                                     const void *pixels);
using PFNGLTEXSUBIMAGE3DPROC           = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLint level,
                                                        GLint xoffset,
                                                        GLint yoffset,
                                                        GLint zoffset,
                                                        GLsizei width,
                                                        GLsizei height,
                                                        GLsizei depth,
                                                        GLenum format,
                                                        GLenum type,
                                                        const void *pixels);
using PFNGLCOPYTEXSUBIMAGE3DPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLint zoffset,
                                                            GLint x,
                                                            GLint y,
                                                            GLsizei width,
                                                            GLsizei height);
using PFNGLCOMPRESSEDTEXIMAGE3DPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLint level,
                                                               GLenum internalformat,
                                                               GLsizei width,
                                                               GLsizei height,
                                                               GLsizei depth,
                                                               GLint border,
                                                               GLsizei imageSize,
                                                               const void *data);
using PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLint level,
                                                                  GLint xoffset,
                                                                  GLint yoffset,
                                                                  GLint zoffset,
                                                                  GLsizei width,
                                                                  GLsizei height,
                                                                  GLsizei depth,
                                                                  GLenum format,
                                                                  GLsizei imageSize,
                                                                  const void *data);
using PFNGLGENQUERIESPROC              = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *ids);
using PFNGLDELETEQUERIESPROC           = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *ids);
using PFNGLISQUERYPROC                 = GLboolean(KHRONOS_APIENTRY *)(GLuint id);
using PFNGLBEGINQUERYPROC              = void(KHRONOS_APIENTRY *)(GLenum target, GLuint id);
using PFNGLENDQUERYPROC                = void(KHRONOS_APIENTRY *)(GLenum target);
using PFNGLGETQUERYIVPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLenum pname, GLint *params);
using PFNGLGETQUERYOBJECTUIVPROC  = void(KHRONOS_APIENTRY *)(GLuint id,
                                                            GLenum pname,
                                                            GLuint *params);
using PFNGLUNMAPBUFFERPROC        = GLboolean(KHRONOS_APIENTRY *)(GLenum target);
using PFNGLGETBUFFERPOINTERVPROC  = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLenum pname,
                                                            void **params);
using PFNGLDRAWBUFFERSPROC        = void(KHRONOS_APIENTRY *)(GLsizei n, const GLenum *bufs);
using PFNGLUNIFORMMATRIX2X3FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLUNIFORMMATRIX3X2FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLUNIFORMMATRIX2X4FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLUNIFORMMATRIX4X2FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLUNIFORMMATRIX3X4FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLUNIFORMMATRIX4X3FVPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value);
using PFNGLBLITFRAMEBUFFERPROC    = void(KHRONOS_APIENTRY *)(GLint srcX0,
                                                          GLint srcY0,
                                                          GLint srcX1,
                                                          GLint srcY1,
                                                          GLint dstX0,
                                                          GLint dstY0,
                                                          GLint dstX1,
                                                          GLint dstY1,
                                                          GLbitfield mask,
                                                          GLenum filter);
using PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                         GLsizei samples,
                                                                         GLenum internalformat,
                                                                         GLsizei width,
                                                                         GLsizei height);
using PFNGLFRAMEBUFFERTEXTURELAYERPROC        = void(
    KHRONOS_APIENTRY *)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
using PFNGLMAPBUFFERRANGEPROC         = void *(KHRONOS_APIENTRY *)(GLenum target,
                                                           GLintptr offset,
                                                           GLsizeiptr length,
                                                           GLbitfield access);
using PFNGLFLUSHMAPPEDBUFFERRANGEPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                 GLintptr offset,
                                                                 GLsizeiptr length);
using PFNGLBINDVERTEXARRAYPROC        = void(KHRONOS_APIENTRY *)(GLuint array);
using PFNGLDELETEVERTEXARRAYSPROC     = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *arrays);
using PFNGLGENVERTEXARRAYSPROC        = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *arrays);
using PFNGLISVERTEXARRAYPROC          = GLboolean(KHRONOS_APIENTRY *)(GLuint array);
using PFNGLGETINTEGERI_VPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index, GLint *data);
using PFNGLBEGINTRANSFORMFEEDBACKPROC      = void(KHRONOS_APIENTRY *)(GLenum primitiveMode);
using PFNGLENDTRANSFORMFEEDBACKPROC        = void(KHRONOS_APIENTRY *)();
using PFNGLBINDBUFFERRANGEPROC             = void(KHRONOS_APIENTRY *)(GLenum target,
                                                          GLuint index,
                                                          GLuint buffer,
                                                          GLintptr offset,
                                                          GLsizeiptr size);
using PFNGLBINDBUFFERBASEPROC              = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLuint index,
                                                         GLuint buffer);
using PFNGLTRANSFORMFEEDBACKVARYINGSPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLsizei count,
                                                                    const GLchar *const *varyings,
                                                                    GLenum bufferMode);
using PFNGLGETTRANSFORMFEEDBACKVARYINGPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                      GLuint index,
                                                                      GLsizei bufSize,
                                                                      GLsizei *length,
                                                                      GLsizei *size,
                                                                      GLenum *type,
                                                                      GLchar *name);
using PFNGLVERTEXATTRIBIPOINTERPROC        = void(
    KHRONOS_APIENTRY *)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
using PFNGLGETVERTEXATTRIBIIVPROC  = void(KHRONOS_APIENTRY *)(GLuint index,
                                                             GLenum pname,
                                                             GLint *params);
using PFNGLGETVERTEXATTRIBIUIVPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                              GLenum pname,
                                                              GLuint *params);
using PFNGLVERTEXATTRIBI4IPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLint x, GLint y, GLint z, GLint w);
using PFNGLVERTEXATTRIBI4UIPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
using PFNGLVERTEXATTRIBI4IVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIBI4UIVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLGETUNIFORMUIVPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                        GLint location,
                                                        GLuint *params);
using PFNGLGETFRAGDATALOCATIONPROC = GLint(KHRONOS_APIENTRY *)(GLuint program, const GLchar *name);
using PFNGLUNIFORM1UIPROC          = void(KHRONOS_APIENTRY *)(GLint location, GLuint v0);
using PFNGLUNIFORM2UIPROC          = void(KHRONOS_APIENTRY *)(GLint location, GLuint v0, GLuint v1);
using PFNGLUNIFORM3UIPROC          = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLuint v0,
                                                     GLuint v1,
                                                     GLuint v2);
using PFNGLUNIFORM4UIPROC =
    void(KHRONOS_APIENTRY *)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
using PFNGLUNIFORM1UIVPROC         = void(KHRONOS_APIENTRY *)(GLint location,
                                                      GLsizei count,
                                                      const GLuint *value);
using PFNGLUNIFORM2UIVPROC         = void(KHRONOS_APIENTRY *)(GLint location,
                                                      GLsizei count,
                                                      const GLuint *value);
using PFNGLUNIFORM3UIVPROC         = void(KHRONOS_APIENTRY *)(GLint location,
                                                      GLsizei count,
                                                      const GLuint *value);
using PFNGLUNIFORM4UIVPROC         = void(KHRONOS_APIENTRY *)(GLint location,
                                                      GLsizei count,
                                                      const GLuint *value);
using PFNGLCLEARBUFFERIVPROC       = void(KHRONOS_APIENTRY *)(GLenum buffer,
                                                        GLint drawbuffer,
                                                        const GLint *value);
using PFNGLCLEARBUFFERUIVPROC      = void(KHRONOS_APIENTRY *)(GLenum buffer,
                                                         GLint drawbuffer,
                                                         const GLuint *value);
using PFNGLCLEARBUFFERFVPROC       = void(KHRONOS_APIENTRY *)(GLenum buffer,
                                                        GLint drawbuffer,
                                                        const GLfloat *value);
using PFNGLCLEARBUFFERFIPROC       = void(KHRONOS_APIENTRY *)(GLenum buffer,
                                                        GLint drawbuffer,
                                                        GLfloat depth,
                                                        GLint stencil);
using PFNGLGETSTRINGIPROC          = const GLubyte *(KHRONOS_APIENTRY *)(GLenum name, GLuint index);
using PFNGLCOPYBUFFERSUBDATAPROC   = void(KHRONOS_APIENTRY *)(GLenum readTarget,
                                                            GLenum writeTarget,
                                                            GLintptr readOffset,
                                                            GLintptr writeOffset,
                                                            GLsizeiptr size);
using PFNGLGETUNIFORMINDICESPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLsizei uniformCount,
                                                            const GLchar *const *uniformNames,
                                                            GLuint *uniformIndices);
using PFNGLGETACTIVEUNIFORMSIVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                              GLsizei uniformCount,
                                                              const GLuint *uniformIndices,
                                                              GLenum pname,
                                                              GLint *params);
using PFNGLGETUNIFORMBLOCKINDEXPROC      = GLuint(KHRONOS_APIENTRY *)(GLuint program,
                                                                 const GLchar *uniformBlockName);
using PFNGLGETACTIVEUNIFORMBLOCKIVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLuint uniformBlockIndex,
                                                                  GLenum pname,
                                                                  GLint *params);
using PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLuint uniformBlockIndex,
                                                                    GLsizei bufSize,
                                                                    GLsizei *length,
                                                                    GLchar *uniformBlockName);
using PFNGLUNIFORMBLOCKBINDINGPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                              GLuint uniformBlockIndex,
                                                              GLuint uniformBlockBinding);
using PFNGLDRAWARRAYSINSTANCEDPROC       = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                              GLint first,
                                                              GLsizei count,
                                                              GLsizei instancecount);
using PFNGLDRAWELEMENTSINSTANCEDPROC     = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                GLsizei count,
                                                                GLenum type,
                                                                const void *indices,
                                                                GLsizei instancecount);
using PFNGLFENCESYNCPROC      = GLsync(KHRONOS_APIENTRY *)(GLenum condition, GLbitfield flags);
using PFNGLISSYNCPROC         = GLboolean(KHRONOS_APIENTRY *)(GLsync sync);
using PFNGLDELETESYNCPROC     = void(KHRONOS_APIENTRY *)(GLsync sync);
using PFNGLCLIENTWAITSYNCPROC = GLenum(KHRONOS_APIENTRY *)(GLsync sync,
                                                           GLbitfield flags,
                                                           GLuint64 timeout);
using PFNGLWAITSYNCPROC = void(KHRONOS_APIENTRY *)(GLsync sync, GLbitfield flags, GLuint64 timeout);
using PFNGLGETINTEGER64VPROC = void(KHRONOS_APIENTRY *)(GLenum pname, GLint64 *data);
using PFNGLGETSYNCIVPROC     = void(
    KHRONOS_APIENTRY *)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
using PFNGLGETINTEGER64I_VPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                          GLuint index,
                                                          GLint64 *data);
using PFNGLGETBUFFERPARAMETERI64VPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                 GLenum pname,
                                                                 GLint64 *params);
using PFNGLGENSAMPLERSPROC            = void(KHRONOS_APIENTRY *)(GLsizei count, GLuint *samplers);
using PFNGLDELETESAMPLERSPROC     = void(KHRONOS_APIENTRY *)(GLsizei count, const GLuint *samplers);
using PFNGLISSAMPLERPROC          = GLboolean(KHRONOS_APIENTRY *)(GLuint sampler);
using PFNGLBINDSAMPLERPROC        = void(KHRONOS_APIENTRY *)(GLuint unit, GLuint sampler);
using PFNGLSAMPLERPARAMETERIPROC  = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                            GLenum pname,
                                                            GLint param);
using PFNGLSAMPLERPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                             GLenum pname,
                                                             const GLint *param);
using PFNGLSAMPLERPARAMETERFPROC  = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                            GLenum pname,
                                                            GLfloat param);
using PFNGLSAMPLERPARAMETERFVPROC = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                             GLenum pname,
                                                             const GLfloat *param);
using PFNGLGETSAMPLERPARAMETERIVPROC    = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                                GLenum pname,
                                                                GLint *params);
using PFNGLGETSAMPLERPARAMETERFVPROC    = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                                GLenum pname,
                                                                GLfloat *params);
using PFNGLVERTEXATTRIBDIVISORPROC      = void(KHRONOS_APIENTRY *)(GLuint index, GLuint divisor);
using PFNGLBINDTRANSFORMFEEDBACKPROC    = void(KHRONOS_APIENTRY *)(GLenum target, GLuint id);
using PFNGLDELETETRANSFORMFEEDBACKSPROC = void(KHRONOS_APIENTRY *)(GLsizei n, const GLuint *ids);
using PFNGLGENTRANSFORMFEEDBACKSPROC    = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *ids);
using PFNGLISTRANSFORMFEEDBACKPROC      = GLboolean(KHRONOS_APIENTRY *)(GLuint id);
using PFNGLPAUSETRANSFORMFEEDBACKPROC   = void(KHRONOS_APIENTRY *)();
using PFNGLRESUMETRANSFORMFEEDBACKPROC  = void(KHRONOS_APIENTRY *)();
using PFNGLGETPROGRAMBINARYPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLenum *binaryFormat,
                                                           void *binary);
using PFNGLPROGRAMBINARYPROC            = void(KHRONOS_APIENTRY *)(GLuint program,
                                                        GLenum binaryFormat,
                                                        const void *binary,
                                                        GLsizei length);
using PFNGLPROGRAMPARAMETERIPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLenum pname,
                                                            GLint value);
using PFNGLINVALIDATEFRAMEBUFFERPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLsizei numAttachments,
                                                                const GLenum *attachments);
using PFNGLINVALIDATESUBFRAMEBUFFERPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                   GLsizei numAttachments,
                                                                   const GLenum *attachments,
                                                                   GLint x,
                                                                   GLint y,
                                                                   GLsizei width,
                                                                   GLsizei height);
using PFNGLTEXSTORAGE2DPROC             = void(KHRONOS_APIENTRY *)(GLenum target,
                                                       GLsizei levels,
                                                       GLenum internalformat,
                                                       GLsizei width,
                                                       GLsizei height);
using PFNGLTEXSTORAGE3DPROC             = void(KHRONOS_APIENTRY *)(GLenum target,
                                                       GLsizei levels,
                                                       GLenum internalformat,
                                                       GLsizei width,
                                                       GLsizei height,
                                                       GLsizei depth);
using PFNGLGETINTERNALFORMATIVPROC      = void(KHRONOS_APIENTRY *)(GLenum target,
                                                              GLenum internalformat,
                                                              GLenum pname,
                                                              GLsizei bufSize,
                                                              GLint *params);

// OpenGL ES 3.1
#define GL_COMPUTE_SHADER 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS 0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS 0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS 0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT 0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE 0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE 0x8267
#define GL_DISPATCH_INDIRECT_BUFFER 0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT 0x00000020
#define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43
#define GL_MAX_UNIFORM_LOCATIONS 0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH 0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT 0x9311
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES 0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH 0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT 0x9316
#define GL_MAX_FRAMEBUFFER_SAMPLES 0x9318
#define GL_UNIFORM 0x92E1
#define GL_UNIFORM_BLOCK 0x92E2
#define GL_PROGRAM_INPUT 0x92E3
#define GL_PROGRAM_OUTPUT 0x92E4
#define GL_BUFFER_VARIABLE 0x92E5
#define GL_SHADER_STORAGE_BLOCK 0x92E6
#define GL_ATOMIC_COUNTER_BUFFER 0x92C0
#define GL_TRANSFORM_FEEDBACK_VARYING 0x92F4
#define GL_ACTIVE_RESOURCES 0x92F5
#define GL_MAX_NAME_LENGTH 0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES 0x92F7
#define GL_NAME_LENGTH 0x92F9
#define GL_TYPE 0x92FA
#define GL_ARRAY_SIZE 0x92FB
#define GL_OFFSET 0x92FC
#define GL_BLOCK_INDEX 0x92FD
#define GL_ARRAY_STRIDE 0x92FE
#define GL_MATRIX_STRIDE 0x92FF
#define GL_IS_ROW_MAJOR 0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX 0x9301
#define GL_BUFFER_BINDING 0x9302
#define GL_BUFFER_DATA_SIZE 0x9303
#define GL_NUM_ACTIVE_VARIABLES 0x9304
#define GL_ACTIVE_VARIABLES 0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER 0x9306
#define GL_REFERENCED_BY_FRAGMENT_SHADER 0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER 0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE 0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE 0x930D
#define GL_LOCATION 0x930E
#define GL_VERTEX_SHADER_BIT 0x00000001
#define GL_FRAGMENT_SHADER_BIT 0x00000002
#define GL_ALL_SHADER_BITS 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE 0x8258
#define GL_ACTIVE_PROGRAM 0x8259
#define GL_PROGRAM_PIPELINE_BINDING 0x825A
#define GL_ATOMIC_COUNTER_BUFFER_BINDING 0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START 0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE 0x92C3
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS 0x92D2
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS 0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS 0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS 0x92D9
#define GL_UNSIGNED_INT_ATOMIC_COUNTER 0x92DB
#define GL_MAX_IMAGE_UNITS 0x8F38
#define GL_MAX_VERTEX_IMAGE_UNIFORMS 0x90CA
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS 0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS 0x90CF
#define GL_IMAGE_BINDING_NAME 0x8F3A
#define GL_IMAGE_BINDING_LEVEL 0x8F3B
#define GL_IMAGE_BINDING_LAYERED 0x8F3C
#define GL_IMAGE_BINDING_LAYER 0x8F3D
#define GL_IMAGE_BINDING_ACCESS 0x8F3E
#define GL_IMAGE_BINDING_FORMAT 0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT 0x00000002
#define GL_UNIFORM_BARRIER_BIT 0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT 0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT 0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT 0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT 0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT 0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT 0x00001000
#define GL_ALL_BARRIER_BITS 0xFFFFFFFF
#define GL_IMAGE_2D 0x904D
#define GL_IMAGE_3D 0x904E
#define GL_IMAGE_CUBE 0x9050
#define GL_IMAGE_2D_ARRAY 0x9053
#define GL_INT_IMAGE_2D 0x9058
#define GL_INT_IMAGE_3D 0x9059
#define GL_INT_IMAGE_CUBE 0x905B
#define GL_INT_IMAGE_2D_ARRAY 0x905E
#define GL_UNSIGNED_INT_IMAGE_2D 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D 0x9064
#define GL_UNSIGNED_INT_IMAGE_CUBE 0x9066
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY 0x9069
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_READ_ONLY 0x88B8
#define GL_WRITE_ONLY 0x88B9
#define GL_READ_WRITE 0x88BA
#define GL_SHADER_STORAGE_BUFFER 0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING 0x90D3
#define GL_SHADER_STORAGE_BUFFER_START 0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE 0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE 0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT 0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE 0x90EA
#define GL_STENCIL_INDEX 0x1901
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_SAMPLE_POSITION 0x8E50
#define GL_SAMPLE_MASK 0x8E51
#define GL_SAMPLE_MASK_VALUE 0x8E52
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#define GL_MAX_INTEGER_SAMPLES 0x9110
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_SAMPLES 0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#define GL_TEXTURE_RED_TYPE 0x8C10
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_VERTEX_ATTRIB_BINDING 0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D5
#define GL_VERTEX_BINDING_DIVISOR 0x82D6
#define GL_VERTEX_BINDING_OFFSET 0x82D7
#define GL_VERTEX_BINDING_STRIDE 0x82D8
#define GL_VERTEX_BINDING_BUFFER 0x8F4F
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS 0x82DA
#define GL_MAX_VERTEX_ATTRIB_STRIDE 0x82E5

using PFNGLDISPATCHCOMPUTEPROC         = void(KHRONOS_APIENTRY *)(GLuint num_groups_x,
                                                          GLuint num_groups_y,
                                                          GLuint num_groups_z);
using PFNGLDISPATCHCOMPUTEINDIRECTPROC = void(KHRONOS_APIENTRY *)(GLintptr indirect);
using PFNGLDRAWARRAYSINDIRECTPROC    = void(KHRONOS_APIENTRY *)(GLenum mode, const void *indirect);
using PFNGLDRAWELEMENTSINDIRECTPROC  = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                               GLenum type,
                                                               const void *indirect);
using PFNGLFRAMEBUFFERPARAMETERIPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLenum pname,
                                                                GLint param);
using PFNGLGETFRAMEBUFFERPARAMETERIVPROC  = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                    GLenum pname,
                                                                    GLint *params);
using PFNGLGETPROGRAMINTERFACEIVPROC      = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                GLenum programInterface,
                                                                GLenum pname,
                                                                GLint *params);
using PFNGLGETPROGRAMRESOURCEINDEXPROC    = GLuint(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLenum programInterface,
                                                                    const GLchar *name);
using PFNGLGETPROGRAMRESOURCENAMEPROC     = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                 GLenum programInterface,
                                                                 GLuint index,
                                                                 GLsizei bufSize,
                                                                 GLsizei *length,
                                                                 GLchar *name);
using PFNGLGETPROGRAMRESOURCEIVPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                               GLenum programInterface,
                                                               GLuint index,
                                                               GLsizei propCount,
                                                               const GLenum *props,
                                                               GLsizei bufSize,
                                                               GLsizei *length,
                                                               GLint *params);
using PFNGLGETPROGRAMRESOURCELOCATIONPROC = GLint(KHRONOS_APIENTRY *)(GLuint program,
                                                                      GLenum programInterface,
                                                                      const GLchar *name);
using PFNGLUSEPROGRAMSTAGESPROC           = void(KHRONOS_APIENTRY *)(GLuint pipeline,
                                                           GLbitfield stages,
                                                           GLuint program);
using PFNGLACTIVESHADERPROGRAMPROC    = void(KHRONOS_APIENTRY *)(GLuint pipeline, GLuint program);
using PFNGLCREATESHADERPROGRAMVPROC   = GLuint(KHRONOS_APIENTRY *)(GLenum type,
                                                                 GLsizei count,
                                                                 const GLchar *const *strings);
using PFNGLBINDPROGRAMPIPELINEPROC    = void(KHRONOS_APIENTRY *)(GLuint pipeline);
using PFNGLDELETEPROGRAMPIPELINESPROC = void(KHRONOS_APIENTRY *)(GLsizei n,
                                                                 const GLuint *pipelines);
using PFNGLGENPROGRAMPIPELINESPROC    = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *pipelines);
using PFNGLISPROGRAMPIPELINEPROC      = GLboolean(KHRONOS_APIENTRY *)(GLuint pipeline);
using PFNGLGETPROGRAMPIPELINEIVPROC   = void(KHRONOS_APIENTRY *)(GLuint pipeline,
                                                               GLenum pname,
                                                               GLint *params);
using PFNGLPROGRAMUNIFORM1IPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLint v0);
using PFNGLPROGRAMUNIFORM2IPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLint v0,
                                                           GLint v1);
using PFNGLPROGRAMUNIFORM3IPROC =
    void(KHRONOS_APIENTRY *)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
using PFNGLPROGRAMUNIFORM4IPROC = void(
    KHRONOS_APIENTRY *)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
using PFNGLPROGRAMUNIFORM1UIPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLuint v0);
using PFNGLPROGRAMUNIFORM2UIPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLuint v0,
                                                            GLuint v1);
using PFNGLPROGRAMUNIFORM3UIPROC =
    void(KHRONOS_APIENTRY *)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
using PFNGLPROGRAMUNIFORM4UIPROC = void(
    KHRONOS_APIENTRY *)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
using PFNGLPROGRAMUNIFORM1FPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLfloat v0);
using PFNGLPROGRAMUNIFORM2FPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLfloat v0,
                                                           GLfloat v1);
using PFNGLPROGRAMUNIFORM3FPROC =
    void(KHRONOS_APIENTRY *)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
using PFNGLPROGRAMUNIFORM4FPROC          = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLfloat v0,
                                                           GLfloat v1,
                                                           GLfloat v2,
                                                           GLfloat v3);
using PFNGLPROGRAMUNIFORM1IVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLint *value);
using PFNGLPROGRAMUNIFORM2IVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLint *value);
using PFNGLPROGRAMUNIFORM3IVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLint *value);
using PFNGLPROGRAMUNIFORM4IVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLint *value);
using PFNGLPROGRAMUNIFORM1UIVPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             const GLuint *value);
using PFNGLPROGRAMUNIFORM2UIVPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             const GLuint *value);
using PFNGLPROGRAMUNIFORM3UIVPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             const GLuint *value);
using PFNGLPROGRAMUNIFORM4UIVPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             const GLuint *value);
using PFNGLPROGRAMUNIFORM1FVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLfloat *value);
using PFNGLPROGRAMUNIFORM2FVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLfloat *value);
using PFNGLPROGRAMUNIFORM3FVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLfloat *value);
using PFNGLPROGRAMUNIFORM4FVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX2FVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX3FVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX4FVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLfloat *value);
using PFNGLVALIDATEPROGRAMPIPELINEPROC   = void(KHRONOS_APIENTRY *)(GLuint pipeline);
using PFNGLGETPROGRAMPIPELINEINFOLOGPROC = void(KHRONOS_APIENTRY *)(GLuint pipeline,
                                                                    GLsizei bufSize,
                                                                    GLsizei *length,
                                                                    GLchar *infoLog);
using PFNGLBINDIMAGETEXTUREPROC          = void(KHRONOS_APIENTRY *)(GLuint unit,
                                                           GLuint texture,
                                                           GLint level,
                                                           GLboolean layered,
                                                           GLint layer,
                                                           GLenum access,
                                                           GLenum format);
using PFNGLGETBOOLEANI_VPROC             = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLuint index,
                                                        GLboolean *data);
using PFNGLMEMORYBARRIERPROC             = void(KHRONOS_APIENTRY *)(GLbitfield barriers);
using PFNGLMEMORYBARRIERBYREGIONPROC     = void(KHRONOS_APIENTRY *)(GLbitfield barriers);
using PFNGLTEXSTORAGE2DMULTISAMPLEPROC   = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLsizei samples,
                                                                  GLenum internalformat,
                                                                  GLsizei width,
                                                                  GLsizei height,
                                                                  GLboolean fixedsamplelocations);
using PFNGLGETMULTISAMPLEFVPROC          = void(KHRONOS_APIENTRY *)(GLenum pname,
                                                           GLuint index,
                                                           GLfloat *val);
using PFNGLSAMPLEMASKIPROC = void(KHRONOS_APIENTRY *)(GLuint maskNumber, GLbitfield mask);
using PFNGLGETTEXLEVELPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                 GLint level,
                                                                 GLenum pname,
                                                                 GLint *params);
using PFNGLGETTEXLEVELPARAMETERFVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                 GLint level,
                                                                 GLenum pname,
                                                                 GLfloat *params);
using PFNGLBINDVERTEXBUFFERPROC       = void(KHRONOS_APIENTRY *)(GLuint bindingindex,
                                                           GLuint buffer,
                                                           GLintptr offset,
                                                           GLsizei stride);
using PFNGLVERTEXATTRIBFORMATPROC     = void(KHRONOS_APIENTRY *)(GLuint attribindex,
                                                             GLint size,
                                                             GLenum type,
                                                             GLboolean normalized,
                                                             GLuint relativeoffset);
using PFNGLVERTEXATTRIBIFORMATPROC    = void(KHRONOS_APIENTRY *)(GLuint attribindex,
                                                              GLint size,
                                                              GLenum type,
                                                              GLuint relativeoffset);
using PFNGLVERTEXATTRIBBINDINGPROC    = void(KHRONOS_APIENTRY *)(GLuint attribindex,
                                                              GLuint bindingindex);
using PFNGLVERTEXBINDINGDIVISORPROC = void(KHRONOS_APIENTRY *)(GLuint bindingindex, GLuint divisor);

// OpenGL ES 3.2
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY 0x9382
#define GL_MULTIPLY 0x9294
#define GL_SCREEN 0x9295
#define GL_OVERLAY 0x9296
#define GL_DARKEN 0x9297
#define GL_LIGHTEN 0x9298
#define GL_COLORDODGE 0x9299
#define GL_COLORBURN 0x929A
#define GL_HARDLIGHT 0x929B
#define GL_SOFTLIGHT 0x929C
#define GL_DIFFERENCE 0x929E
#define GL_EXCLUSION 0x92A0
#define GL_HSL_HUE 0x92AD
#define GL_HSL_SATURATION 0x92AE
#define GL_HSL_COLOR 0x92AF
#define GL_HSL_LUMINOSITY 0x92B0
#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#define GL_DEBUG_SOURCE_API 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#define GL_DEBUG_SOURCE_OTHER 0x824B
#define GL_DEBUG_TYPE_ERROR 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#define GL_DEBUG_TYPE_OTHER 0x8251
#define GL_DEBUG_TYPE_MARKER 0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#define GL_BUFFER 0x82E0
#define GL_SHADER 0x82E1
#define GL_PROGRAM 0x82E2
#define GL_VERTEX_ARRAY 0x8074
#define GL_QUERY 0x82E3
#define GL_PROGRAM_PIPELINE 0x82E4
#define GL_SAMPLER 0x82E6
#define GL_MAX_LABEL_LENGTH 0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#define GL_DEBUG_SEVERITY_LOW 0x9148
#define GL_DEBUG_OUTPUT 0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#define GL_STACK_OVERFLOW 0x0503
#define GL_STACK_UNDERFLOW 0x0504
#define GL_GEOMETRY_SHADER 0x8DD9
#define GL_GEOMETRY_SHADER_BIT 0x00000004
#define GL_GEOMETRY_VERTICES_OUT 0x8916
#define GL_GEOMETRY_INPUT_TYPE 0x8917
#define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#define GL_LAYER_PROVOKING_VERTEX 0x825E
#define GL_LINES_ADJACENCY 0x000A
#define GL_LINE_STRIP_ADJACENCY 0x000B
#define GL_TRIANGLES_ADJACENCY 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#define GL_LAST_VERTEX_CONVENTION 0x8E4E
#define GL_UNDEFINED_VERTEX 0x8260
#define GL_PRIMITIVES_GENERATED 0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS 0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER 0x9309
#define GL_PRIMITIVE_BOUNDING_BOX 0x92BE
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_CONTEXT_FLAGS 0x821E
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#define GL_GUILTY_CONTEXT_RESET 0x8253
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#define GL_NO_RESET_NOTIFICATION 0x8261
#define GL_CONTEXT_LOST 0x0507
#define GL_SAMPLE_SHADING 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE 0x8C37
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_PATCHES 0x000E
#define GL_PATCH_VERTICES 0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES 0x8E75
#define GL_TESS_GEN_MODE 0x8E76
#define GL_TESS_GEN_SPACING 0x8E77
#define GL_TESS_GEN_VERTEX_ORDER 0x8E78
#define GL_TESS_GEN_POINT_MODE 0x8E79
#define GL_ISOLINES 0x8E7A
#define GL_QUADS 0x0007
#define GL_FRACTIONAL_ODD 0x8E7B
#define GL_FRACTIONAL_EVEN 0x8E7C
#define GL_MAX_PATCH_VERTICES 0x8E7D
#define GL_MAX_TESS_GEN_LEVEL 0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS 0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_IS_PER_PATCH 0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_TESS_CONTROL_SHADER 0x8E88
#define GL_TESS_EVALUATION_SHADER 0x8E87
#define GL_TESS_CONTROL_SHADER_BIT 0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT 0x00000010
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_TEXTURE_BUFFER 0x8C2A
#define GL_TEXTURE_BUFFER_BINDING 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_SAMPLER_BUFFER 0x8DC2
#define GL_INT_SAMPLER_BUFFER 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#define GL_IMAGE_BUFFER 0x9051
#define GL_INT_IMAGE_BUFFER 0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER 0x9067
#define GL_TEXTURE_BUFFER_OFFSET 0x919D
#define GL_TEXTURE_BUFFER_SIZE 0x919E
#define GL_COMPRESSED_RGBA_ASTC_4x4 0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4 0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5 0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5 0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6 0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5 0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6 0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8 0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5 0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6 0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8 0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 0x93DD
#define GL_TEXTURE_CUBE_MAP_ARRAY 0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY 0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY 0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D

using PFNGLBLENDBARRIERPROC           = void(KHRONOS_APIENTRY *)();
using PFNGLCOPYIMAGESUBDATAPROC       = void(KHRONOS_APIENTRY *)(GLuint srcName,
                                                           GLenum srcTarget,
                                                           GLint srcLevel,
                                                           GLint srcX,
                                                           GLint srcY,
                                                           GLint srcZ,
                                                           GLuint dstName,
                                                           GLenum dstTarget,
                                                           GLint dstLevel,
                                                           GLint dstX,
                                                           GLint dstY,
                                                           GLint dstZ,
                                                           GLsizei srcWidth,
                                                           GLsizei srcHeight,
                                                           GLsizei srcDepth);
using PFNGLDEBUGMESSAGECONTROLPROC    = void(KHRONOS_APIENTRY *)(GLenum source,
                                                              GLenum type,
                                                              GLenum severity,
                                                              GLsizei count,
                                                              const GLuint *ids,
                                                              GLboolean enabled);
using PFNGLDEBUGMESSAGEINSERTPROC     = void(KHRONOS_APIENTRY *)(GLenum source,
                                                             GLenum type,
                                                             GLuint id,
                                                             GLenum severity,
                                                             GLsizei length,
                                                             const GLchar *buf);
using PFNGLDEBUGMESSAGECALLBACKPROC   = void(KHRONOS_APIENTRY *)(GLDEBUGPROC callback,
                                                               const void *userParam);
using PFNGLGETDEBUGMESSAGELOGPROC     = GLuint(KHRONOS_APIENTRY *)(GLuint count,
                                                               GLsizei bufSize,
                                                               GLenum *sources,
                                                               GLenum *types,
                                                               GLuint *ids,
                                                               GLenum *severities,
                                                               GLsizei *lengths,
                                                               GLchar *messageLog);
using PFNGLPUSHDEBUGGROUPPROC         = void(KHRONOS_APIENTRY *)(GLenum source,
                                                         GLuint id,
                                                         GLsizei length,
                                                         const GLchar *message);
using PFNGLPOPDEBUGGROUPPROC          = void(KHRONOS_APIENTRY *)();
using PFNGLOBJECTLABELPROC            = void(KHRONOS_APIENTRY *)(GLenum identifier,
                                                      GLuint name,
                                                      GLsizei length,
                                                      const GLchar *label);
using PFNGLGETOBJECTLABELPROC         = void(KHRONOS_APIENTRY *)(GLenum identifier,
                                                         GLuint name,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLchar *label);
using PFNGLOBJECTPTRLABELPROC         = void(KHRONOS_APIENTRY *)(const void *ptr,
                                                         GLsizei length,
                                                         const GLchar *label);
using PFNGLGETOBJECTPTRLABELPROC      = void(KHRONOS_APIENTRY *)(const void *ptr,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLchar *label);
using PFNGLGETPOINTERVPROC            = void(KHRONOS_APIENTRY *)(GLenum pname, void **params);
using PFNGLENABLEIPROC                = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index);
using PFNGLDISABLEIPROC               = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index);
using PFNGLBLENDEQUATIONIPROC         = void(KHRONOS_APIENTRY *)(GLuint buf, GLenum mode);
using PFNGLBLENDEQUATIONSEPARATEIPROC = void(KHRONOS_APIENTRY *)(GLuint buf,
                                                                 GLenum modeRGB,
                                                                 GLenum modeAlpha);
using PFNGLBLENDFUNCIPROC         = void(KHRONOS_APIENTRY *)(GLuint buf, GLenum src, GLenum dst);
using PFNGLBLENDFUNCSEPARATEIPROC = void(
    KHRONOS_APIENTRY *)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
using PFNGLCOLORMASKIPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
using PFNGLISENABLEDIPROC             = GLboolean(KHRONOS_APIENTRY *)(GLenum target, GLuint index);
using PFNGLDRAWELEMENTSBASEVERTEXPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                 GLsizei count,
                                                                 GLenum type,
                                                                 const void *indices,
                                                                 GLint basevertex);
using PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC     = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                      GLuint start,
                                                                      GLuint end,
                                                                      GLsizei count,
                                                                      GLenum type,
                                                                      const void *indices,
                                                                      GLint basevertex);
using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                          GLsizei count,
                                                                          GLenum type,
                                                                          const void *indices,
                                                                          GLsizei instancecount,
                                                                          GLint basevertex);
using PFNGLFRAMEBUFFERTEXTUREPROC              = void(KHRONOS_APIENTRY *)(GLenum target,
                                                             GLenum attachment,
                                                             GLuint texture,
                                                             GLint level);
using PFNGLPRIMITIVEBOUNDINGBOXPROC            = void(KHRONOS_APIENTRY *)(GLfloat minX,
                                                               GLfloat minY,
                                                               GLfloat minZ,
                                                               GLfloat minW,
                                                               GLfloat maxX,
                                                               GLfloat maxY,
                                                               GLfloat maxZ,
                                                               GLfloat maxW);
using PFNGLGETGRAPHICSRESETSTATUSPROC          = GLenum(KHRONOS_APIENTRY *)();
using PFNGLREADNPIXELSPROC                     = void(KHRONOS_APIENTRY *)(GLint x,
                                                      GLint y,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLenum format,
                                                      GLenum type,
                                                      GLsizei bufSize,
                                                      void *data);
using PFNGLGETNUNIFORMFVPROC                   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                        GLint location,
                                                        GLsizei bufSize,
                                                        GLfloat *params);
using PFNGLGETNUNIFORMIVPROC                   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                        GLint location,
                                                        GLsizei bufSize,
                                                        GLint *params);
using PFNGLGETNUNIFORMUIVPROC                  = void(KHRONOS_APIENTRY *)(GLuint program,
                                                         GLint location,
                                                         GLsizei bufSize,
                                                         GLuint *params);
using PFNGLMINSAMPLESHADINGPROC                = void(KHRONOS_APIENTRY *)(GLfloat value);
using PFNGLPATCHPARAMETERIPROC         = void(KHRONOS_APIENTRY *)(GLenum pname, GLint value);
using PFNGLTEXPARAMETERIIVPROC         = void(KHRONOS_APIENTRY *)(GLenum target,
                                                          GLenum pname,
                                                          const GLint *params);
using PFNGLTEXPARAMETERIUIVPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                           GLenum pname,
                                                           const GLuint *params);
using PFNGLGETTEXPARAMETERIIVPROC      = void(KHRONOS_APIENTRY *)(GLenum target,
                                                             GLenum pname,
                                                             GLint *params);
using PFNGLGETTEXPARAMETERIUIVPROC     = void(KHRONOS_APIENTRY *)(GLenum target,
                                                              GLenum pname,
                                                              GLuint *params);
using PFNGLSAMPLERPARAMETERIIVPROC     = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                              GLenum pname,
                                                              const GLint *param);
using PFNGLSAMPLERPARAMETERIUIVPROC    = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                               GLenum pname,
                                                               const GLuint *param);
using PFNGLGETSAMPLERPARAMETERIIVPROC  = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                                 GLenum pname,
                                                                 GLint *params);
using PFNGLGETSAMPLERPARAMETERIUIVPROC = void(KHRONOS_APIENTRY *)(GLuint sampler,
                                                                  GLenum pname,
                                                                  GLuint *params);
using PFNGLTEXBUFFERPROC               = void(KHRONOS_APIENTRY *)(GLenum target,
                                                    GLenum internalformat,
                                                    GLuint buffer);
using PFNGLTEXBUFFERRANGEPROC          = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLenum internalformat,
                                                         GLuint buffer,
                                                         GLintptr offset,
                                                         GLsizeiptr size);
using PFNGLTEXSTORAGE3DMULTISAMPLEPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLsizei samples,
                                                                  GLenum internalformat,
                                                                  GLsizei width,
                                                                  GLsizei height,
                                                                  GLsizei depth,
                                                                  GLboolean fixedsamplelocations);

// Desktop OpenGL 1.0
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_DRAW_BUFFER 0x0C01
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_TEXTURE_1D 0x0DE0
#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F
#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_CURRENT_BIT 0x00000001
#define GL_POINT_BIT 0x00000002
#define GL_LINE_BIT 0x00000004
#define GL_POLYGON_BIT 0x00000008
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#define GL_PIXEL_MODE_BIT 0x00000020
#define GL_LIGHTING_BIT 0x00000040
#define GL_FOG_BIT 0x00000080
#define GL_ACCUM_BUFFER_BIT 0x00000200
#define GL_VIEWPORT_BIT 0x00000800
#define GL_TRANSFORM_BIT 0x00001000
#define GL_ENABLE_BIT 0x00002000
#define GL_HINT_BIT 0x00008000
#define GL_EVAL_BIT 0x00010000
#define GL_LIST_BIT 0x00020000
#define GL_TEXTURE_BIT 0x00040000
#define GL_SCISSOR_BIT 0x00080000
#define GL_ALL_ATTRIB_BITS 0xFFFFFFFF
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON 0x0009
#define GL_ACCUM 0x0100
#define GL_LOAD 0x0101
#define GL_RETURN 0x0102
#define GL_MULT 0x0103
#define GL_ADD 0x0104
#define GL_AUX0 0x0409
#define GL_AUX1 0x040A
#define GL_AUX2 0x040B
#define GL_AUX3 0x040C
#define GL_2D 0x0600
#define GL_3D 0x0601
#define GL_3D_COLOR 0x0602
#define GL_3D_COLOR_TEXTURE 0x0603
#define GL_4D_COLOR_TEXTURE 0x0604
#define GL_PASS_THROUGH_TOKEN 0x0700
#define GL_POINT_TOKEN 0x0701
#define GL_LINE_TOKEN 0x0702
#define GL_POLYGON_TOKEN 0x0703
#define GL_BITMAP_TOKEN 0x0704
#define GL_DRAW_PIXEL_TOKEN 0x0705
#define GL_COPY_PIXEL_TOKEN 0x0706
#define GL_LINE_RESET_TOKEN 0x0707
#define GL_EXP 0x0800
#define GL_EXP2 0x0801
#define GL_COEFF 0x0A00
#define GL_ORDER 0x0A01
#define GL_DOMAIN 0x0A02
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_INDEX 0x0B01
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_CURRENT_RASTER_COLOR 0x0B04
#define GL_CURRENT_RASTER_INDEX 0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#define GL_CURRENT_RASTER_POSITION 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#define GL_POINT_SMOOTH 0x0B10
#define GL_LINE_STIPPLE 0x0B24
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#define GL_LIST_MODE 0x0B30
#define GL_MAX_LIST_NESTING 0x0B31
#define GL_LIST_BASE 0x0B32
#define GL_LIST_INDEX 0x0B33
#define GL_POLYGON_STIPPLE 0x0B42
#define GL_EDGE_FLAG 0x0B43
#define GL_LIGHTING 0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_SHADE_MODEL 0x0B54
#define GL_COLOR_MATERIAL_FACE 0x0B55
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#define GL_COLOR_MATERIAL 0x0B57
#define GL_FOG 0x0B60
#define GL_FOG_INDEX 0x0B61
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#define GL_MATRIX_MODE 0x0BA0
#define GL_NORMALIZE 0x0BA1
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#define GL_ALPHA_TEST 0x0BC0
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_LOGIC_OP 0x0BF1
#define GL_AUX_BUFFERS 0x0C00
#define GL_INDEX_CLEAR_VALUE 0x0C20
#define GL_INDEX_WRITEMASK 0x0C21
#define GL_INDEX_MODE 0x0C30
#define GL_RGBA_MODE 0x0C31
#define GL_RENDER_MODE 0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_FOG_HINT 0x0C54
#define GL_TEXTURE_GEN_S 0x0C60
#define GL_TEXTURE_GEN_T 0x0C61
#define GL_TEXTURE_GEN_R 0x0C62
#define GL_TEXTURE_GEN_Q 0x0C63
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#define GL_MAP_COLOR 0x0D10
#define GL_MAP_STENCIL 0x0D11
#define GL_INDEX_SHIFT 0x0D12
#define GL_INDEX_OFFSET 0x0D13
#define GL_RED_SCALE 0x0D14
#define GL_RED_BIAS 0x0D15
#define GL_ZOOM_X 0x0D16
#define GL_ZOOM_Y 0x0D17
#define GL_GREEN_SCALE 0x0D18
#define GL_GREEN_BIAS 0x0D19
#define GL_BLUE_SCALE 0x0D1A
#define GL_BLUE_BIAS 0x0D1B
#define GL_ALPHA_SCALE 0x0D1C
#define GL_ALPHA_BIAS 0x0D1D
#define GL_DEPTH_SCALE 0x0D1E
#define GL_DEPTH_BIAS 0x0D1F
#define GL_MAX_EVAL_ORDER 0x0D30
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_INDEX_BITS 0x0D51
#define GL_ACCUM_RED_BITS 0x0D58
#define GL_ACCUM_GREEN_BITS 0x0D59
#define GL_ACCUM_BLUE_BITS 0x0D5A
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#define GL_NAME_STACK_DEPTH 0x0D70
#define GL_AUTO_NORMAL 0x0D80
#define GL_MAP1_COLOR_4 0x0D90
#define GL_MAP1_INDEX 0x0D91
#define GL_MAP1_NORMAL 0x0D92
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#define GL_MAP1_VERTEX_3 0x0D97
#define GL_MAP1_VERTEX_4 0x0D98
#define GL_MAP2_COLOR_4 0x0DB0
#define GL_MAP2_INDEX 0x0DB1
#define GL_MAP2_NORMAL 0x0DB2
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#define GL_MAP2_VERTEX_3 0x0DB7
#define GL_MAP2_VERTEX_4 0x0DB8
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#define GL_TEXTURE_COMPONENTS 0x1003
#define GL_TEXTURE_BORDER 0x1005
#define GL_AMBIENT 0x1200
#define GL_DIFFUSE 0x1201
#define GL_SPECULAR 0x1202
#define GL_POSITION 0x1203
#define GL_SPOT_DIRECTION 0x1204
#define GL_SPOT_EXPONENT 0x1205
#define GL_SPOT_CUTOFF 0x1206
#define GL_CONSTANT_ATTENUATION 0x1207
#define GL_LINEAR_ATTENUATION 0x1208
#define GL_QUADRATIC_ATTENUATION 0x1209
#define GL_COMPILE 0x1300
#define GL_COMPILE_AND_EXECUTE 0x1301
#define GL_2_BYTES 0x1407
#define GL_3_BYTES 0x1408
#define GL_4_BYTES 0x1409
#define GL_EMISSION 0x1600
#define GL_SHININESS 0x1601
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#define GL_COLOR_INDEXES 0x1603
#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_COLOR_INDEX 0x1900
#define GL_BITMAP 0x1A00
#define GL_RENDER 0x1C00
#define GL_FEEDBACK 0x1C01
#define GL_SELECT 0x1C02
#define GL_FLAT 0x1D00
#define GL_SMOOTH 0x1D01
#define GL_S 0x2000
#define GL_T 0x2001
#define GL_R 0x2002
#define GL_Q 0x2003
#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101
#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201
#define GL_TEXTURE_ENV 0x2300
#define GL_EYE_LINEAR 0x2400
#define GL_OBJECT_LINEAR 0x2401
#define GL_SPHERE_MAP 0x2402
#define GL_TEXTURE_GEN_MODE 0x2500
#define GL_OBJECT_PLANE 0x2501
#define GL_EYE_PLANE 0x2502
#define GL_CLAMP 0x2900
#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005
#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007

using PFNGLPOINTSIZEPROC   = void(KHRONOS_APIENTRY *)(GLfloat size);
using PFNGLPOLYGONMODEPROC = void(KHRONOS_APIENTRY *)(GLenum face, GLenum mode);
using PFNGLTEXIMAGE1DPROC  = void(KHRONOS_APIENTRY *)(GLenum target,
                                                     GLint level,
                                                     GLint internalformat,
                                                     GLsizei width,
                                                     GLint border,
                                                     GLenum format,
                                                     GLenum type,
                                                     const void *pixels);
using PFNGLDRAWBUFFERPROC  = void(KHRONOS_APIENTRY *)(GLenum buf);
using PFNGLCLEARDEPTHPROC  = void(KHRONOS_APIENTRY *)(GLdouble depth);
using PFNGLLOGICOPPROC     = void(KHRONOS_APIENTRY *)(GLenum opcode);
using PFNGLPIXELSTOREFPROC = void(KHRONOS_APIENTRY *)(GLenum pname, GLfloat param);
using PFNGLGETDOUBLEVPROC  = void(KHRONOS_APIENTRY *)(GLenum pname, GLdouble *data);
using PFNGLGETTEXIMAGEPROC =
    void(KHRONOS_APIENTRY *)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
using PFNGLDEPTHRANGEPROC = void(KHRONOS_APIENTRY *)(GLdouble n, GLdouble f);

// Desktop OpenGL 1.1
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_DOUBLE 0x140A
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS 0xFFFFFFFF
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_INDEX_ARRAY_POINTER 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#define GL_INDEX_LOGIC_OP 0x0BF1
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#define GL_SELECTION_BUFFER_SIZE 0x0DF4
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_INDEX_ARRAY 0x8077
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_EDGE_FLAG_ARRAY 0x8079
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_INDEX_ARRAY_TYPE 0x8085
#define GL_INDEX_ARRAY_STRIDE 0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#define GL_TEXTURE_PRIORITY 0x8066
#define GL_TEXTURE_RESIDENT 0x8067
#define GL_ALPHA4 0x803B
#define GL_ALPHA8 0x803C
#define GL_ALPHA12 0x803D
#define GL_ALPHA16 0x803E
#define GL_LUMINANCE4 0x803F
#define GL_LUMINANCE8 0x8040
#define GL_LUMINANCE12 0x8041
#define GL_LUMINANCE16 0x8042
#define GL_LUMINANCE4_ALPHA4 0x8043
#define GL_LUMINANCE6_ALPHA2 0x8044
#define GL_LUMINANCE8_ALPHA8 0x8045
#define GL_LUMINANCE12_ALPHA4 0x8046
#define GL_LUMINANCE12_ALPHA12 0x8047
#define GL_LUMINANCE16_ALPHA16 0x8048
#define GL_INTENSITY 0x8049
#define GL_INTENSITY4 0x804A
#define GL_INTENSITY8 0x804B
#define GL_INTENSITY12 0x804C
#define GL_INTENSITY16 0x804D
#define GL_V2F 0x2A20
#define GL_V3F 0x2A21
#define GL_C4UB_V2F 0x2A22
#define GL_C4UB_V3F 0x2A23
#define GL_C3F_V3F 0x2A24
#define GL_N3F_V3F 0x2A25
#define GL_C4F_N3F_V3F 0x2A26
#define GL_T2F_V3F 0x2A27
#define GL_T4F_V4F 0x2A28
#define GL_T2F_C4UB_V3F 0x2A29
#define GL_T2F_C3F_V3F 0x2A2A
#define GL_T2F_N3F_V3F 0x2A2B
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#define GL_T4F_C4F_N3F_V4F 0x2A2D

using PFNGLCOPYTEXIMAGE1DPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLint level,
                                                         GLenum internalformat,
                                                         GLint x,
                                                         GLint y,
                                                         GLsizei width,
                                                         GLint border);
using PFNGLCOPYTEXSUBIMAGE1DPROC = void(
    KHRONOS_APIENTRY *)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
using PFNGLTEXSUBIMAGE1DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLint level,
                                                        GLint xoffset,
                                                        GLsizei width,
                                                        GLenum format,
                                                        GLenum type,
                                                        const void *pixels);

// Desktop OpenGL 1.2
#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#define GL_PACK_SKIP_IMAGES 0x806B
#define GL_PACK_IMAGE_HEIGHT 0x806C
#define GL_PROXY_TEXTURE_3D 0x8070
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#define GL_BGR 0x80E0
#define GL_BGRA 0x80E1
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_RESCALE_NORMAL 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#define GL_SINGLE_COLOR 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR 0x81FA

// Desktop OpenGL 1.3
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#define GL_COMPRESSED_RGB 0x84ED
#define GL_COMPRESSED_RGBA 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#define GL_MAX_TEXTURE_UNITS 0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#define GL_MULTISAMPLE_BIT 0x20000000
#define GL_NORMAL_MAP 0x8511
#define GL_REFLECTION_MAP 0x8512
#define GL_COMPRESSED_ALPHA 0x84E9
#define GL_COMPRESSED_LUMINANCE 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#define GL_COMPRESSED_INTENSITY 0x84EC
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_SOURCE0_RGB 0x8580
#define GL_SOURCE1_RGB 0x8581
#define GL_SOURCE2_RGB 0x8582
#define GL_SOURCE0_ALPHA 0x8588
#define GL_SOURCE1_ALPHA 0x8589
#define GL_SOURCE2_ALPHA 0x858A
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND2_RGB 0x8592
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_OPERAND2_ALPHA 0x859A
#define GL_RGB_SCALE 0x8573
#define GL_ADD_SIGNED 0x8574
#define GL_INTERPOLATE 0x8575
#define GL_SUBTRACT 0x84E7
#define GL_CONSTANT 0x8576
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#define GL_DOT3_RGB 0x86AE
#define GL_DOT3_RGBA 0x86AF

using PFNGLCOMPRESSEDTEXIMAGE1DPROC    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLint level,
                                                               GLenum internalformat,
                                                               GLsizei width,
                                                               GLint border,
                                                               GLsizei imageSize,
                                                               const void *data);
using PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                  GLint level,
                                                                  GLint xoffset,
                                                                  GLsizei width,
                                                                  GLenum format,
                                                                  GLsizei imageSize,
                                                                  const void *data);
using PFNGLGETCOMPRESSEDTEXIMAGEPROC   = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLint level,
                                                                void *img);

// Desktop OpenGL 1.4
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_DEPTH_COMPONENT32 0x81A7
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_POINT_SIZE_MIN 0x8126
#define GL_POINT_SIZE_MAX 0x8127
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#define GL_GENERATE_MIPMAP 0x8191
#define GL_FOG_COORDINATE_SOURCE 0x8450
#define GL_FOG_COORDINATE 0x8451
#define GL_FRAGMENT_DEPTH 0x8452
#define GL_CURRENT_FOG_COORDINATE 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#define GL_FOG_COORDINATE_ARRAY 0x8457
#define GL_COLOR_SUM 0x8458
#define GL_CURRENT_SECONDARY_COLOR 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#define GL_SECONDARY_COLOR_ARRAY 0x845E
#define GL_TEXTURE_FILTER_CONTROL 0x8500
#define GL_DEPTH_TEXTURE_MODE 0x884B
#define GL_COMPARE_R_TO_TEXTURE 0x884E

using PFNGLMULTIDRAWARRAYSPROC   = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                          const GLint *first,
                                                          const GLsizei *count,
                                                          GLsizei drawcount);
using PFNGLMULTIDRAWELEMENTSPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                            const GLsizei *count,
                                                            GLenum type,
                                                            const void *const *indices,
                                                            GLsizei drawcount);
using PFNGLPOINTPARAMETERFPROC   = void(KHRONOS_APIENTRY *)(GLenum pname, GLfloat param);
using PFNGLPOINTPARAMETERFVPROC  = void(KHRONOS_APIENTRY *)(GLenum pname, const GLfloat *params);
using PFNGLPOINTPARAMETERIPROC   = void(KHRONOS_APIENTRY *)(GLenum pname, GLint param);
using PFNGLPOINTPARAMETERIVPROC  = void(KHRONOS_APIENTRY *)(GLenum pname, const GLint *params);

// Desktop OpenGL 1.5
#define GL_QUERY_COUNTER_BITS 0x8864
#define GL_BUFFER_ACCESS 0x88BB
#define GL_SAMPLES_PASSED 0x8914
#define GL_SRC1_ALPHA 0x8589
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#define GL_FOG_COORD_SRC 0x8450
#define GL_FOG_COORD 0x8451
#define GL_CURRENT_FOG_COORD 0x8453
#define GL_FOG_COORD_ARRAY_TYPE 0x8454
#define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#define GL_FOG_COORD_ARRAY_POINTER 0x8456
#define GL_FOG_COORD_ARRAY 0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB 0x8580
#define GL_SRC1_RGB 0x8581
#define GL_SRC2_RGB 0x8582
#define GL_SRC0_ALPHA 0x8588
#define GL_SRC2_ALPHA 0x858A

using PFNGLGETQUERYOBJECTIVPROC = void(KHRONOS_APIENTRY *)(GLuint id, GLenum pname, GLint *params);
using PFNGLGETBUFFERSUBDATAPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                           GLintptr offset,
                                                           GLsizeiptr size,
                                                           void *data);
using PFNGLMAPBUFFERPROC        = void *(KHRONOS_APIENTRY *)(GLenum target, GLenum access);

// Desktop OpenGL 2.0
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#define GL_MAX_VARYING_FLOATS 0x8B4B
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#define GL_LOWER_LEFT 0x8CA1
#define GL_UPPER_LEFT 0x8CA2
#define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#define GL_POINT_SPRITE 0x8861
#define GL_COORD_REPLACE 0x8862
#define GL_MAX_TEXTURE_COORDS 0x8871

using PFNGLGETVERTEXATTRIBDVPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum pname,
                                                            GLdouble *params);
using PFNGLVERTEXATTRIB1DPROC    = void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x);
using PFNGLVERTEXATTRIB1DVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIB1SPROC    = void(KHRONOS_APIENTRY *)(GLuint index, GLshort x);
using PFNGLVERTEXATTRIB1SVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIB2DPROC    = void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x, GLdouble y);
using PFNGLVERTEXATTRIB2DVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIB2SPROC    = void(KHRONOS_APIENTRY *)(GLuint index, GLshort x, GLshort y);
using PFNGLVERTEXATTRIB2SVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIB3DPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                         GLdouble x,
                                                         GLdouble y,
                                                         GLdouble z);
using PFNGLVERTEXATTRIB3DVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIB3SPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                         GLshort x,
                                                         GLshort y,
                                                         GLshort z);
using PFNGLVERTEXATTRIB3SVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIB4NBVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLbyte *v);
using PFNGLVERTEXATTRIB4NIVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIB4NSVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIB4NUBPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
using PFNGLVERTEXATTRIB4NUBVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLubyte *v);
using PFNGLVERTEXATTRIB4NUIVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLVERTEXATTRIB4NUSVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLushort *v);
using PFNGLVERTEXATTRIB4BVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLbyte *v);
using PFNGLVERTEXATTRIB4DPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
using PFNGLVERTEXATTRIB4DVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIB4IVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIB4SPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
using PFNGLVERTEXATTRIB4SVPROC  = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIB4UBVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLubyte *v);
using PFNGLVERTEXATTRIB4UIVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLVERTEXATTRIB4USVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLushort *v);

// Desktop OpenGL 2.1
#define GL_SRGB_ALPHA 0x8C42
#define GL_COMPRESSED_SRGB 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA 0x8C44
#define GL_SLUMINANCE8_ALPHA8 0x8C45
#define GL_SLUMINANCE 0x8C46
#define GL_SLUMINANCE8 0x8C47
#define GL_COMPRESSED_SLUMINANCE 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B

// Desktop OpenGL 3.0
#define GL_CLIP_DISTANCE0 0x3000
#define GL_CLIP_DISTANCE1 0x3001
#define GL_CLIP_DISTANCE2 0x3002
#define GL_CLIP_DISTANCE3 0x3003
#define GL_CLIP_DISTANCE4 0x3004
#define GL_CLIP_DISTANCE5 0x3005
#define GL_CLIP_DISTANCE6 0x3006
#define GL_CLIP_DISTANCE7 0x3007
#define GL_MAX_CLIP_DISTANCES 0x0D32
#define GL_COMPRESSED_RED 0x8225
#define GL_COMPRESSED_RG 0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_CLAMP_READ_COLOR 0x891C
#define GL_FIXED_ONLY 0x891D
#define GL_TEXTURE_1D_ARRAY 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#define GL_GREEN_INTEGER 0x8D95
#define GL_BLUE_INTEGER 0x8D96
#define GL_BGR_INTEGER 0x8D9A
#define GL_BGRA_INTEGER 0x8D9B
#define GL_SAMPLER_1D_ARRAY 0x8DC0
#define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#define GL_INT_SAMPLER_1D 0x8DC9
#define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#define GL_QUERY_WAIT 0x8E13
#define GL_QUERY_NO_WAIT 0x8E14
#define GL_QUERY_BY_REGION_WAIT 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_STENCIL_INDEX1 0x8D46
#define GL_STENCIL_INDEX4 0x8D47
#define GL_STENCIL_INDEX16 0x8D49
#define GL_INDEX 0x8222
#define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE 0x8C15
#define GL_FRAMEBUFFER_SRGB 0x8DB9
#define GL_COMPRESSED_RED_RGTC1 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#define GL_COMPRESSED_RG_RGTC2 0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE
#define GL_R16 0x822A
#define GL_RG16 0x822C
#define GL_CLAMP_VERTEX_COLOR 0x891A
#define GL_CLAMP_FRAGMENT_COLOR 0x891B
#define GL_ALPHA_INTEGER 0x8D97

using PFNGLCLAMPCOLORPROC             = void(KHRONOS_APIENTRY *)(GLenum target, GLenum clamp);
using PFNGLBEGINCONDITIONALRENDERPROC = void(KHRONOS_APIENTRY *)(GLuint id, GLenum mode);
using PFNGLENDCONDITIONALRENDERPROC   = void(KHRONOS_APIENTRY *)();
using PFNGLVERTEXATTRIBI1IPROC        = void(KHRONOS_APIENTRY *)(GLuint index, GLint x);
using PFNGLVERTEXATTRIBI2IPROC        = void(KHRONOS_APIENTRY *)(GLuint index, GLint x, GLint y);
using PFNGLVERTEXATTRIBI3IPROC  = void(KHRONOS_APIENTRY *)(GLuint index, GLint x, GLint y, GLint z);
using PFNGLVERTEXATTRIBI1UIPROC = void(KHRONOS_APIENTRY *)(GLuint index, GLuint x);
using PFNGLVERTEXATTRIBI2UIPROC = void(KHRONOS_APIENTRY *)(GLuint index, GLuint x, GLuint y);
using PFNGLVERTEXATTRIBI3UIPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                           GLuint x,
                                                           GLuint y,
                                                           GLuint z);
using PFNGLVERTEXATTRIBI1IVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIBI2IVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIBI3IVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLVERTEXATTRIBI1UIVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLVERTEXATTRIBI2UIVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLVERTEXATTRIBI3UIVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLuint *v);
using PFNGLVERTEXATTRIBI4BVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLbyte *v);
using PFNGLVERTEXATTRIBI4SVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLshort *v);
using PFNGLVERTEXATTRIBI4UBVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLubyte *v);
using PFNGLVERTEXATTRIBI4USVPROC    = void(KHRONOS_APIENTRY *)(GLuint index, const GLushort *v);
using PFNGLBINDFRAGDATALOCATIONPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                               GLuint color,
                                                               const GLchar *name);
using PFNGLFRAMEBUFFERTEXTURE1DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLenum attachment,
                                                               GLenum textarget,
                                                               GLuint texture,
                                                               GLint level);
using PFNGLFRAMEBUFFERTEXTURE3DPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                               GLenum attachment,
                                                               GLenum textarget,
                                                               GLuint texture,
                                                               GLint level,
                                                               GLint zoffset);

// Desktop OpenGL 3.1
#define GL_SAMPLER_2D_RECT 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#define GL_INT_SAMPLER_2D_RECT 0x8DCD
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#define GL_TEXTURE_RECTANGLE 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#define GL_R16_SNORM 0x8F98
#define GL_RG16_SNORM 0x8F99
#define GL_RGB16_SNORM 0x8F9A
#define GL_RGBA16_SNORM 0x8F9B
#define GL_PRIMITIVE_RESTART 0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45

using PFNGLPRIMITIVERESTARTINDEXPROC = void(KHRONOS_APIENTRY *)(GLuint index);
using PFNGLGETACTIVEUNIFORMNAMEPROC  = void(KHRONOS_APIENTRY *)(GLuint program,
                                                               GLuint uniformIndex,
                                                               GLsizei bufSize,
                                                               GLsizei *length,
                                                               GLchar *uniformName);

// Desktop OpenGL 3.2
#define GL_CONTEXT_CORE_PROFILE_BIT 0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_PROGRAM_POINT_SIZE 0x8642
#define GL_CONTEXT_PROFILE_MASK 0x9126
#define GL_DEPTH_CLAMP 0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_PROVOKING_VERTEX 0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103

using PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                      const GLsizei *count,
                                                                      GLenum type,
                                                                      const void *const *indices,
                                                                      GLsizei drawcount,
                                                                      const GLint *basevertex);
using PFNGLPROVOKINGVERTEXPROC             = void(KHRONOS_APIENTRY *)(GLenum mode);
using PFNGLTEXIMAGE2DMULTISAMPLEPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLsizei samples,
                                                                GLenum internalformat,
                                                                GLsizei width,
                                                                GLsizei height,
                                                                GLboolean fixedsamplelocations);
using PFNGLTEXIMAGE3DMULTISAMPLEPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLsizei samples,
                                                                GLenum internalformat,
                                                                GLsizei width,
                                                                GLsizei height,
                                                                GLsizei depth,
                                                                GLboolean fixedsamplelocations);

// Desktop OpenGL 3.3
#define GL_SRC1_COLOR 0x88F9
#define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC
#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#define GL_TIME_ELAPSED 0x88BF
#define GL_TIMESTAMP 0x8E28

using PFNGLBINDFRAGDATALOCATIONINDEXEDPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                      GLuint colorNumber,
                                                                      GLuint index,
                                                                      const GLchar *name);
using PFNGLGETFRAGDATAINDEXPROC    = GLint(KHRONOS_APIENTRY *)(GLuint program, const GLchar *name);
using PFNGLQUERYCOUNTERPROC        = void(KHRONOS_APIENTRY *)(GLuint id, GLenum target);
using PFNGLGETQUERYOBJECTI64VPROC  = void(KHRONOS_APIENTRY *)(GLuint id,
                                                             GLenum pname,
                                                             GLint64 *params);
using PFNGLGETQUERYOBJECTUI64VPROC = void(KHRONOS_APIENTRY *)(GLuint id,
                                                              GLenum pname,
                                                              GLuint64 *params);
using PFNGLVERTEXATTRIBP1UIPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                           GLenum type,
                                                           GLboolean normalized,
                                                           GLuint value);
using PFNGLVERTEXATTRIBP1UIVPROC   = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum type,
                                                            GLboolean normalized,
                                                            const GLuint *value);
using PFNGLVERTEXATTRIBP2UIPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                           GLenum type,
                                                           GLboolean normalized,
                                                           GLuint value);
using PFNGLVERTEXATTRIBP2UIVPROC   = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum type,
                                                            GLboolean normalized,
                                                            const GLuint *value);
using PFNGLVERTEXATTRIBP3UIPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                           GLenum type,
                                                           GLboolean normalized,
                                                           GLuint value);
using PFNGLVERTEXATTRIBP3UIVPROC   = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum type,
                                                            GLboolean normalized,
                                                            const GLuint *value);
using PFNGLVERTEXATTRIBP4UIPROC    = void(KHRONOS_APIENTRY *)(GLuint index,
                                                           GLenum type,
                                                           GLboolean normalized,
                                                           GLuint value);
using PFNGLVERTEXATTRIBP4UIVPROC   = void(KHRONOS_APIENTRY *)(GLuint index,
                                                            GLenum type,
                                                            GLboolean normalized,
                                                            const GLuint *value);
using PFNGLVERTEXP2UIPROC          = void(KHRONOS_APIENTRY *)(GLenum type, GLuint value);
using PFNGLVERTEXP2UIVPROC         = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *value);
using PFNGLVERTEXP3UIPROC          = void(KHRONOS_APIENTRY *)(GLenum type, GLuint value);
using PFNGLVERTEXP3UIVPROC         = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *value);
using PFNGLVERTEXP4UIPROC          = void(KHRONOS_APIENTRY *)(GLenum type, GLuint value);
using PFNGLVERTEXP4UIVPROC         = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *value);
using PFNGLTEXCOORDP1UIPROC        = void(KHRONOS_APIENTRY *)(GLenum type, GLuint coords);
using PFNGLTEXCOORDP1UIVPROC       = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *coords);
using PFNGLTEXCOORDP2UIPROC        = void(KHRONOS_APIENTRY *)(GLenum type, GLuint coords);
using PFNGLTEXCOORDP2UIVPROC       = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *coords);
using PFNGLTEXCOORDP3UIPROC        = void(KHRONOS_APIENTRY *)(GLenum type, GLuint coords);
using PFNGLTEXCOORDP3UIVPROC       = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *coords);
using PFNGLTEXCOORDP4UIPROC        = void(KHRONOS_APIENTRY *)(GLenum type, GLuint coords);
using PFNGLTEXCOORDP4UIVPROC       = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *coords);
using PFNGLMULTITEXCOORDP1UIPROC   = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                            GLenum type,
                                                            GLuint coords);
using PFNGLMULTITEXCOORDP1UIVPROC  = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                             GLenum type,
                                                             const GLuint *coords);
using PFNGLMULTITEXCOORDP2UIPROC   = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                            GLenum type,
                                                            GLuint coords);
using PFNGLMULTITEXCOORDP2UIVPROC  = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                             GLenum type,
                                                             const GLuint *coords);
using PFNGLMULTITEXCOORDP3UIPROC   = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                            GLenum type,
                                                            GLuint coords);
using PFNGLMULTITEXCOORDP3UIVPROC  = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                             GLenum type,
                                                             const GLuint *coords);
using PFNGLMULTITEXCOORDP4UIPROC   = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                            GLenum type,
                                                            GLuint coords);
using PFNGLMULTITEXCOORDP4UIVPROC  = void(KHRONOS_APIENTRY *)(GLenum texture,
                                                             GLenum type,
                                                             const GLuint *coords);
using PFNGLNORMALP3UIPROC          = void(KHRONOS_APIENTRY *)(GLenum type, GLuint coords);
using PFNGLNORMALP3UIVPROC         = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *coords);
using PFNGLCOLORP3UIPROC           = void(KHRONOS_APIENTRY *)(GLenum type, GLuint color);
using PFNGLCOLORP3UIVPROC          = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *color);
using PFNGLCOLORP4UIPROC           = void(KHRONOS_APIENTRY *)(GLenum type, GLuint color);
using PFNGLCOLORP4UIVPROC          = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *color);
using PFNGLSECONDARYCOLORP3UIPROC  = void(KHRONOS_APIENTRY *)(GLenum type, GLuint color);
using PFNGLSECONDARYCOLORP3UIVPROC = void(KHRONOS_APIENTRY *)(GLenum type, const GLuint *color);

// Desktop OpenGL 4.0
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY 0x900B
#define GL_MAX_VERTEX_STREAMS 0x8E71
#define GL_DOUBLE_VEC2 0x8FFC
#define GL_DOUBLE_VEC3 0x8FFD
#define GL_DOUBLE_VEC4 0x8FFE
#define GL_DOUBLE_MAT2 0x8F46
#define GL_DOUBLE_MAT3 0x8F47
#define GL_DOUBLE_MAT4 0x8F48
#define GL_DOUBLE_MAT2x3 0x8F49
#define GL_DOUBLE_MAT2x4 0x8F4A
#define GL_DOUBLE_MAT3x2 0x8F4B
#define GL_DOUBLE_MAT3x4 0x8F4C
#define GL_DOUBLE_MAT4x2 0x8F4D
#define GL_DOUBLE_MAT4x3 0x8F4E
#define GL_ACTIVE_SUBROUTINES 0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS 0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH 0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES 0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES 0x8E4A
#define GL_COMPATIBLE_SUBROUTINES 0x8E4B
#define GL_PATCH_DEFAULT_INNER_LEVEL 0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL 0x8E74
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70

using PFNGLUNIFORM1DPROC = void(KHRONOS_APIENTRY *)(GLint location, GLdouble x);
using PFNGLUNIFORM2DPROC = void(KHRONOS_APIENTRY *)(GLint location, GLdouble x, GLdouble y);
using PFNGLUNIFORM3DPROC = void(KHRONOS_APIENTRY *)(GLint location,
                                                    GLdouble x,
                                                    GLdouble y,
                                                    GLdouble z);
using PFNGLUNIFORM4DPROC =
    void(KHRONOS_APIENTRY *)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
using PFNGLUNIFORM1DVPROC                     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLdouble *value);
using PFNGLUNIFORM2DVPROC                     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLdouble *value);
using PFNGLUNIFORM3DVPROC                     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLdouble *value);
using PFNGLUNIFORM4DVPROC                     = void(KHRONOS_APIENTRY *)(GLint location,
                                                     GLsizei count,
                                                     const GLdouble *value);
using PFNGLUNIFORMMATRIX2DVPROC               = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLdouble *value);
using PFNGLUNIFORMMATRIX3DVPROC               = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLdouble *value);
using PFNGLUNIFORMMATRIX4DVPROC               = void(KHRONOS_APIENTRY *)(GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLdouble *value);
using PFNGLUNIFORMMATRIX2X3DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLUNIFORMMATRIX2X4DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLUNIFORMMATRIX3X2DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLUNIFORMMATRIX3X4DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLUNIFORMMATRIX4X2DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLUNIFORMMATRIX4X3DVPROC             = void(KHRONOS_APIENTRY *)(GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLdouble *value);
using PFNGLGETUNIFORMDVPROC                   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                       GLint location,
                                                       GLdouble *params);
using PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC   = GLint(KHRONOS_APIENTRY *)(GLuint program,
                                                                        GLenum shadertype,
                                                                        const GLchar *name);
using PFNGLGETSUBROUTINEINDEXPROC             = GLuint(KHRONOS_APIENTRY *)(GLuint program,
                                                               GLenum shadertype,
                                                               const GLchar *name);
using PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                       GLenum shadertype,
                                                                       GLuint index,
                                                                       GLenum pname,
                                                                       GLint *values);
using PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                         GLenum shadertype,
                                                                         GLuint index,
                                                                         GLsizei bufsize,
                                                                         GLsizei *length,
                                                                         GLchar *name);
using PFNGLGETACTIVESUBROUTINENAMEPROC        = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLenum shadertype,
                                                                  GLuint index,
                                                                  GLsizei bufsize,
                                                                  GLsizei *length,
                                                                  GLchar *name);
using PFNGLUNIFORMSUBROUTINESUIVPROC          = void(KHRONOS_APIENTRY *)(GLenum shadertype,
                                                                GLsizei count,
                                                                const GLuint *indices);
using PFNGLGETUNIFORMSUBROUTINEUIVPROC        = void(KHRONOS_APIENTRY *)(GLenum shadertype,
                                                                  GLint location,
                                                                  GLuint *params);
using PFNGLGETPROGRAMSTAGEIVPROC              = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLenum shadertype,
                                                            GLenum pname,
                                                            GLint *values);
using PFNGLPATCHPARAMETERFVPROC = void(KHRONOS_APIENTRY *)(GLenum pname, const GLfloat *values);
using PFNGLDRAWTRANSFORMFEEDBACKPROC       = void(KHRONOS_APIENTRY *)(GLenum mode, GLuint id);
using PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                      GLuint id,
                                                                      GLuint stream);
using PFNGLBEGINQUERYINDEXEDPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index, GLuint id);
using PFNGLENDQUERYINDEXEDPROC   = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index);
using PFNGLGETQUERYINDEXEDIVPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                            GLuint index,
                                                            GLenum pname,
                                                            GLint *params);

// Desktop OpenGL 4.1
#define GL_MAX_VIEWPORTS 0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS 0x825C
#define GL_VIEWPORT_BOUNDS_RANGE 0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F

using PFNGLPROGRAMUNIFORM1DPROC  = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLdouble v0);
using PFNGLPROGRAMUNIFORM1DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLdouble *value);
using PFNGLPROGRAMUNIFORM2DPROC  = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLdouble v0,
                                                           GLdouble v1);
using PFNGLPROGRAMUNIFORM2DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLdouble *value);
using PFNGLPROGRAMUNIFORM3DPROC =
    void(KHRONOS_APIENTRY *)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
using PFNGLPROGRAMUNIFORM3DVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLdouble *value);
using PFNGLPROGRAMUNIFORM4DPROC          = void(KHRONOS_APIENTRY *)(GLuint program,
                                                           GLint location,
                                                           GLdouble v0,
                                                           GLdouble v1,
                                                           GLdouble v2,
                                                           GLdouble v3);
using PFNGLPROGRAMUNIFORM4DVPROC         = void(KHRONOS_APIENTRY *)(GLuint program,
                                                            GLint location,
                                                            GLsizei count,
                                                            const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX2DVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX3DVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX4DVPROC   = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                  GLint location,
                                                                  GLsizei count,
                                                                  GLboolean transpose,
                                                                  const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLint location,
                                                                    GLsizei count,
                                                                    GLboolean transpose,
                                                                    const GLdouble *value);
using PFNGLVERTEXATTRIBL1DPROC           = void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x);
using PFNGLVERTEXATTRIBL2DPROC = void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x, GLdouble y);
using PFNGLVERTEXATTRIBL3DPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                          GLdouble x,
                                                          GLdouble y,
                                                          GLdouble z);
using PFNGLVERTEXATTRIBL4DPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
using PFNGLVERTEXATTRIBL1DVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIBL2DVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIBL3DVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIBL4DVPROC     = void(KHRONOS_APIENTRY *)(GLuint index, const GLdouble *v);
using PFNGLVERTEXATTRIBLPOINTERPROC = void(
    KHRONOS_APIENTRY *)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
using PFNGLGETVERTEXATTRIBLDVPROC = void(KHRONOS_APIENTRY *)(GLuint index,
                                                             GLenum pname,
                                                             GLdouble *params);
using PFNGLVIEWPORTARRAYVPROC     = void(KHRONOS_APIENTRY *)(GLuint first,
                                                         GLsizei count,
                                                         const GLfloat *v);
using PFNGLVIEWPORTINDEXEDFPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
using PFNGLVIEWPORTINDEXEDFVPROC = void(KHRONOS_APIENTRY *)(GLuint index, const GLfloat *v);
using PFNGLSCISSORARRAYVPROC     = void(KHRONOS_APIENTRY *)(GLuint first,
                                                        GLsizei count,
                                                        const GLint *v);
using PFNGLSCISSORINDEXEDPROC =
    void(KHRONOS_APIENTRY *)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
using PFNGLSCISSORINDEXEDVPROC   = void(KHRONOS_APIENTRY *)(GLuint index, const GLint *v);
using PFNGLDEPTHRANGEARRAYVPROC  = void(KHRONOS_APIENTRY *)(GLuint first,
                                                           GLsizei count,
                                                           const GLdouble *v);
using PFNGLDEPTHRANGEINDEXEDPROC = void(KHRONOS_APIENTRY *)(GLuint index, GLdouble n, GLdouble f);
using PFNGLGETFLOATI_VPROC  = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index, GLfloat *data);
using PFNGLGETDOUBLEI_VPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLuint index, GLdouble *data);

// Desktop OpenGL 4.2
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH 0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH 0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE 0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH 0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT 0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH 0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE 0x912E
#define GL_MIN_MAP_BUFFER_ALIGNMENT 0x90BC
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_1D 0x904C
#define GL_IMAGE_2D_RECT 0x904F
#define GL_IMAGE_1D_ARRAY 0x9052
#define GL_IMAGE_2D_MULTISAMPLE 0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY 0x9056
#define GL_INT_IMAGE_1D 0x9057
#define GL_INT_IMAGE_2D_RECT 0x905A
#define GL_INT_IMAGE_1D_ARRAY 0x905D
#define GL_INT_IMAGE_2D_MULTISAMPLE 0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D 0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_RECT 0x9065
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES 0x906D
#define GL_COMPRESSED_RGBA_BPTC_UNORM 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F

using PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC   = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                          GLint first,
                                                                          GLsizei count,
                                                                          GLsizei instancecount,
                                                                          GLuint baseinstance);
using PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                            GLsizei count,
                                                                            GLenum type,
                                                                            const void *indices,
                                                                            GLsizei instancecount,
                                                                            GLuint baseinstance);
using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC =
    void(KHRONOS_APIENTRY *)(GLenum mode,
                             GLsizei count,
                             GLenum type,
                             const void *indices,
                             GLsizei instancecount,
                             GLint basevertex,
                             GLuint baseinstance);
using PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                         GLuint bufferIndex,
                                                                         GLenum pname,
                                                                         GLint *params);
using PFNGLTEXSTORAGE1DPROC                   = void(KHRONOS_APIENTRY *)(GLenum target,
                                                       GLsizei levels,
                                                       GLenum internalformat,
                                                       GLsizei width);
using PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                         GLuint id,
                                                                         GLsizei instancecount);
using PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC =
    void(KHRONOS_APIENTRY *)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);

// Desktop OpenGL 4.3
#define GL_NUM_SHADING_LANGUAGE_VERSIONS 0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG 0x874E
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_INTERNALFORMAT_SUPPORTED 0x826F
#define GL_INTERNALFORMAT_PREFERRED 0x8270
#define GL_INTERNALFORMAT_RED_SIZE 0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE 0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE 0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE 0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE 0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE 0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE 0x8277
#define GL_INTERNALFORMAT_RED_TYPE 0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE 0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE 0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE 0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE 0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE 0x827D
#define GL_MAX_WIDTH 0x827E
#define GL_MAX_HEIGHT 0x827F
#define GL_MAX_DEPTH 0x8280
#define GL_MAX_LAYERS 0x8281
#define GL_MAX_COMBINED_DIMENSIONS 0x8282
#define GL_COLOR_COMPONENTS 0x8283
#define GL_DEPTH_COMPONENTS 0x8284
#define GL_STENCIL_COMPONENTS 0x8285
#define GL_COLOR_RENDERABLE 0x8286
#define GL_DEPTH_RENDERABLE 0x8287
#define GL_STENCIL_RENDERABLE 0x8288
#define GL_FRAMEBUFFER_RENDERABLE 0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND 0x828B
#define GL_READ_PIXELS 0x828C
#define GL_READ_PIXELS_FORMAT 0x828D
#define GL_READ_PIXELS_TYPE 0x828E
#define GL_TEXTURE_IMAGE_FORMAT 0x828F
#define GL_TEXTURE_IMAGE_TYPE 0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT 0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE 0x8292
#define GL_MIPMAP 0x8293
#define GL_MANUAL_GENERATE_MIPMAP 0x8294
#define GL_AUTO_GENERATE_MIPMAP 0x8295
#define GL_COLOR_ENCODING 0x8296
#define GL_SRGB_READ 0x8297
#define GL_SRGB_WRITE 0x8298
#define GL_FILTER 0x829A
#define GL_VERTEX_TEXTURE 0x829B
#define GL_TESS_CONTROL_TEXTURE 0x829C
#define GL_TESS_EVALUATION_TEXTURE 0x829D
#define GL_GEOMETRY_TEXTURE 0x829E
#define GL_FRAGMENT_TEXTURE 0x829F
#define GL_COMPUTE_TEXTURE 0x82A0
#define GL_TEXTURE_SHADOW 0x82A1
#define GL_TEXTURE_GATHER 0x82A2
#define GL_TEXTURE_GATHER_SHADOW 0x82A3
#define GL_SHADER_IMAGE_LOAD 0x82A4
#define GL_SHADER_IMAGE_STORE 0x82A5
#define GL_SHADER_IMAGE_ATOMIC 0x82A6
#define GL_IMAGE_TEXEL_SIZE 0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS 0x82A8
#define GL_IMAGE_PIXEL_FORMAT 0x82A9
#define GL_IMAGE_PIXEL_TYPE 0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE 0x82B3
#define GL_CLEAR_BUFFER 0x82B4
#define GL_TEXTURE_VIEW 0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS 0x82B6
#define GL_FULL_SUPPORT 0x82B7
#define GL_CAVEAT_SUPPORT 0x82B8
#define GL_IMAGE_CLASS_4_X_32 0x82B9
#define GL_IMAGE_CLASS_2_X_32 0x82BA
#define GL_IMAGE_CLASS_1_X_32 0x82BB
#define GL_IMAGE_CLASS_4_X_16 0x82BC
#define GL_IMAGE_CLASS_2_X_16 0x82BD
#define GL_IMAGE_CLASS_1_X_16 0x82BE
#define GL_IMAGE_CLASS_4_X_8 0x82BF
#define GL_IMAGE_CLASS_2_X_8 0x82C0
#define GL_IMAGE_CLASS_1_X_8 0x82C1
#define GL_IMAGE_CLASS_11_11_10 0x82C2
#define GL_IMAGE_CLASS_10_10_10_2 0x82C3
#define GL_VIEW_CLASS_128_BITS 0x82C4
#define GL_VIEW_CLASS_96_BITS 0x82C5
#define GL_VIEW_CLASS_64_BITS 0x82C6
#define GL_VIEW_CLASS_48_BITS 0x82C7
#define GL_VIEW_CLASS_32_BITS 0x82C8
#define GL_VIEW_CLASS_24_BITS 0x82C9
#define GL_VIEW_CLASS_16_BITS 0x82CA
#define GL_VIEW_CLASS_8_BITS 0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB 0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA 0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA 0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA 0x82CF
#define GL_VIEW_CLASS_RGTC1_RED 0x82D0
#define GL_VIEW_CLASS_RGTC2_RG 0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM 0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT 0x82D3
#define GL_VERTEX_SUBROUTINE 0x92E8
#define GL_TESS_CONTROL_SUBROUTINE 0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE 0x92EA
#define GL_GEOMETRY_SUBROUTINE 0x92EB
#define GL_FRAGMENT_SUBROUTINE 0x92EC
#define GL_COMPUTE_SUBROUTINE 0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM 0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM 0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM 0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM 0x92F3
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_LOCATION_INDEX 0x930F
#define GL_TEXTURE_VIEW_MIN_LEVEL 0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS 0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER 0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS 0x82DE
#define GL_DISPLAY_LIST 0x82E7

using PFNGLCLEARBUFFERDATAPROC           = void(KHRONOS_APIENTRY *)(GLenum target,
                                                          GLenum internalformat,
                                                          GLenum format,
                                                          GLenum type,
                                                          const void *data);
using PFNGLCLEARBUFFERSUBDATAPROC        = void(KHRONOS_APIENTRY *)(GLenum target,
                                                             GLenum internalformat,
                                                             GLintptr offset,
                                                             GLsizeiptr size,
                                                             GLenum format,
                                                             GLenum type,
                                                             const void *data);
using PFNGLGETINTERNALFORMATI64VPROC     = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                GLenum internalformat,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLint64 *params);
using PFNGLINVALIDATETEXSUBIMAGEPROC     = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLint level,
                                                                GLint xoffset,
                                                                GLint yoffset,
                                                                GLint zoffset,
                                                                GLsizei width,
                                                                GLsizei height,
                                                                GLsizei depth);
using PFNGLINVALIDATETEXIMAGEPROC        = void(KHRONOS_APIENTRY *)(GLuint texture, GLint level);
using PFNGLINVALIDATEBUFFERSUBDATAPROC   = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                  GLintptr offset,
                                                                  GLsizeiptr length);
using PFNGLINVALIDATEBUFFERDATAPROC      = void(KHRONOS_APIENTRY *)(GLuint buffer);
using PFNGLMULTIDRAWARRAYSINDIRECTPROC   = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                  const void *indirect,
                                                                  GLsizei drawcount,
                                                                  GLsizei stride);
using PFNGLMULTIDRAWELEMENTSINDIRECTPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                    GLenum type,
                                                                    const void *indirect,
                                                                    GLsizei drawcount,
                                                                    GLsizei stride);
using PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC = GLint(KHRONOS_APIENTRY *)(GLuint program,
                                                                           GLenum programInterface,
                                                                           const GLchar *name);
using PFNGLSHADERSTORAGEBLOCKBINDINGPROC       = void(KHRONOS_APIENTRY *)(GLuint program,
                                                                    GLuint storageBlockIndex,
                                                                    GLuint storageBlockBinding);
using PFNGLTEXTUREVIEWPROC                     = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                      GLenum target,
                                                      GLuint origtexture,
                                                      GLenum internalformat,
                                                      GLuint minlevel,
                                                      GLuint numlevels,
                                                      GLuint minlayer,
                                                      GLuint numlayers);
using PFNGLVERTEXATTRIBLFORMATPROC             = void(KHRONOS_APIENTRY *)(GLuint attribindex,
                                                              GLint size,
                                                              GLenum type,
                                                              GLuint relativeoffset);

// Desktop OpenGL 4.4
#define GL_MAP_PERSISTENT_BIT 0x0040
#define GL_MAP_COHERENT_BIT 0x0080
#define GL_DYNAMIC_STORAGE_BIT 0x0100
#define GL_CLIENT_STORAGE_BIT 0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE 0x821F
#define GL_BUFFER_STORAGE_FLAGS 0x8220
#define GL_CLEAR_TEXTURE 0x9365
#define GL_LOCATION_COMPONENT 0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER 0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT 0x00008000
#define GL_QUERY_BUFFER_BINDING 0x9193
#define GL_QUERY_RESULT_NO_WAIT 0x9194
#define GL_MIRROR_CLAMP_TO_EDGE 0x8743

using PFNGLBUFFERSTORAGEPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLsizeiptr size,
                                                        const void *data,
                                                        GLbitfield flags);
using PFNGLCLEARTEXIMAGEPROC = void(
    KHRONOS_APIENTRY *)(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
using PFNGLCLEARTEXSUBIMAGEPROC  = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                           GLint level,
                                                           GLint xoffset,
                                                           GLint yoffset,
                                                           GLint zoffset,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLsizei depth,
                                                           GLenum format,
                                                           GLenum type,
                                                           const void *data);
using PFNGLBINDBUFFERSBASEPROC   = void(KHRONOS_APIENTRY *)(GLenum target,
                                                          GLuint first,
                                                          GLsizei count,
                                                          const GLuint *buffers);
using PFNGLBINDBUFFERSRANGEPROC  = void(KHRONOS_APIENTRY *)(GLenum target,
                                                           GLuint first,
                                                           GLsizei count,
                                                           const GLuint *buffers,
                                                           const GLintptr *offsets,
                                                           const GLsizeiptr *sizes);
using PFNGLBINDTEXTURESPROC      = void(KHRONOS_APIENTRY *)(GLuint first,
                                                       GLsizei count,
                                                       const GLuint *textures);
using PFNGLBINDSAMPLERSPROC      = void(KHRONOS_APIENTRY *)(GLuint first,
                                                       GLsizei count,
                                                       const GLuint *samplers);
using PFNGLBINDIMAGETEXTURESPROC = void(KHRONOS_APIENTRY *)(GLuint first,
                                                            GLsizei count,
                                                            const GLuint *textures);
using PFNGLBINDVERTEXBUFFERSPROC = void(KHRONOS_APIENTRY *)(GLuint first,
                                                            GLsizei count,
                                                            const GLuint *buffers,
                                                            const GLintptr *offsets,
                                                            const GLsizei *strides);

// Desktop OpenGL 4.5
#define GL_NEGATIVE_ONE_TO_ONE 0x935E
#define GL_ZERO_TO_ONE 0x935F
#define GL_CLIP_ORIGIN 0x935C
#define GL_CLIP_DEPTH_MODE 0x935D
#define GL_QUERY_WAIT_INVERTED 0x8E17
#define GL_QUERY_NO_WAIT_INVERTED 0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED 0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES 0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET 0x1006
#define GL_QUERY_TARGET 0x82EA
#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC

using PFNGLCLIPCONTROLPROC                  = void(KHRONOS_APIENTRY *)(GLenum origin, GLenum depth);
using PFNGLCREATETRANSFORMFEEDBACKSPROC     = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *ids);
using PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC  = void(KHRONOS_APIENTRY *)(GLuint xfb,
                                                                      GLuint index,
                                                                      GLuint buffer);
using PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC = void(
    KHRONOS_APIENTRY *)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
using PFNGLGETTRANSFORMFEEDBACKIVPROC    = void(KHRONOS_APIENTRY *)(GLuint xfb,
                                                                 GLenum pname,
                                                                 GLint *param);
using PFNGLGETTRANSFORMFEEDBACKI_VPROC   = void(KHRONOS_APIENTRY *)(GLuint xfb,
                                                                  GLenum pname,
                                                                  GLuint index,
                                                                  GLint *param);
using PFNGLGETTRANSFORMFEEDBACKI64_VPROC = void(KHRONOS_APIENTRY *)(GLuint xfb,
                                                                    GLenum pname,
                                                                    GLuint index,
                                                                    GLint64 *param);
using PFNGLCREATEBUFFERSPROC             = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *buffers);
using PFNGLNAMEDBUFFERSTORAGEPROC        = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                             GLsizeiptr size,
                                                             const void *data,
                                                             GLbitfield flags);
using PFNGLNAMEDBUFFERDATAPROC           = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                          GLsizeiptr size,
                                                          const void *data,
                                                          GLenum usage);
using PFNGLNAMEDBUFFERSUBDATAPROC        = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                             GLintptr offset,
                                                             GLsizeiptr size,
                                                             const void *data);
using PFNGLCOPYNAMEDBUFFERSUBDATAPROC    = void(KHRONOS_APIENTRY *)(GLuint readBuffer,
                                                                 GLuint writeBuffer,
                                                                 GLintptr readOffset,
                                                                 GLintptr writeOffset,
                                                                 GLsizeiptr size);
using PFNGLCLEARNAMEDBUFFERDATAPROC      = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                               GLenum internalformat,
                                                               GLenum format,
                                                               GLenum type,
                                                               const void *data);
using PFNGLCLEARNAMEDBUFFERSUBDATAPROC   = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                  GLenum internalformat,
                                                                  GLintptr offset,
                                                                  GLsizeiptr size,
                                                                  GLenum format,
                                                                  GLenum type,
                                                                  const void *data);
using PFNGLMAPNAMEDBUFFERPROC            = void *(KHRONOS_APIENTRY *)(GLuint buffer, GLenum access);
using PFNGLMAPNAMEDBUFFERRANGEPROC       = void *(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                GLintptr offset,
                                                                GLsizeiptr length,
                                                                GLbitfield access);
using PFNGLUNMAPNAMEDBUFFERPROC          = GLboolean(KHRONOS_APIENTRY *)(GLuint buffer);
using PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                      GLintptr offset,
                                                                      GLsizeiptr length);
using PFNGLGETNAMEDBUFFERPARAMETERIVPROC   = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                    GLenum pname,
                                                                    GLint *params);
using PFNGLGETNAMEDBUFFERPARAMETERI64VPROC = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                      GLenum pname,
                                                                      GLint64 *params);
using PFNGLGETNAMEDBUFFERPOINTERVPROC      = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                 GLenum pname,
                                                                 void **params);
using PFNGLGETNAMEDBUFFERSUBDATAPROC       = void(KHRONOS_APIENTRY *)(GLuint buffer,
                                                                GLintptr offset,
                                                                GLsizeiptr size,
                                                                void *data);
using PFNGLCREATEFRAMEBUFFERSPROC = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *framebuffers);
using PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC   = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                       GLenum attachment,
                                                                       GLenum renderbuffertarget,
                                                                       GLuint renderbuffer);
using PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC     = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                     GLenum pname,
                                                                     GLint param);
using PFNGLNAMEDFRAMEBUFFERTEXTUREPROC        = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                  GLenum attachment,
                                                                  GLuint texture,
                                                                  GLint level);
using PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC   = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                       GLenum attachment,
                                                                       GLuint texture,
                                                                       GLint level,
                                                                       GLint layer);
using PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC     = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                     GLenum buf);
using PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC    = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                      GLsizei n,
                                                                      const GLenum *bufs);
using PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC     = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                     GLenum src);
using PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                         GLsizei numAttachments,
                                                                         const GLenum *attachments);
using PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC =
    void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                             GLsizei numAttachments,
                             const GLenum *attachments,
                             GLint x,
                             GLint y,
                             GLsizei width,
                             GLsizei height);
using PFNGLCLEARNAMEDFRAMEBUFFERIVPROC        = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                  GLenum buffer,
                                                                  GLint drawbuffer,
                                                                  const GLint *value);
using PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC       = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                   GLenum buffer,
                                                                   GLint drawbuffer,
                                                                   const GLuint *value);
using PFNGLCLEARNAMEDFRAMEBUFFERFVPROC        = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                  GLenum buffer,
                                                                  GLint drawbuffer,
                                                                  const GLfloat *value);
using PFNGLCLEARNAMEDFRAMEBUFFERFIPROC        = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                  GLenum buffer,
                                                                  GLint drawbuffer,
                                                                  GLfloat depth,
                                                                  GLint stencil);
using PFNGLBLITNAMEDFRAMEBUFFERPROC           = void(KHRONOS_APIENTRY *)(GLuint readFramebuffer,
                                                               GLuint drawFramebuffer,
                                                               GLint srcX0,
                                                               GLint srcY0,
                                                               GLint srcX1,
                                                               GLint srcY1,
                                                               GLint dstX0,
                                                               GLint dstY0,
                                                               GLint dstX1,
                                                               GLint dstY1,
                                                               GLbitfield mask,
                                                               GLenum filter);
using PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC    = GLenum(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                        GLenum target);
using PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC = void(KHRONOS_APIENTRY *)(GLuint framebuffer,
                                                                         GLenum pname,
                                                                         GLint *param);
using PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC =
    void(KHRONOS_APIENTRY *)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
using PFNGLCREATERENDERBUFFERSPROC = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *renderbuffers);
using PFNGLNAMEDRENDERBUFFERSTORAGEPROC            = void(KHRONOS_APIENTRY *)(GLuint renderbuffer,
                                                                   GLenum internalformat,
                                                                   GLsizei width,
                                                                   GLsizei height);
using PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC = void(KHRONOS_APIENTRY *)(GLuint renderbuffer,
                                                                              GLsizei samples,
                                                                              GLenum internalformat,
                                                                              GLsizei width,
                                                                              GLsizei height);
using PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC     = void(KHRONOS_APIENTRY *)(GLuint renderbuffer,
                                                                          GLenum pname,
                                                                          GLint *params);
using PFNGLCREATETEXTURESPROC                      = void(KHRONOS_APIENTRY *)(GLenum target,
                                                         GLsizei n,
                                                         GLuint *textures);
using PFNGLTEXTUREBUFFERPROC                       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                        GLenum internalformat,
                                                        GLuint buffer);
using PFNGLTEXTUREBUFFERRANGEPROC                  = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                             GLenum internalformat,
                                                             GLuint buffer,
                                                             GLintptr offset,
                                                             GLsizeiptr size);
using PFNGLTEXTURESTORAGE1DPROC                    = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                           GLsizei levels,
                                                           GLenum internalformat,
                                                           GLsizei width);
using PFNGLTEXTURESTORAGE2DPROC                    = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                           GLsizei levels,
                                                           GLenum internalformat,
                                                           GLsizei width,
                                                           GLsizei height);
using PFNGLTEXTURESTORAGE3DPROC                    = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                           GLsizei levels,
                                                           GLenum internalformat,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLsizei depth);
using PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC =
    void(KHRONOS_APIENTRY *)(GLuint texture,
                             GLsizei samples,
                             GLenum internalformat,
                             GLsizei width,
                             GLsizei height,
                             GLboolean fixedsamplelocations);
using PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC =
    void(KHRONOS_APIENTRY *)(GLuint texture,
                             GLsizei samples,
                             GLenum internalformat,
                             GLsizei width,
                             GLsizei height,
                             GLsizei depth,
                             GLboolean fixedsamplelocations);
using PFNGLTEXTURESUBIMAGE1DPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLsizei width,
                                                            GLenum format,
                                                            GLenum type,
                                                            const void *pixels);
using PFNGLTEXTURESUBIMAGE2DPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLsizei width,
                                                            GLsizei height,
                                                            GLenum format,
                                                            GLenum type,
                                                            const void *pixels);
using PFNGLTEXTURESUBIMAGE3DPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLint zoffset,
                                                            GLsizei width,
                                                            GLsizei height,
                                                            GLsizei depth,
                                                            GLenum format,
                                                            GLenum type,
                                                            const void *pixels);
using PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                      GLint level,
                                                                      GLint xoffset,
                                                                      GLsizei width,
                                                                      GLenum format,
                                                                      GLsizei imageSize,
                                                                      const void *data);
using PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                      GLint level,
                                                                      GLint xoffset,
                                                                      GLint yoffset,
                                                                      GLsizei width,
                                                                      GLsizei height,
                                                                      GLenum format,
                                                                      GLsizei imageSize,
                                                                      const void *data);
using PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                      GLint level,
                                                                      GLint xoffset,
                                                                      GLint yoffset,
                                                                      GLint zoffset,
                                                                      GLsizei width,
                                                                      GLsizei height,
                                                                      GLsizei depth,
                                                                      GLenum format,
                                                                      GLsizei imageSize,
                                                                      const void *data);
using PFNGLCOPYTEXTURESUBIMAGE1DPROC       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLint level,
                                                                GLint xoffset,
                                                                GLint x,
                                                                GLint y,
                                                                GLsizei width);
using PFNGLCOPYTEXTURESUBIMAGE2DPROC       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLint level,
                                                                GLint xoffset,
                                                                GLint yoffset,
                                                                GLint x,
                                                                GLint y,
                                                                GLsizei width,
                                                                GLsizei height);
using PFNGLCOPYTEXTURESUBIMAGE3DPROC       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLint level,
                                                                GLint xoffset,
                                                                GLint yoffset,
                                                                GLint zoffset,
                                                                GLint x,
                                                                GLint y,
                                                                GLsizei width,
                                                                GLsizei height);
using PFNGLTEXTUREPARAMETERFPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                            GLenum pname,
                                                            GLfloat param);
using PFNGLTEXTUREPARAMETERFVPROC          = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                             GLenum pname,
                                                             const GLfloat *param);
using PFNGLTEXTUREPARAMETERIPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                            GLenum pname,
                                                            GLint param);
using PFNGLTEXTUREPARAMETERIIVPROC         = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                              GLenum pname,
                                                              const GLint *params);
using PFNGLTEXTUREPARAMETERIUIVPROC        = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                               GLenum pname,
                                                               const GLuint *params);
using PFNGLTEXTUREPARAMETERIVPROC          = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                             GLenum pname,
                                                             const GLint *param);
using PFNGLGENERATETEXTUREMIPMAPPROC       = void(KHRONOS_APIENTRY *)(GLuint texture);
using PFNGLBINDTEXTUREUNITPROC             = void(KHRONOS_APIENTRY *)(GLuint unit, GLuint texture);
using PFNGLGETTEXTUREIMAGEPROC             = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                          GLint level,
                                                          GLenum format,
                                                          GLenum type,
                                                          GLsizei bufSize,
                                                          void *pixels);
using PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC   = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                    GLint level,
                                                                    GLsizei bufSize,
                                                                    void *pixels);
using PFNGLGETTEXTURELEVELPARAMETERFVPROC  = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                     GLint level,
                                                                     GLenum pname,
                                                                     GLfloat *params);
using PFNGLGETTEXTURELEVELPARAMETERIVPROC  = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                     GLint level,
                                                                     GLenum pname,
                                                                     GLint *params);
using PFNGLGETTEXTUREPARAMETERFVPROC       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLenum pname,
                                                                GLfloat *params);
using PFNGLGETTEXTUREPARAMETERIIVPROC      = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                 GLenum pname,
                                                                 GLint *params);
using PFNGLGETTEXTUREPARAMETERIUIVPROC     = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                  GLenum pname,
                                                                  GLuint *params);
using PFNGLGETTEXTUREPARAMETERIVPROC       = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                GLenum pname,
                                                                GLint *params);
using PFNGLCREATEVERTEXARRAYSPROC          = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *arrays);
using PFNGLDISABLEVERTEXARRAYATTRIBPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj, GLuint index);
using PFNGLENABLEVERTEXARRAYATTRIBPROC     = void(KHRONOS_APIENTRY *)(GLuint vaobj, GLuint index);
using PFNGLVERTEXARRAYELEMENTBUFFERPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj, GLuint buffer);
using PFNGLVERTEXARRAYVERTEXBUFFERPROC     = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                  GLuint bindingindex,
                                                                  GLuint buffer,
                                                                  GLintptr offset,
                                                                  GLsizei stride);
using PFNGLVERTEXARRAYVERTEXBUFFERSPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                   GLuint first,
                                                                   GLsizei count,
                                                                   const GLuint *buffers,
                                                                   const GLintptr *offsets,
                                                                   const GLsizei *strides);
using PFNGLVERTEXARRAYATTRIBBINDINGPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                   GLuint attribindex,
                                                                   GLuint bindingindex);
using PFNGLVERTEXARRAYATTRIBFORMATPROC     = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                  GLuint attribindex,
                                                                  GLint size,
                                                                  GLenum type,
                                                                  GLboolean normalized,
                                                                  GLuint relativeoffset);
using PFNGLVERTEXARRAYATTRIBIFORMATPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                   GLuint attribindex,
                                                                   GLint size,
                                                                   GLenum type,
                                                                   GLuint relativeoffset);
using PFNGLVERTEXARRAYATTRIBLFORMATPROC    = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                   GLuint attribindex,
                                                                   GLint size,
                                                                   GLenum type,
                                                                   GLuint relativeoffset);
using PFNGLVERTEXARRAYBINDINGDIVISORPROC   = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                    GLuint bindingindex,
                                                                    GLuint divisor);
using PFNGLGETVERTEXARRAYIVPROC            = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                           GLenum pname,
                                                           GLint *param);
using PFNGLGETVERTEXARRAYINDEXEDIVPROC     = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                  GLuint index,
                                                                  GLenum pname,
                                                                  GLint *param);
using PFNGLGETVERTEXARRAYINDEXED64IVPROC   = void(KHRONOS_APIENTRY *)(GLuint vaobj,
                                                                    GLuint index,
                                                                    GLenum pname,
                                                                    GLint64 *param);
using PFNGLCREATESAMPLERSPROC              = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *samplers);
using PFNGLCREATEPROGRAMPIPELINESPROC      = void(KHRONOS_APIENTRY *)(GLsizei n, GLuint *pipelines);
using PFNGLCREATEQUERIESPROC = void(KHRONOS_APIENTRY *)(GLenum target, GLsizei n, GLuint *ids);
using PFNGLGETQUERYBUFFEROBJECTI64VPROC     = void(KHRONOS_APIENTRY *)(GLuint id,
                                                                   GLuint buffer,
                                                                   GLenum pname,
                                                                   GLintptr offset);
using PFNGLGETQUERYBUFFEROBJECTIVPROC       = void(KHRONOS_APIENTRY *)(GLuint id,
                                                                 GLuint buffer,
                                                                 GLenum pname,
                                                                 GLintptr offset);
using PFNGLGETQUERYBUFFEROBJECTUI64VPROC    = void(KHRONOS_APIENTRY *)(GLuint id,
                                                                    GLuint buffer,
                                                                    GLenum pname,
                                                                    GLintptr offset);
using PFNGLGETQUERYBUFFEROBJECTUIVPROC      = void(KHRONOS_APIENTRY *)(GLuint id,
                                                                  GLuint buffer,
                                                                  GLenum pname,
                                                                  GLintptr offset);
using PFNGLGETTEXTURESUBIMAGEPROC           = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                             GLint level,
                                                             GLint xoffset,
                                                             GLint yoffset,
                                                             GLint zoffset,
                                                             GLsizei width,
                                                             GLsizei height,
                                                             GLsizei depth,
                                                             GLenum format,
                                                             GLenum type,
                                                             GLsizei bufSize,
                                                             void *pixels);
using PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC = void(KHRONOS_APIENTRY *)(GLuint texture,
                                                                       GLint level,
                                                                       GLint xoffset,
                                                                       GLint yoffset,
                                                                       GLint zoffset,
                                                                       GLsizei width,
                                                                       GLsizei height,
                                                                       GLsizei depth,
                                                                       GLsizei bufSize,
                                                                       void *pixels);
using PFNGLGETNCOMPRESSEDTEXIMAGEPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                                 GLint lod,
                                                                 GLsizei bufSize,
                                                                 void *pixels);
using PFNGLGETNTEXIMAGEPROC                 = void(KHRONOS_APIENTRY *)(GLenum target,
                                                       GLint level,
                                                       GLenum format,
                                                       GLenum type,
                                                       GLsizei bufSize,
                                                       void *pixels);
using PFNGLGETNUNIFORMDVPROC                = void(KHRONOS_APIENTRY *)(GLuint program,
                                                        GLint location,
                                                        GLsizei bufSize,
                                                        GLdouble *params);
using PFNGLGETNMAPDVPROC                    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                    GLenum query,
                                                    GLsizei bufSize,
                                                    GLdouble *v);
using PFNGLGETNMAPFVPROC                    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                    GLenum query,
                                                    GLsizei bufSize,
                                                    GLfloat *v);
using PFNGLGETNMAPIVPROC                    = void(KHRONOS_APIENTRY *)(GLenum target,
                                                    GLenum query,
                                                    GLsizei bufSize,
                                                    GLint *v);
using PFNGLGETNPIXELMAPFVPROC               = void(KHRONOS_APIENTRY *)(GLenum map,
                                                         GLsizei bufSize,
                                                         GLfloat *values);
using PFNGLGETNPIXELMAPUIVPROC              = void(KHRONOS_APIENTRY *)(GLenum map,
                                                          GLsizei bufSize,
                                                          GLuint *values);
using PFNGLGETNPIXELMAPUSVPROC              = void(KHRONOS_APIENTRY *)(GLenum map,
                                                          GLsizei bufSize,
                                                          GLushort *values);
using PFNGLGETNPOLYGONSTIPPLEPROC = void(KHRONOS_APIENTRY *)(GLsizei bufSize, GLubyte *pattern);
using PFNGLGETNCOLORTABLEPROC     = void(
    KHRONOS_APIENTRY *)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
using PFNGLGETNCONVOLUTIONFILTERPROC = void(
    KHRONOS_APIENTRY *)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
using PFNGLGETNSEPARABLEFILTERPROC = void(KHRONOS_APIENTRY *)(GLenum target,
                                                              GLenum format,
                                                              GLenum type,
                                                              GLsizei rowBufSize,
                                                              void *row,
                                                              GLsizei columnBufSize,
                                                              void *column,
                                                              void *span);
using PFNGLGETNHISTOGRAMPROC       = void(KHRONOS_APIENTRY *)(GLenum target,
                                                        GLboolean reset,
                                                        GLenum format,
                                                        GLenum type,
                                                        GLsizei bufSize,
                                                        void *values);
using PFNGLGETNMINMAXPROC          = void(KHRONOS_APIENTRY *)(GLenum target,
                                                     GLboolean reset,
                                                     GLenum format,
                                                     GLenum type,
                                                     GLsizei bufSize,
                                                     void *values);
using PFNGLTEXTUREBARRIERPROC      = void(KHRONOS_APIENTRY *)();

// Desktop OpenGL 4.6
#define GL_SHADER_BINARY_FORMAT_SPIR_V 0x9551
#define GL_SPIR_V_BINARY 0x9552
#define GL_PARAMETER_BUFFER 0x80EE
#define GL_PARAMETER_BUFFER_BINDING 0x80EF
#define GL_CONTEXT_FLAG_NO_ERROR_BIT 0x00000008
#define GL_VERTICES_SUBMITTED 0x82EE
#define GL_PRIMITIVES_SUBMITTED 0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS 0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES 0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES 0x82F7
#define GL_POLYGON_OFFSET_CLAMP 0x8E1B
#define GL_SPIR_V_EXTENSIONS 0x9553
#define GL_NUM_SPIR_V_EXTENSIONS 0x9554
#define GL_TEXTURE_MAX_ANISOTROPY 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY 0x84FF
#define GL_TRANSFORM_FEEDBACK_OVERFLOW 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW 0x82ED

using PFNGLSPECIALIZESHADERPROC               = void(KHRONOS_APIENTRY *)(GLuint shader,
                                                           const GLchar *pEntryPoint,
                                                           GLuint numSpecializationConstants,
                                                           const GLuint *pConstantIndex,
                                                           const GLuint *pConstantValue);
using PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC   = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                       const void *indirect,
                                                                       GLintptr drawcount,
                                                                       GLsizei maxdrawcount,
                                                                       GLsizei stride);
using PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC = void(KHRONOS_APIENTRY *)(GLenum mode,
                                                                         GLenum type,
                                                                         const void *indirect,
                                                                         GLintptr drawcount,
                                                                         GLsizei maxdrawcount,
                                                                         GLsizei stride);
using PFNGLPOLYGONOFFSETCLAMPPROC             = void(KHRONOS_APIENTRY *)(GLfloat factor,
                                                             GLfloat units,
                                                             GLfloat clamp);

#endif
