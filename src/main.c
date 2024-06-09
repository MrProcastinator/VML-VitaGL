#include <stdlib.h>
#include <stdint.h>

#include <vitaGL.h>

#include <mono/metadata/appdomain.h>
#include <mono/mini/jit.h>

extern void** mono_aot_module_VitaSdk_Libs_VitaGL_info;

static uint32_t get_GL_FALSE()
{
	return GL_FALSE;
}

static uint32_t get_GL_TRUE()
{
	return GL_TRUE;
}

static uint32_t get_GL_NO_ERROR()
{
	return GL_NO_ERROR;
}

static uint32_t get_GL_ZERO()
{
	return GL_ZERO;
}

static uint32_t get_GL_ONE()
{
	return GL_ONE;
}

static uint32_t get_GL_NONE()
{
	return GL_NONE;
}

static uint32_t get_GL_POINTS()
{
	return GL_POINTS;
}

static uint32_t get_GL_LINES()
{
	return GL_LINES;
}

static uint32_t get_GL_LINE_LOOP()
{
	return GL_LINE_LOOP;
}

static uint32_t get_GL_LINE_STRIP()
{
	return GL_LINE_STRIP;
}

static uint32_t get_GL_TRIANGLES()
{
	return GL_TRIANGLES;
}

static uint32_t get_GL_TRIANGLE_STRIP()
{
	return GL_TRIANGLE_STRIP;
}

static uint32_t get_GL_TRIANGLE_FAN()
{
	return GL_TRIANGLE_FAN;
}

static uint32_t get_GL_QUADS()
{
	return GL_QUADS;
}

static uint32_t get_GL_ADD()
{
	return GL_ADD;
}

static uint32_t get_GL_NEVER()
{
	return GL_NEVER;
}

static uint32_t get_GL_LESS()
{
	return GL_LESS;
}

static uint32_t get_GL_EQUAL()
{
	return GL_EQUAL;
}

static uint32_t get_GL_LEQUAL()
{
	return GL_LEQUAL;
}

static uint32_t get_GL_GREATER()
{
	return GL_GREATER;
}

static uint32_t get_GL_NOTEQUAL()
{
	return GL_NOTEQUAL;
}

static uint32_t get_GL_GEQUAL()
{
	return GL_GEQUAL;
}

static uint32_t get_GL_ALWAYS()
{
	return GL_ALWAYS;
}

static uint32_t get_GL_SRC_COLOR()
{
	return GL_SRC_COLOR;
}

static uint32_t get_GL_ONE_MINUS_SRC_COLOR()
{
	return GL_ONE_MINUS_SRC_COLOR;
}

static uint32_t get_GL_SRC_ALPHA()
{
	return GL_SRC_ALPHA;
}

static uint32_t get_GL_ONE_MINUS_SRC_ALPHA()
{
	return GL_ONE_MINUS_SRC_ALPHA;
}

static uint32_t get_GL_DST_ALPHA()
{
	return GL_DST_ALPHA;
}

static uint32_t get_GL_ONE_MINUS_DST_ALPHA()
{
	return GL_ONE_MINUS_DST_ALPHA;
}

static uint32_t get_GL_DST_COLOR()
{
	return GL_DST_COLOR;
}

static uint32_t get_GL_ONE_MINUS_DST_COLOR()
{
	return GL_ONE_MINUS_DST_COLOR;
}

static uint32_t get_GL_SRC_ALPHA_SATURATE()
{
	return GL_SRC_ALPHA_SATURATE;
}

static uint32_t get_GL_FRONT()
{
	return GL_FRONT;
}

static uint32_t get_GL_BACK()
{
	return GL_BACK;
}

static uint32_t get_GL_FRONT_AND_BACK()
{
	return GL_FRONT_AND_BACK;
}

static uint32_t get_GL_INVALID_ENUM()
{
	return GL_INVALID_ENUM;
}

static uint32_t get_GL_INVALID_VALUE()
{
	return GL_INVALID_VALUE;
}

static uint32_t get_GL_INVALID_OPERATION()
{
	return GL_INVALID_OPERATION;
}

static uint32_t get_GL_STACK_OVERFLOW()
{
	return GL_STACK_OVERFLOW;
}

static uint32_t get_GL_STACK_UNDERFLOW()
{
	return GL_STACK_UNDERFLOW;
}

static uint32_t get_GL_OUT_OF_MEMORY()
{
	return GL_OUT_OF_MEMORY;
}

static uint32_t get_GL_EXP()
{
	return GL_EXP;
}

static uint32_t get_GL_EXP2()
{
	return GL_EXP2;
}

static uint32_t get_GL_CW()
{
	return GL_CW;
}

static uint32_t get_GL_CCW()
{
	return GL_CCW;
}

static uint32_t get_GL_CURRENT_COLOR()
{
	return GL_CURRENT_COLOR;
}

static uint32_t get_GL_POLYGON_MODE()
{
	return GL_POLYGON_MODE;
}

static uint32_t get_GL_CULL_FACE()
{
	return GL_CULL_FACE;
}

static uint32_t get_GL_LIGHTING()
{
	return GL_LIGHTING;
}

static uint32_t get_GL_LIGHT_MODEL_AMBIENT()
{
	return GL_LIGHT_MODEL_AMBIENT;
}

static uint32_t get_GL_COLOR_MATERIAL()
{
	return GL_COLOR_MATERIAL;
}

static uint32_t get_GL_FOG()
{
	return GL_FOG;
}

static uint32_t get_GL_FOG_DENSITY()
{
	return GL_FOG_DENSITY;
}

static uint32_t get_GL_FOG_START()
{
	return GL_FOG_START;
}

static uint32_t get_GL_FOG_END()
{
	return GL_FOG_END;
}

static uint32_t get_GL_FOG_MODE()
{
	return GL_FOG_MODE;
}

static uint32_t get_GL_FOG_COLOR()
{
	return GL_FOG_COLOR;
}

static uint32_t get_GL_DEPTH_TEST()
{
	return GL_DEPTH_TEST;
}

static uint32_t get_GL_DEPTH_WRITEMASK()
{
	return GL_DEPTH_WRITEMASK;
}

static uint32_t get_GL_STENCIL_TEST()
{
	return GL_STENCIL_TEST;
}

static uint32_t get_GL_MATRIX_MODE()
{
	return GL_MATRIX_MODE;
}

static uint32_t get_GL_NORMALIZE()
{
	return GL_NORMALIZE;
}

static uint32_t get_GL_VIEWPORT()
{
	return GL_VIEWPORT;
}

static uint32_t get_GL_MODELVIEW_MATRIX()
{
	return GL_MODELVIEW_MATRIX;
}

static uint32_t get_GL_PROJECTION_MATRIX()
{
	return GL_PROJECTION_MATRIX;
}

static uint32_t get_GL_TEXTURE_MATRIX()
{
	return GL_TEXTURE_MATRIX;
}

static uint32_t get_GL_ALPHA_TEST()
{
	return GL_ALPHA_TEST;
}

static uint32_t get_GL_BLEND_DST()
{
	return GL_BLEND_DST;
}

static uint32_t get_GL_BLEND_SRC()
{
	return GL_BLEND_SRC;
}

static uint32_t get_GL_BLEND()
{
	return GL_BLEND;
}

static uint32_t get_GL_SCISSOR_BOX()
{
	return GL_SCISSOR_BOX;
}

static uint32_t get_GL_SCISSOR_TEST()
{
	return GL_SCISSOR_TEST;
}

static uint32_t get_GL_UNPACK_ROW_LENGTH()
{
	return GL_UNPACK_ROW_LENGTH;
}

static uint32_t get_GL_UNPACK_ALIGNMENT()
{
	return GL_UNPACK_ALIGNMENT;
}

static uint32_t get_GL_PACK_ALIGNMENT()
{
	return GL_PACK_ALIGNMENT;
}

static uint32_t get_GL_ALPHA_SCALE()
{
	return GL_ALPHA_SCALE;
}

static uint32_t get_GL_MAX_LIGHTS()
{
	return GL_MAX_LIGHTS;
}

static uint32_t get_GL_MAX_CLIP_PLANES()
{
	return GL_MAX_CLIP_PLANES;
}

static uint32_t get_GL_MAX_TEXTURE_SIZE()
{
	return GL_MAX_TEXTURE_SIZE;
}

static uint32_t get_GL_MAX_MODELVIEW_STACK_DEPTH()
{
	return GL_MAX_MODELVIEW_STACK_DEPTH;
}

static uint32_t get_GL_MAX_PROJECTION_STACK_DEPTH()
{
	return GL_MAX_PROJECTION_STACK_DEPTH;
}

static uint32_t get_GL_MAX_TEXTURE_STACK_DEPTH()
{
	return GL_MAX_TEXTURE_STACK_DEPTH;
}

static uint32_t get_GL_MAX_VIEWPORT_DIMS()
{
	return GL_MAX_VIEWPORT_DIMS;
}

static uint32_t get_GL_RED_BITS()
{
	return GL_RED_BITS;
}

static uint32_t get_GL_GREEN_BITS()
{
	return GL_GREEN_BITS;
}

static uint32_t get_GL_BLUE_BITS()
{
	return GL_BLUE_BITS;
}

static uint32_t get_GL_DEPTH_BITS()
{
	return GL_DEPTH_BITS;
}

static uint32_t get_GL_STENCIL_BITS()
{
	return GL_STENCIL_BITS;
}

static uint32_t get_GL_TEXTURE_2D()
{
	return GL_TEXTURE_2D;
}

static uint32_t get_GL_DONT_CARE()
{
	return GL_DONT_CARE;
}

static uint32_t get_GL_FASTEST()
{
	return GL_FASTEST;
}

static uint32_t get_GL_NICEST()
{
	return GL_NICEST;
}

static uint32_t get_GL_AMBIENT()
{
	return GL_AMBIENT;
}

static uint32_t get_GL_DIFFUSE()
{
	return GL_DIFFUSE;
}

static uint32_t get_GL_SPECULAR()
{
	return GL_SPECULAR;
}

static uint32_t get_GL_POSITION()
{
	return GL_POSITION;
}

static uint32_t get_GL_CONSTANT_ATTENUATION()
{
	return GL_CONSTANT_ATTENUATION;
}

static uint32_t get_GL_LINEAR_ATTENUATION()
{
	return GL_LINEAR_ATTENUATION;
}

static uint32_t get_GL_QUADRATIC_ATTENUATION()
{
	return GL_QUADRATIC_ATTENUATION;
}

static uint32_t get_GL_COMPILE()
{
	return GL_COMPILE;
}

static uint32_t get_GL_COMPILE_AND_EXECUTE()
{
	return GL_COMPILE_AND_EXECUTE;
}

static uint32_t get_GL_BYTE()
{
	return GL_BYTE;
}

static uint32_t get_GL_UNSIGNED_BYTE()
{
	return GL_UNSIGNED_BYTE;
}

static uint32_t get_GL_SHORT()
{
	return GL_SHORT;
}

static uint32_t get_GL_UNSIGNED_SHORT()
{
	return GL_UNSIGNED_SHORT;
}

static uint32_t get_GL_INT()
{
	return GL_INT;
}

static uint32_t get_GL_UNSIGNED_INT()
{
	return GL_UNSIGNED_INT;
}

static uint32_t get_GL_FLOAT()
{
	return GL_FLOAT;
}

static uint32_t get_GL_HALF_FLOAT()
{
	return GL_HALF_FLOAT;
}

static uint32_t get_GL_FIXED()
{
	return GL_FIXED;
}

static uint32_t get_GL_INVERT()
{
	return GL_INVERT;
}

static uint32_t get_GL_EMISSION()
{
	return GL_EMISSION;
}

static uint32_t get_GL_AMBIENT_AND_DIFFUSE()
{
	return GL_AMBIENT_AND_DIFFUSE;
}

static uint32_t get_GL_MODELVIEW()
{
	return GL_MODELVIEW;
}

static uint32_t get_GL_PROJECTION()
{
	return GL_PROJECTION;
}

static uint32_t get_GL_TEXTURE()
{
	return GL_TEXTURE;
}

static uint32_t get_GL_COLOR_INDEX()
{
	return GL_COLOR_INDEX;
}

static uint32_t get_GL_DEPTH_COMPONENT()
{
	return GL_DEPTH_COMPONENT;
}

static uint32_t get_GL_RED()
{
	return GL_RED;
}

static uint32_t get_GL_GREEN()
{
	return GL_GREEN;
}

static uint32_t get_GL_BLUE()
{
	return GL_BLUE;
}

static uint32_t get_GL_ALPHA()
{
	return GL_ALPHA;
}

static uint32_t get_GL_RGB()
{
	return GL_RGB;
}

static uint32_t get_GL_RGBA()
{
	return GL_RGBA;
}

static uint32_t get_GL_LUMINANCE()
{
	return GL_LUMINANCE;
}

static uint32_t get_GL_LUMINANCE_ALPHA()
{
	return GL_LUMINANCE_ALPHA;
}

static uint32_t get_GL_POINT()
{
	return GL_POINT;
}

static uint32_t get_GL_LINE()
{
	return GL_LINE;
}

static uint32_t get_GL_FILL()
{
	return GL_FILL;
}

static uint32_t get_GL_FLAT()
{
	return GL_FLAT;
}

static uint32_t get_GL_SMOOTH()
{
	return GL_SMOOTH;
}

static uint32_t get_GL_KEEP()
{
	return GL_KEEP;
}

static uint32_t get_GL_REPLACE()
{
	return GL_REPLACE;
}

static uint32_t get_GL_INCR()
{
	return GL_INCR;
}

static uint32_t get_GL_DECR()
{
	return GL_DECR;
}

static uint32_t get_GL_VENDOR()
{
	return GL_VENDOR;
}

static uint32_t get_GL_RENDERER()
{
	return GL_RENDERER;
}

static uint32_t get_GL_VERSION()
{
	return GL_VERSION;
}

static uint32_t get_GL_EXTENSIONS()
{
	return GL_EXTENSIONS;
}

static uint32_t get_GL_MODULATE()
{
	return GL_MODULATE;
}

static uint32_t get_GL_DECAL()
{
	return GL_DECAL;
}

static uint32_t get_GL_TEXTURE_ENV_MODE()
{
	return GL_TEXTURE_ENV_MODE;
}

static uint32_t get_GL_TEXTURE_ENV_COLOR()
{
	return GL_TEXTURE_ENV_COLOR;
}

static uint32_t get_GL_TEXTURE_ENV()
{
	return GL_TEXTURE_ENV;
}

static uint32_t get_GL_NEAREST()
{
	return GL_NEAREST;
}

static uint32_t get_GL_LINEAR()
{
	return GL_LINEAR;
}

static uint32_t get_GL_NEAREST_MIPMAP_NEAREST()
{
	return GL_NEAREST_MIPMAP_NEAREST;
}

static uint32_t get_GL_LINEAR_MIPMAP_NEAREST()
{
	return GL_LINEAR_MIPMAP_NEAREST;
}

static uint32_t get_GL_NEAREST_MIPMAP_LINEAR()
{
	return GL_NEAREST_MIPMAP_LINEAR;
}

static uint32_t get_GL_LINEAR_MIPMAP_LINEAR()
{
	return GL_LINEAR_MIPMAP_LINEAR;
}

static uint32_t get_GL_TEXTURE_MAG_FILTER()
{
	return GL_TEXTURE_MAG_FILTER;
}

static uint32_t get_GL_TEXTURE_MIN_FILTER()
{
	return GL_TEXTURE_MIN_FILTER;
}

static uint32_t get_GL_TEXTURE_WRAP_S()
{
	return GL_TEXTURE_WRAP_S;
}

static uint32_t get_GL_TEXTURE_WRAP_T()
{
	return GL_TEXTURE_WRAP_T;
}

static uint32_t get_GL_CLAMP()
{
	return GL_CLAMP;
}

static uint32_t get_GL_REPEAT()
{
	return GL_REPEAT;
}

static uint32_t get_GL_POLYGON_OFFSET_UNITS()
{
	return GL_POLYGON_OFFSET_UNITS;
}

static uint32_t get_GL_POLYGON_OFFSET_POINT()
{
	return GL_POLYGON_OFFSET_POINT;
}

static uint32_t get_GL_POLYGON_OFFSET_LINE()
{
	return GL_POLYGON_OFFSET_LINE;
}

static uint32_t get_GL_V2F()
{
	return GL_V2F;
}

static uint32_t get_GL_V3F()
{
	return GL_V3F;
}

static uint32_t get_GL_C4UB_V2F()
{
	return GL_C4UB_V2F;
}

static uint32_t get_GL_C4UB_V3F()
{
	return GL_C4UB_V3F;
}

static uint32_t get_GL_C3F_V3F()
{
	return GL_C3F_V3F;
}

static uint32_t get_GL_T2F_V3F()
{
	return GL_T2F_V3F;
}

static uint32_t get_GL_T4F_V4F()
{
	return GL_T4F_V4F;
}

static uint32_t get_GL_T2F_C4UB_V3F()
{
	return GL_T2F_C4UB_V3F;
}

static uint32_t get_GL_T2F_C3F_V3F()
{
	return GL_T2F_C3F_V3F;
}

static uint32_t get_GL_CLIP_PLANE0()
{
	return GL_CLIP_PLANE0;
}

static uint32_t get_GL_CLIP_PLANE1()
{
	return GL_CLIP_PLANE1;
}

static uint32_t get_GL_CLIP_PLANE2()
{
	return GL_CLIP_PLANE2;
}

static uint32_t get_GL_CLIP_PLANE3()
{
	return GL_CLIP_PLANE3;
}

static uint32_t get_GL_CLIP_PLANE4()
{
	return GL_CLIP_PLANE4;
}

static uint32_t get_GL_CLIP_PLANE5()
{
	return GL_CLIP_PLANE5;
}

static uint32_t get_GL_CLIP_PLANE6()
{
	return GL_CLIP_PLANE6;
}

static uint32_t get_GL_LIGHT0()
{
	return GL_LIGHT0;
}

static uint32_t get_GL_LIGHT1()
{
	return GL_LIGHT1;
}

static uint32_t get_GL_LIGHT2()
{
	return GL_LIGHT2;
}

static uint32_t get_GL_LIGHT3()
{
	return GL_LIGHT3;
}

static uint32_t get_GL_LIGHT4()
{
	return GL_LIGHT4;
}

static uint32_t get_GL_LIGHT5()
{
	return GL_LIGHT5;
}

static uint32_t get_GL_LIGHT6()
{
	return GL_LIGHT6;
}

static uint32_t get_GL_LIGHT7()
{
	return GL_LIGHT7;
}

static uint32_t get_GL_ABGR_EXT()
{
	return GL_ABGR_EXT;
}

static uint32_t get_GL_FUNC_ADD()
{
	return GL_FUNC_ADD;
}

static uint32_t get_GL_MIN()
{
	return GL_MIN;
}

static uint32_t get_GL_MAX()
{
	return GL_MAX;
}

static uint32_t get_GL_BLEND_EQUATION()
{
	return GL_BLEND_EQUATION;
}

static uint32_t get_GL_FUNC_SUBTRACT()
{
	return GL_FUNC_SUBTRACT;
}

static uint32_t get_GL_FUNC_REVERSE_SUBTRACT()
{
	return GL_FUNC_REVERSE_SUBTRACT;
}

static uint32_t get_GL_UNSIGNED_SHORT_4_4_4_4()
{
	return GL_UNSIGNED_SHORT_4_4_4_4;
}

static uint32_t get_GL_UNSIGNED_SHORT_5_5_5_1()
{
	return GL_UNSIGNED_SHORT_5_5_5_1;
}

static uint32_t get_GL_UNSIGNED_INT_8_8_8_8()
{
	return GL_UNSIGNED_INT_8_8_8_8;
}

static uint32_t get_GL_POLYGON_OFFSET_FILL()
{
	return GL_POLYGON_OFFSET_FILL;
}

static uint32_t get_GL_POLYGON_OFFSET_FACTOR()
{
	return GL_POLYGON_OFFSET_FACTOR;
}

static uint32_t get_GL_INTENSITY()
{
	return GL_INTENSITY;
}

static uint32_t get_GL_TEXTURE_BINDING_2D()
{
	return GL_TEXTURE_BINDING_2D;
}

static uint32_t get_GL_VERTEX_ARRAY()
{
	return GL_VERTEX_ARRAY;
}

static uint32_t get_GL_NORMAL_ARRAY()
{
	return GL_NORMAL_ARRAY;
}

static uint32_t get_GL_COLOR_ARRAY()
{
	return GL_COLOR_ARRAY;
}

static uint32_t get_GL_TEXTURE_COORD_ARRAY()
{
	return GL_TEXTURE_COORD_ARRAY;
}

static uint32_t get_GL_VERTEX_ARRAY_SIZE()
{
	return GL_VERTEX_ARRAY_SIZE;
}

static uint32_t get_GL_VERTEX_ARRAY_TYPE()
{
	return GL_VERTEX_ARRAY_TYPE;
}

static uint32_t get_GL_VERTEX_ARRAY_STRIDE()
{
	return GL_VERTEX_ARRAY_STRIDE;
}

static uint32_t get_GL_NORMAL_ARRAY_TYPE()
{
	return GL_NORMAL_ARRAY_TYPE;
}

static uint32_t get_GL_NORMAL_ARRAY_STRIDE()
{
	return GL_NORMAL_ARRAY_STRIDE;
}

static uint32_t get_GL_COLOR_ARRAY_SIZE()
{
	return GL_COLOR_ARRAY_SIZE;
}

static uint32_t get_GL_COLOR_ARRAY_TYPE()
{
	return GL_COLOR_ARRAY_TYPE;
}

static uint32_t get_GL_COLOR_ARRAY_STRIDE()
{
	return GL_COLOR_ARRAY_STRIDE;
}

static uint32_t get_GL_TEXTURE_COORD_ARRAY_SIZE()
{
	return GL_TEXTURE_COORD_ARRAY_SIZE;
}

static uint32_t get_GL_TEXTURE_COORD_ARRAY_TYPE()
{
	return GL_TEXTURE_COORD_ARRAY_TYPE;
}

static uint32_t get_GL_TEXTURE_COORD_ARRAY_STRIDE()
{
	return GL_TEXTURE_COORD_ARRAY_STRIDE;
}

static uint32_t get_GL_VERTEX_ARRAY_POINTER()
{
	return GL_VERTEX_ARRAY_POINTER;
}

static uint32_t get_GL_NORMAL_ARRAY_POINTER()
{
	return GL_NORMAL_ARRAY_POINTER;
}

static uint32_t get_GL_COLOR_ARRAY_POINTER()
{
	return GL_COLOR_ARRAY_POINTER;
}

static uint32_t get_GL_TEXTURE_COORD_ARRAY_POINTER()
{
	return GL_TEXTURE_COORD_ARRAY_POINTER;
}

static uint32_t get_GL_BLEND_DST_RGB()
{
	return GL_BLEND_DST_RGB;
}

static uint32_t get_GL_BLEND_SRC_RGB()
{
	return GL_BLEND_SRC_RGB;
}

static uint32_t get_GL_BLEND_DST_ALPHA()
{
	return GL_BLEND_DST_ALPHA;
}

static uint32_t get_GL_BLEND_SRC_ALPHA()
{
	return GL_BLEND_SRC_ALPHA;
}

static uint32_t get_GL_COLOR_TABLE()
{
	return GL_COLOR_TABLE;
}

static uint32_t get_GL_BGR()
{
	return GL_BGR;
}

static uint32_t get_GL_BGRA()
{
	return GL_BGRA;
}

static uint32_t get_GL_COLOR_INDEX8_EXT()
{
	return GL_COLOR_INDEX8_EXT;
}

static uint32_t get_GL_MAX_ELEMENTS_VERTICES()
{
	return GL_MAX_ELEMENTS_VERTICES;
}

static uint32_t get_GL_MAX_ELEMENTS_INDICES()
{
	return GL_MAX_ELEMENTS_INDICES;
}

static uint32_t get_GL_PHONG_WIN()
{
	return GL_PHONG_WIN;
}

static uint32_t get_GL_CLAMP_TO_EDGE()
{
	return GL_CLAMP_TO_EDGE;
}

static uint32_t get_GL_DEPTH_COMPONENT16()
{
	return GL_DEPTH_COMPONENT16;
}

static uint32_t get_GL_DEPTH_COMPONENT24()
{
	return GL_DEPTH_COMPONENT24;
}

static uint32_t get_GL_DEPTH_COMPONENT32()
{
	return GL_DEPTH_COMPONENT32;
}

static uint32_t get_GL_DEPTH_STENCIL_ATTACHMENT()
{
	return GL_DEPTH_STENCIL_ATTACHMENT;
}

static uint32_t get_GL_MAJOR_VERSION()
{
	return GL_MAJOR_VERSION;
}

static uint32_t get_GL_MINOR_VERSION()
{
	return GL_MINOR_VERSION;
}

static uint32_t get_GL_NUM_EXTENSIONS()
{
	return GL_NUM_EXTENSIONS;
}

static uint32_t get_GL_RG()
{
	return GL_RG;
}

static uint32_t get_GL_UNSIGNED_SHORT_5_6_5()
{
	return GL_UNSIGNED_SHORT_5_6_5;
}

static uint32_t get_GL_UNSIGNED_SHORT_1_5_5_5_REV()
{
	return GL_UNSIGNED_SHORT_1_5_5_5_REV;
}

static uint32_t get_GL_UNSIGNED_INT_8_8_8_8_REV()
{
	return GL_UNSIGNED_INT_8_8_8_8_REV;
}

static uint32_t get_GL_MIRRORED_REPEAT()
{
	return GL_MIRRORED_REPEAT;
}

static uint32_t get_GL_COMPRESSED_RGB_S3TC_DXT1_EXT()
{
	return GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
}

static uint32_t get_GL_COMPRESSED_RGBA_S3TC_DXT1_EXT()
{
	return GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
}

static uint32_t get_GL_COMPRESSED_RGBA_S3TC_DXT3_EXT()
{
	return GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
}

static uint32_t get_GL_COMPRESSED_RGBA_S3TC_DXT5_EXT()
{
	return GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
}

static uint32_t get_GL_TEXTURE0()
{
	return GL_TEXTURE0;
}

static uint32_t get_GL_TEXTURE1()
{
	return GL_TEXTURE1;
}

static uint32_t get_GL_TEXTURE2()
{
	return GL_TEXTURE2;
}

static uint32_t get_GL_TEXTURE3()
{
	return GL_TEXTURE3;
}

static uint32_t get_GL_TEXTURE4()
{
	return GL_TEXTURE4;
}

static uint32_t get_GL_TEXTURE5()
{
	return GL_TEXTURE5;
}

static uint32_t get_GL_TEXTURE6()
{
	return GL_TEXTURE6;
}

static uint32_t get_GL_TEXTURE7()
{
	return GL_TEXTURE7;
}

static uint32_t get_GL_TEXTURE8()
{
	return GL_TEXTURE8;
}

static uint32_t get_GL_TEXTURE9()
{
	return GL_TEXTURE9;
}

static uint32_t get_GL_TEXTURE10()
{
	return GL_TEXTURE10;
}

static uint32_t get_GL_TEXTURE11()
{
	return GL_TEXTURE11;
}

static uint32_t get_GL_TEXTURE12()
{
	return GL_TEXTURE12;
}

static uint32_t get_GL_TEXTURE13()
{
	return GL_TEXTURE13;
}

static uint32_t get_GL_TEXTURE14()
{
	return GL_TEXTURE14;
}

static uint32_t get_GL_TEXTURE15()
{
	return GL_TEXTURE15;
}

static uint32_t get_GL_ACTIVE_TEXTURE()
{
	return GL_ACTIVE_TEXTURE;
}

static uint32_t get_GL_CLIENT_ACTIVE_TEXTURE()
{
	return GL_CLIENT_ACTIVE_TEXTURE;
}

static uint32_t get_GL_MAX_TEXTURE_UNITS()
{
	return GL_MAX_TEXTURE_UNITS;
}

static uint32_t get_GL_SUBTRACT()
{
	return GL_SUBTRACT;
}

static uint32_t get_GL_MAX_RENDERBUFFER_SIZE()
{
	return GL_MAX_RENDERBUFFER_SIZE;
}

static uint32_t get_GL_TEXTURE_COMPRESSION_HINT()
{
	return GL_TEXTURE_COMPRESSION_HINT;
}

static uint32_t get_GL_TEXTURE_MAX_ANISOTROPY_EXT()
{
	return GL_TEXTURE_MAX_ANISOTROPY_EXT;
}

static uint32_t get_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT()
{
	return GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;
}

static uint32_t get_GL_TEXTURE_LOD_BIAS()
{
	return GL_TEXTURE_LOD_BIAS;
}

static uint32_t get_GL_INCR_WRAP()
{
	return GL_INCR_WRAP;
}

static uint32_t get_GL_DECR_WRAP()
{
	return GL_DECR_WRAP;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP()
{
	return GL_TEXTURE_CUBE_MAP;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_POSITIVE_X()
{
	return GL_TEXTURE_CUBE_MAP_POSITIVE_X;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
{
	return GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
{
	return GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
{
	return GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
{
	return GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
}

static uint32_t get_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
{
	return GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
}

static uint32_t get_GL_MAX_CUBE_MAP_TEXTURE_SIZE()
{
	return GL_MAX_CUBE_MAP_TEXTURE_SIZE;
}

static uint32_t get_GL_COMBINE()
{
	return GL_COMBINE;
}

static uint32_t get_GL_COMBINE_RGB()
{
	return GL_COMBINE_RGB;
}

static uint32_t get_GL_COMBINE_ALPHA()
{
	return GL_COMBINE_ALPHA;
}

static uint32_t get_GL_RGB_SCALE()
{
	return GL_RGB_SCALE;
}

static uint32_t get_GL_ADD_SIGNED()
{
	return GL_ADD_SIGNED;
}

static uint32_t get_GL_INTERPOLATE()
{
	return GL_INTERPOLATE;
}

static uint32_t get_GL_CONSTANT()
{
	return GL_CONSTANT;
}

static uint32_t get_GL_PRIMARY_COLOR()
{
	return GL_PRIMARY_COLOR;
}

static uint32_t get_GL_PREVIOUS()
{
	return GL_PREVIOUS;
}

static uint32_t get_GL_SRC0_RGB()
{
	return GL_SRC0_RGB;
}

static uint32_t get_GL_SRC1_RGB()
{
	return GL_SRC1_RGB;
}

static uint32_t get_GL_SRC2_RGB()
{
	return GL_SRC2_RGB;
}

static uint32_t get_GL_SRC0_ALPHA()
{
	return GL_SRC0_ALPHA;
}

static uint32_t get_GL_SRC1_ALPHA()
{
	return GL_SRC1_ALPHA;
}

static uint32_t get_GL_SRC2_ALPHA()
{
	return GL_SRC2_ALPHA;
}

static uint32_t get_GL_OPERAND0_RGB()
{
	return GL_OPERAND0_RGB;
}

static uint32_t get_GL_OPERAND1_RGB()
{
	return GL_OPERAND1_RGB;
}

static uint32_t get_GL_OPERAND2_RGB()
{
	return GL_OPERAND2_RGB;
}

static uint32_t get_GL_OPERAND0_ALPHA()
{
	return GL_OPERAND0_ALPHA;
}

static uint32_t get_GL_OPERAND1_ALPHA()
{
	return GL_OPERAND1_ALPHA;
}

static uint32_t get_GL_OPERAND2_ALPHA()
{
	return GL_OPERAND2_ALPHA;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_ENABLED()
{
	return GL_VERTEX_ATTRIB_ARRAY_ENABLED;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_SIZE()
{
	return GL_VERTEX_ATTRIB_ARRAY_SIZE;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_STRIDE()
{
	return GL_VERTEX_ATTRIB_ARRAY_STRIDE;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_TYPE()
{
	return GL_VERTEX_ATTRIB_ARRAY_TYPE;
}

static uint32_t get_GL_CURRENT_VERTEX_ATTRIB()
{
	return GL_CURRENT_VERTEX_ATTRIB;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_POINTER()
{
	return GL_VERTEX_ATTRIB_ARRAY_POINTER;
}

static uint32_t get_GL_PROGRAM_ERROR_POSITION_ARB()
{
	return GL_PROGRAM_ERROR_POSITION_ARB;
}

static uint32_t get_GL_NUM_COMPRESSED_TEXTURE_FORMATS()
{
	return GL_NUM_COMPRESSED_TEXTURE_FORMATS;
}

static uint32_t get_GL_COMPRESSED_TEXTURE_FORMATS()
{
	return GL_COMPRESSED_TEXTURE_FORMATS;
}

static uint32_t get_GL_PROGRAM_BINARY_LENGTH()
{
	return GL_PROGRAM_BINARY_LENGTH;
}

static uint32_t get_GL_MIRROR_CLAMP_EXT()
{
	return GL_MIRROR_CLAMP_EXT;
}

static uint32_t get_GL_BUFFER_SIZE()
{
	return GL_BUFFER_SIZE;
}

static uint32_t get_GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD()
{
	return GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD;
}

static uint32_t get_GL_RGBA16F()
{
	return GL_RGBA16F;
}

static uint32_t get_GL_BLEND_EQUATION_ALPHA()
{
	return GL_BLEND_EQUATION_ALPHA;
}

static uint32_t get_GL_MAX_VERTEX_ATTRIBS()
{
	return GL_MAX_VERTEX_ATTRIBS;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED()
{
	return GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
}

static uint32_t get_GL_MAX_TEXTURE_COORDS()
{
	return GL_MAX_TEXTURE_COORDS;
}

static uint32_t get_GL_MAX_TEXTURE_IMAGE_UNITS()
{
	return GL_MAX_TEXTURE_IMAGE_UNITS;
}

static uint32_t get_GL_ARRAY_BUFFER()
{
	return GL_ARRAY_BUFFER;
}

static uint32_t get_GL_ELEMENT_ARRAY_BUFFER()
{
	return GL_ELEMENT_ARRAY_BUFFER;
}

static uint32_t get_GL_ARRAY_BUFFER_BINDING()
{
	return GL_ARRAY_BUFFER_BINDING;
}

static uint32_t get_GL_ELEMENT_ARRAY_BUFFER_BINDING()
{
	return GL_ELEMENT_ARRAY_BUFFER_BINDING;
}

static uint32_t get_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING()
{
	return GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
}

static uint32_t get_GL_READ_ONLY()
{
	return GL_READ_ONLY;
}

static uint32_t get_GL_WRITE_ONLY()
{
	return GL_WRITE_ONLY;
}

static uint32_t get_GL_READ_WRITE()
{
	return GL_READ_WRITE;
}

static uint32_t get_GL_STREAM_DRAW()
{
	return GL_STREAM_DRAW;
}

static uint32_t get_GL_STREAM_READ()
{
	return GL_STREAM_READ;
}

static uint32_t get_GL_STREAM_COPY()
{
	return GL_STREAM_COPY;
}

static uint32_t get_GL_STATIC_DRAW()
{
	return GL_STATIC_DRAW;
}

static uint32_t get_GL_STATIC_READ()
{
	return GL_STATIC_READ;
}

static uint32_t get_GL_STATIC_COPY()
{
	return GL_STATIC_COPY;
}

static uint32_t get_GL_DYNAMIC_DRAW()
{
	return GL_DYNAMIC_DRAW;
}

static uint32_t get_GL_DYNAMIC_READ()
{
	return GL_DYNAMIC_READ;
}

static uint32_t get_GL_DYNAMIC_COPY()
{
	return GL_DYNAMIC_COPY;
}

static uint32_t get_GL_DEPTH24_STENCIL8()
{
	return GL_DEPTH24_STENCIL8;
}

static uint32_t get_GL_FRAGMENT_SHADER()
{
	return GL_FRAGMENT_SHADER;
}

static uint32_t get_GL_VERTEX_SHADER()
{
	return GL_VERTEX_SHADER;
}

static uint32_t get_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS()
{
	return GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
}

static uint32_t get_GL_SHADER_TYPE()
{
	return GL_SHADER_TYPE;
}

static uint32_t get_GL_FLOAT_VEC2()
{
	return GL_FLOAT_VEC2;
}

static uint32_t get_GL_FLOAT_VEC3()
{
	return GL_FLOAT_VEC3;
}

static uint32_t get_GL_FLOAT_VEC4()
{
	return GL_FLOAT_VEC4;
}

static uint32_t get_GL_INT_VEC2()
{
	return GL_INT_VEC2;
}

static uint32_t get_GL_INT_VEC3()
{
	return GL_INT_VEC3;
}

static uint32_t get_GL_INT_VEC4()
{
	return GL_INT_VEC4;
}

static uint32_t get_GL_FLOAT_MAT2()
{
	return GL_FLOAT_MAT2;
}

static uint32_t get_GL_FLOAT_MAT3()
{
	return GL_FLOAT_MAT3;
}

static uint32_t get_GL_FLOAT_MAT4()
{
	return GL_FLOAT_MAT4;
}

static uint32_t get_GL_DELETE_STATUS()
{
	return GL_DELETE_STATUS;
}

static uint32_t get_GL_COMPILE_STATUS()
{
	return GL_COMPILE_STATUS;
}

static uint32_t get_GL_LINK_STATUS()
{
	return GL_LINK_STATUS;
}

static uint32_t get_GL_INFO_LOG_LENGTH()
{
	return GL_INFO_LOG_LENGTH;
}

static uint32_t get_GL_ATTACHED_SHADERS()
{
	return GL_ATTACHED_SHADERS;
}

static uint32_t get_GL_ACTIVE_UNIFORMS()
{
	return GL_ACTIVE_UNIFORMS;
}

static uint32_t get_GL_ACTIVE_UNIFORM_MAX_LENGTH()
{
	return GL_ACTIVE_UNIFORM_MAX_LENGTH;
}

static uint32_t get_GL_SHADER_SOURCE_LENGTH()
{
	return GL_SHADER_SOURCE_LENGTH;
}

static uint32_t get_GL_ACTIVE_ATTRIBUTES()
{
	return GL_ACTIVE_ATTRIBUTES;
}

static uint32_t get_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH()
{
	return GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
}

static uint32_t get_GL_SHADING_LANGUAGE_VERSION()
{
	return GL_SHADING_LANGUAGE_VERSION;
}

static uint32_t get_GL_CURRENT_PROGRAM()
{
	return GL_CURRENT_PROGRAM;
}

static uint32_t get_GL_PALETTE4_RGB8_OES()
{
	return GL_PALETTE4_RGB8_OES;
}

static uint32_t get_GL_PALETTE4_RGBA8_OES()
{
	return GL_PALETTE4_RGBA8_OES;
}

static uint32_t get_GL_PALETTE4_R5_G6_B5_OES()
{
	return GL_PALETTE4_R5_G6_B5_OES;
}

static uint32_t get_GL_PALETTE4_RGBA4_OES()
{
	return GL_PALETTE4_RGBA4_OES;
}

static uint32_t get_GL_PALETTE4_RGB5_A1_OES()
{
	return GL_PALETTE4_RGB5_A1_OES;
}

static uint32_t get_GL_PALETTE8_RGB8_OES()
{
	return GL_PALETTE8_RGB8_OES;
}

static uint32_t get_GL_PALETTE8_RGBA8_OES()
{
	return GL_PALETTE8_RGBA8_OES;
}

static uint32_t get_GL_PALETTE8_R5_G6_B5_OES()
{
	return GL_PALETTE8_R5_G6_B5_OES;
}

static uint32_t get_GL_PALETTE8_RGBA4_OES()
{
	return GL_PALETTE8_RGBA4_OES;
}

static uint32_t get_GL_PALETTE8_RGB5_A1_OES()
{
	return GL_PALETTE8_RGB5_A1_OES;
}

static uint32_t get_GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG()
{
	return GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
}

static uint32_t get_GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG()
{
	return GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
}

static uint32_t get_GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG()
{
	return GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
}

static uint32_t get_GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG()
{
	return GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
}

static uint32_t get_GL_SRGB()
{
	return GL_SRGB;
}

static uint32_t get_GL_SRGB8()
{
	return GL_SRGB8;
}

static uint32_t get_GL_SRGB_ALPHA()
{
	return GL_SRGB_ALPHA;
}

static uint32_t get_GL_SRGB8_ALPHA8()
{
	return GL_SRGB8_ALPHA8;
}

static uint32_t get_GL_SLUMINANCE_ALPHA()
{
	return GL_SLUMINANCE_ALPHA;
}

static uint32_t get_GL_SLUMINANCE8_ALPHA8()
{
	return GL_SLUMINANCE8_ALPHA8;
}

static uint32_t get_GL_SLUMINANCE()
{
	return GL_SLUMINANCE;
}

static uint32_t get_GL_SLUMINANCE8()
{
	return GL_SLUMINANCE8;
}

static uint32_t get_GL_COMPRESSED_SRGB()
{
	return GL_COMPRESSED_SRGB;
}

static uint32_t get_GL_COMPRESSED_SRGB_ALPHA()
{
	return GL_COMPRESSED_SRGB_ALPHA;
}

static uint32_t get_GL_COMPRESSED_SRGB_S3TC_DXT1()
{
	return GL_COMPRESSED_SRGB_S3TC_DXT1;
}

static uint32_t get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1()
{
	return GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1;
}

static uint32_t get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3()
{
	return GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3;
}

static uint32_t get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5()
{
	return GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5;
}

static uint32_t get_GL_ATC_RGB_AMD()
{
	return GL_ATC_RGB_AMD;
}

static uint32_t get_GL_ATC_RGBA_EXPLICIT_ALPHA_AMD()
{
	return GL_ATC_RGBA_EXPLICIT_ALPHA_AMD;
}

static uint32_t get_GL_FRAMEBUFFER_BINDING()
{
	return GL_FRAMEBUFFER_BINDING;
}

static uint32_t get_GL_RENDERBUFFER_BINDING()
{
	return GL_RENDERBUFFER_BINDING;
}

static uint32_t get_GL_READ_FRAMEBUFFER()
{
	return GL_READ_FRAMEBUFFER;
}

static uint32_t get_GL_DRAW_FRAMEBUFFER()
{
	return GL_DRAW_FRAMEBUFFER;
}

static uint32_t get_GL_READ_FRAMEBUFFER_BINDING()
{
	return GL_READ_FRAMEBUFFER_BINDING;
}

static uint32_t get_GL_COLOR_ATTACHMENT0()
{
	return GL_COLOR_ATTACHMENT0;
}

static uint32_t get_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE()
{
	return GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
}

static uint32_t get_GL_DEPTH_ATTACHMENT()
{
	return GL_DEPTH_ATTACHMENT;
}

static uint32_t get_GL_STENCIL_ATTACHMENT()
{
	return GL_STENCIL_ATTACHMENT;
}

static uint32_t get_GL_DEPTH_COMPONENT32F()
{
	return GL_DEPTH_COMPONENT32F;
}

static uint32_t get_GL_DEPTH32F_STENCIL8()
{
	return GL_DEPTH32F_STENCIL8;
}

static uint32_t get_GL_FRAMEBUFFER_COMPLETE()
{
	return GL_FRAMEBUFFER_COMPLETE;
}

static uint32_t get_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT()
{
	return GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
}

static uint32_t get_GL_FRAMEBUFFER()
{
	return GL_FRAMEBUFFER;
}

static uint32_t get_GL_RENDERBUFFER()
{
	return GL_RENDERBUFFER;
}

static uint32_t get_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS()
{
	return GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
}

static uint32_t get_GL_HALF_FLOAT_OES()
{
	return GL_HALF_FLOAT_OES;
}

static uint32_t get_GL_ETC1_RGB8_OES()
{
	return GL_ETC1_RGB8_OES;
}

static uint32_t get_GL_SHADER_BINARY_FORMATS()
{
	return GL_SHADER_BINARY_FORMATS;
}

static uint32_t get_GL_NUM_SHADER_BINARY_FORMATS()
{
	return GL_NUM_SHADER_BINARY_FORMATS;
}

static uint32_t get_GL_SHADER_COMPILER()
{
	return GL_SHADER_COMPILER;
}

static uint32_t get_GL_MAX_VERTEX_UNIFORM_VECTORS()
{
	return GL_MAX_VERTEX_UNIFORM_VECTORS;
}

static uint32_t get_GL_MAX_VARYING_VECTORS()
{
	return GL_MAX_VARYING_VECTORS;
}

static uint32_t get_GL_MAX_FRAGMENT_UNIFORM_VECTORS()
{
	return GL_MAX_FRAGMENT_UNIFORM_VECTORS;
}

static uint32_t get_GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX()
{
	return GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX;
}

static uint32_t get_GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX()
{
	return GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX;
}

static uint32_t get_GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX()
{
	return GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX;
}

static uint32_t get_GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG()
{
	return GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG;
}

static uint32_t get_GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG()
{
	return GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG;
}

static uint32_t get_GL_COMPRESSED_RGBA8_ETC2_EAC()
{
	return GL_COMPRESSED_RGBA8_ETC2_EAC;
}

static uint32_t get_GL_MAX_TEXTURE_LOD_BIAS()
{
	return GL_MAX_TEXTURE_LOD_BIAS;
}

static uint32_t get_GL_POINT_BIT()
{
	return GL_POINT_BIT;
}

static uint32_t get_GL_LINE_BIT()
{
	return GL_LINE_BIT;
}

static uint32_t get_GL_POLYGON_BIT()
{
	return GL_POLYGON_BIT;
}

static uint32_t get_GL_LIGHTING_BIT()
{
	return GL_LIGHTING_BIT;
}

static uint32_t get_GL_FOG_BIT()
{
	return GL_FOG_BIT;
}

static uint32_t get_GL_DEPTH_BUFFER_BIT()
{
	return GL_DEPTH_BUFFER_BIT;
}

static uint32_t get_GL_STENCIL_BUFFER_BIT()
{
	return GL_STENCIL_BUFFER_BIT;
}

static uint32_t get_GL_VIEWPORT_BIT()
{
	return GL_VIEWPORT_BIT;
}

static uint32_t get_GL_TRANSFORM_BIT()
{
	return GL_TRANSFORM_BIT;
}

static uint32_t get_GL_ENABLE_BIT()
{
	return GL_ENABLE_BIT;
}

static uint32_t get_GL_COLOR_BUFFER_BIT()
{
	return GL_COLOR_BUFFER_BIT;
}

static uint32_t get_GL_HINT_BIT()
{
	return GL_HINT_BIT;
}

static uint32_t get_GL_SCISSOR_BIT()
{
	return GL_SCISSOR_BIT;
}

static uint32_t get_GL_ALL_ATTRIB_BITS()
{
	return GL_ALL_ATTRIB_BITS;
}

static uint32_t get_GL_MAP_READ_BIT()
{
	return GL_MAP_READ_BIT;
}

static uint32_t get_GL_MAP_WRITE_BIT()
{
	return GL_MAP_WRITE_BIT;
}

static uint32_t get_GL_MAP_INVALIDATE_RANGE_BIT()
{
	return GL_MAP_INVALIDATE_RANGE_BIT;
}

static uint32_t get_GL_MAP_INVALIDATE_BUFFER_BIT()
{
	return GL_MAP_INVALIDATE_BUFFER_BIT;
}

static uint32_t get_GL_MAP_FLUSH_EXPLICIT_BIT()
{
	return GL_MAP_FLUSH_EXPLICIT_BIT;
}

static uint32_t get_GL_MAP_UNSYNCHRONIZED_BIT()
{
	return GL_MAP_UNSYNCHRONIZED_BIT;
}

static void _mono_wrapper_vglSwapBuffers(MonoBoolean has_common_dialog)
{
	vglSwapBuffers((uint8_t)has_common_dialog);
}

void VMLVitaGLRegister()
{
	mono_aot_register_module(mono_aot_module_VitaSdk_Libs_VitaGL_info);

	//VitaGL setup
	mono_add_internal_call("VitaSdk.Libs.VitaGL.VGL::Init", vglInit);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.VGL::InitExtended", vglInitExtended);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.VGL::End", vglEnd);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.VGL::WaitVblankStart", vglWaitVblankStart);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.VGL::SwapBuffers", _mono_wrapper_vglSwapBuffers);

	//OpenGL

	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ActiveTexture", glActiveTexture);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::AlphaFunc", glAlphaFunc);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::AlphaFuncx", glAlphaFuncx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::AttachShader", glAttachShader);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Begin", glBegin);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_BindAttribLocation", glBindAttribLocation);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BindBuffer", glBindBuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BindFramebuffer", glBindFramebuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BindRenderbuffer", glBindRenderbuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BindTexture", glBindTexture);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BindVertexArray", glBindVertexArray);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BlendEquation", glBlendEquation);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BlendEquationSeparate", glBlendEquationSeparate);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BlendFunc", glBlendFunc);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::BlendFuncSeparate", glBlendFuncSeparate);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_BufferData", glBufferData);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_BufferSubData", glBufferSubData);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CallList", glCallList);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CheckFramebufferStatus", glCheckFramebufferStatus);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Clear", glClear);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ClearColor", glClearColor);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClearColorx", glClearColorx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ClearDepth", glClearDepth);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClearDepthf", glClearDepthf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClearDepthx", glClearDepthx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ClearStencil", glClearStencil);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ClientActiveTexture", glClientActiveTexture);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClipPlane", glClipPlane);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClipPlanef", glClipPlanef);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ClipPlanex", glClipPlanex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color3f", glColor3f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color3fv", glColor3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color3ub", glColor3ub);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color3ubv", glColor3ubv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color4f", glColor4f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color4fv", glColor4fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color4ub", glColor4ub);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color4ubv", glColor4ubv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Color4x", glColor4x);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ColorMask", glColorMask);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ColorMaterial", glColorMaterial);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ColorPointer", glColorPointer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ColorTable", glColorTable);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CompileShader", glCompileShader);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_CompressedTexImage2D", glCompressedTexImage2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CopyTexImage2D", glCopyTexImage2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CopyTexSubImage2D", glCopyTexSubImage2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CreateProgram", glCreateProgram);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CreateShader", glCreateShader);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::CullFace", glCullFace);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DeleteBuffers", glDeleteBuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DeleteFramebuffers", glDeleteFramebuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DeleteLists", glDeleteLists);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DeleteProgram", glDeleteProgram);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DeleteRenderbuffers", glDeleteRenderbuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DeleteShader", glDeleteShader);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DeleteTextures", glDeleteTextures);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DeleteVertexArrays", glDeleteVertexArrays);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DepthFunc", glDepthFunc);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DepthMask", glDepthMask);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DepthRange", glDepthRange);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DepthRangef", glDepthRangef);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DepthRangex", glDepthRangex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Disable", glDisable);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DisableClientState", glDisableClientState);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DisableVertexAttribArray", glDisableVertexAttribArray);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DrawArrays", glDrawArrays);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::DrawArraysInstanced", glDrawArraysInstanced);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DrawElements", glDrawElements);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DrawElementsBaseVertex", glDrawElementsBaseVertex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DrawElementsInstanced", glDrawElementsInstanced);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DrawRangeElements", glDrawRangeElements);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_DrawRangeElementsBaseVertex", glDrawRangeElementsBaseVertex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Enable", glEnable);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::EnableClientState", glEnableClientState);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::EnableVertexAttribArray", glEnableVertexAttribArray);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::End", glEnd);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::EndList", glEndList);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Finish", glFinish);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Flush", glFlush);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::FlushMappedBufferRange", glFlushMappedBufferRange);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Fogf", glFogf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Fogfv", glFogfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Fogi", glFogi);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Fogx", glFogx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Fogxv", glFogxv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::FramebufferRenderbuffer", glFramebufferRenderbuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::FramebufferTexture", glFramebufferTexture);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::FramebufferTexture2D", glFramebufferTexture2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::FrontFace", glFrontFace);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Frustum", glFrustum);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Frustumf", glFrustumf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Frustumx", glFrustumx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GenBuffers", glGenBuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GenerateMipmap", glGenerateMipmap);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GenFramebuffers", glGenFramebuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GenLists", glGenLists);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GenRenderbuffers", glGenRenderbuffers);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GenTextures", glGenTextures);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GenVertexArrays", glGenVertexArrays);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetActiveAttrib", glGetActiveAttrib);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetActiveUniform", glGetActiveUniform);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetAttachedShaders", glGetAttachedShaders);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetAttribLocation", glGetAttribLocation);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetBooleanv", glGetBooleanv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetBufferParameteriv", glGetBufferParameteriv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetDoublev", glGetDoublev);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetError", glGetError);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetFloatv", glGetFloatv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetFramebufferAttachmentParameteriv", glGetFramebufferAttachmentParameteriv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetIntegerv", glGetIntegerv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetPointerv", glGetPointerv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetProgramBinary", glGetProgramBinary);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetProgramInfoLog", glGetProgramInfoLog);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetProgramiv", glGetProgramiv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetShaderInfoLog", glGetShaderInfoLog);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetShaderiv", glGetShaderiv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetShaderSource", glGetShaderSource);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetString", glGetString);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetStringi", glGetStringi);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetTexEnviv", glGetTexEnviv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetUniformLocation", glGetUniformLocation);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetVertexAttribfv", glGetVertexAttribfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::GetVertexAttribiv", glGetVertexAttribiv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_GetVertexAttribPointerv", glGetVertexAttribPointerv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Hint", glHint);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::InterleavedArrays", glInterleavedArrays);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::IsEnabled", glIsEnabled);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::IsFramebuffer", glIsFramebuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::IsProgram", glIsProgram);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::IsRenderbuffer", glIsRenderbuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::IsTexture", glIsTexture);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Lightfv", glLightfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LightModelfv", glLightModelfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LightModelxv", glLightModelxv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Lightxv", glLightxv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::LineWidth", glLineWidth);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::LineWidthx", glLineWidthx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::LinkProgram", glLinkProgram);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::LoadIdentity", glLoadIdentity);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LoadMatrixf", glLoadMatrixf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LoadMatrixx", glLoadMatrixx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LoadTransposeMatrixf", glLoadTransposeMatrixf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_LoadTransposeMatrixx", glLoadTransposeMatrixx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::MapBuffer", glMapBuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::MapBufferRange", glMapBufferRange);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Materialfv", glMaterialfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Materialxv", glMaterialxv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::MatrixMode", glMatrixMode);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultiTexCoord2f", glMultiTexCoord2f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultiTexCoord2fv", glMultiTexCoord2fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultiTexCoord2i", glMultiTexCoord2i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultMatrixf", glMultMatrixf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultMatrixx", glMultMatrixx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultTransposeMatrixf", glMultTransposeMatrixf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_MultTransposeMatrixx", glMultTransposeMatrixx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::NewList", glNewList);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Normal3f", glNormal3f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Normal3fv", glNormal3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Normal3s", glNormal3s);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Normal3x", glNormal3x);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::NormalPointer", glNormalPointer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Ortho", glOrtho);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Orthof", glOrthof);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Orthox", glOrthox);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PixelStorei", glPixelStorei);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PointSize", glPointSize);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PointSizex", glPointSizex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PolygonMode", glPolygonMode);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PolygonOffset", glPolygonOffset);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PolygonOffsetx", glPolygonOffsetx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PopAttrib", glPopAttrib);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PopMatrix", glPopMatrix);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ProgramBinary", glProgramBinary);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PushAttrib", glPushAttrib);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::PushMatrix", glPushMatrix);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ReadPixels", glReadPixels);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Rectf", glRectf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Recti", glRecti);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ReleaseShaderCompiler", glReleaseShaderCompiler);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::RenderbufferStorage", glRenderbufferStorage);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Rotated", glRotated);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Rotatef", glRotatef);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Rotatex", glRotatex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Scaled", glScaled);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Scalef", glScalef);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Scalex", glScalex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Scissor", glScissor);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::ShadeModel", glShadeModel);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ShaderBinary", glShaderBinary);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_ShaderSource", glShaderSource);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilFunc", glStencilFunc);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilFuncSeparate", glStencilFuncSeparate);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilMask", glStencilMask);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilMaskSeparate", glStencilMaskSeparate);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilOp", glStencilOp);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::StencilOpSeparate", glStencilOpSeparate);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexCoord2f", glTexCoord2f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_TexCoord2fv", glTexCoord2fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexCoord2i", glTexCoord2i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexCoord2s", glTexCoord2s);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexCoordPointer", glTexCoordPointer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexEnvf", glTexEnvf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_TexEnvfv", glTexEnvfv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexEnvi", glTexEnvi);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexEnvx", glTexEnvx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_TexEnvxv", glTexEnvxv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexImage2D", glTexImage2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexParameterf", glTexParameterf);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexParameteri", glTexParameteri);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_TexParameteriv", glTexParameteriv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::TexParameterx", glTexParameterx);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_TexSubImage2D", glTexSubImage2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Translated", glTranslated);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Translatef", glTranslatef);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Translatex", glTranslatex);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform1f", glUniform1f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform1fv", glUniform1fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform1i", glUniform1i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform1iv", glUniform1iv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform2f", glUniform2f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform2fv", glUniform2fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform2i", glUniform2i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform2iv", glUniform2iv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform3f", glUniform3f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform3fv", glUniform3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform3i", glUniform3i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform3iv", glUniform3iv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform4f", glUniform4f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform4fv", glUniform4fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Uniform4i", glUniform4i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Uniform4iv", glUniform4iv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_UniformMatrix2fv", glUniformMatrix2fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_UniformMatrix3fv", glUniformMatrix3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_UniformMatrix4fv", glUniformMatrix4fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::UnmapBuffer", glUnmapBuffer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::UseProgram", glUseProgram);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Vertex2f", glVertex2f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Vertex2i", glVertex2i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Vertex3f", glVertex3f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Vertex3i", glVertex3i);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_Vertex3fv", glVertex3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::VertexAttrib1f", glVertexAttrib1f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_VertexAttrib1fv", glVertexAttrib1fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::VertexAttrib2f", glVertexAttrib2f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_VertexAttrib2fv", glVertexAttrib2fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::VertexAttrib3f", glVertexAttrib3f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_VertexAttrib3fv", glVertexAttrib3fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::VertexAttrib4f", glVertexAttrib4f);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_VertexAttrib4fv", glVertexAttrib4fv);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::VertexAttribPointer", glVertexAttribPointer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::INTERNAL_VertexPointer", glVertexPointer);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::Viewport", glViewport);

	// Constant Bridges
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FALSE", get_GL_FALSE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TRUE", get_GL_TRUE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NO_ERROR", get_GL_NO_ERROR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ZERO", get_GL_ZERO);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ONE", get_GL_ONE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NONE", get_GL_NONE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POINTS", get_GL_POINTS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINES", get_GL_LINES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINE_LOOP", get_GL_LINE_LOOP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINE_STRIP", get_GL_LINE_STRIP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TRIANGLES", get_GL_TRIANGLES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TRIANGLE_STRIP", get_GL_TRIANGLE_STRIP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TRIANGLE_FAN", get_GL_TRIANGLE_FAN);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_QUADS", get_GL_QUADS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ADD", get_GL_ADD);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NEVER", get_GL_NEVER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LESS", get_GL_LESS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_EQUAL", get_GL_EQUAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LEQUAL", get_GL_LEQUAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GREATER", get_GL_GREATER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NOTEQUAL", get_GL_NOTEQUAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GEQUAL", get_GL_GEQUAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ALWAYS", get_GL_ALWAYS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC_COLOR", get_GL_SRC_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ONE_MINUS_SRC_COLOR", get_GL_ONE_MINUS_SRC_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC_ALPHA", get_GL_SRC_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ONE_MINUS_SRC_ALPHA", get_GL_ONE_MINUS_SRC_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DST_ALPHA", get_GL_DST_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ONE_MINUS_DST_ALPHA", get_GL_ONE_MINUS_DST_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DST_COLOR", get_GL_DST_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ONE_MINUS_DST_COLOR", get_GL_ONE_MINUS_DST_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC_ALPHA_SATURATE", get_GL_SRC_ALPHA_SATURATE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRONT", get_GL_FRONT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BACK", get_GL_BACK);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRONT_AND_BACK", get_GL_FRONT_AND_BACK);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INVALID_ENUM", get_GL_INVALID_ENUM);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INVALID_VALUE", get_GL_INVALID_VALUE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INVALID_OPERATION", get_GL_INVALID_OPERATION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STACK_OVERFLOW", get_GL_STACK_OVERFLOW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STACK_UNDERFLOW", get_GL_STACK_UNDERFLOW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OUT_OF_MEMORY", get_GL_OUT_OF_MEMORY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_EXP", get_GL_EXP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_EXP2", get_GL_EXP2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CW", get_GL_CW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CCW", get_GL_CCW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CURRENT_COLOR", get_GL_CURRENT_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_MODE", get_GL_POLYGON_MODE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CULL_FACE", get_GL_CULL_FACE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHTING", get_GL_LIGHTING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT_MODEL_AMBIENT", get_GL_LIGHT_MODEL_AMBIENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_MATERIAL", get_GL_COLOR_MATERIAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG", get_GL_FOG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_DENSITY", get_GL_FOG_DENSITY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_START", get_GL_FOG_START);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_END", get_GL_FOG_END);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_MODE", get_GL_FOG_MODE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_COLOR", get_GL_FOG_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_TEST", get_GL_DEPTH_TEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_WRITEMASK", get_GL_DEPTH_WRITEMASK);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STENCIL_TEST", get_GL_STENCIL_TEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MATRIX_MODE", get_GL_MATRIX_MODE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NORMALIZE", get_GL_NORMALIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VIEWPORT", get_GL_VIEWPORT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MODELVIEW_MATRIX", get_GL_MODELVIEW_MATRIX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PROJECTION_MATRIX", get_GL_PROJECTION_MATRIX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_MATRIX", get_GL_TEXTURE_MATRIX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ALPHA_TEST", get_GL_ALPHA_TEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_DST", get_GL_BLEND_DST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_SRC", get_GL_BLEND_SRC);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND", get_GL_BLEND);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SCISSOR_BOX", get_GL_SCISSOR_BOX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SCISSOR_TEST", get_GL_SCISSOR_TEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNPACK_ROW_LENGTH", get_GL_UNPACK_ROW_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNPACK_ALIGNMENT", get_GL_UNPACK_ALIGNMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PACK_ALIGNMENT", get_GL_PACK_ALIGNMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ALPHA_SCALE", get_GL_ALPHA_SCALE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_LIGHTS", get_GL_MAX_LIGHTS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_CLIP_PLANES", get_GL_MAX_CLIP_PLANES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_SIZE", get_GL_MAX_TEXTURE_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_MODELVIEW_STACK_DEPTH", get_GL_MAX_MODELVIEW_STACK_DEPTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_PROJECTION_STACK_DEPTH", get_GL_MAX_PROJECTION_STACK_DEPTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_STACK_DEPTH", get_GL_MAX_TEXTURE_STACK_DEPTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_VIEWPORT_DIMS", get_GL_MAX_VIEWPORT_DIMS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RED_BITS", get_GL_RED_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GREEN_BITS", get_GL_GREEN_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLUE_BITS", get_GL_BLUE_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_BITS", get_GL_DEPTH_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STENCIL_BITS", get_GL_STENCIL_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_2D", get_GL_TEXTURE_2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DONT_CARE", get_GL_DONT_CARE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FASTEST", get_GL_FASTEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NICEST", get_GL_NICEST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_AMBIENT", get_GL_AMBIENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DIFFUSE", get_GL_DIFFUSE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SPECULAR", get_GL_SPECULAR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POSITION", get_GL_POSITION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CONSTANT_ATTENUATION", get_GL_CONSTANT_ATTENUATION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINEAR_ATTENUATION", get_GL_LINEAR_ATTENUATION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_QUADRATIC_ATTENUATION", get_GL_QUADRATIC_ATTENUATION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPILE", get_GL_COMPILE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPILE_AND_EXECUTE", get_GL_COMPILE_AND_EXECUTE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BYTE", get_GL_BYTE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_BYTE", get_GL_UNSIGNED_BYTE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHORT", get_GL_SHORT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_SHORT", get_GL_UNSIGNED_SHORT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INT", get_GL_INT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_INT", get_GL_UNSIGNED_INT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT", get_GL_FLOAT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_HALF_FLOAT", get_GL_HALF_FLOAT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FIXED", get_GL_FIXED);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INVERT", get_GL_INVERT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_EMISSION", get_GL_EMISSION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_AMBIENT_AND_DIFFUSE", get_GL_AMBIENT_AND_DIFFUSE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MODELVIEW", get_GL_MODELVIEW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PROJECTION", get_GL_PROJECTION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE", get_GL_TEXTURE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_INDEX", get_GL_COLOR_INDEX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_COMPONENT", get_GL_DEPTH_COMPONENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RED", get_GL_RED);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GREEN", get_GL_GREEN);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLUE", get_GL_BLUE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ALPHA", get_GL_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RGB", get_GL_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RGBA", get_GL_RGBA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LUMINANCE", get_GL_LUMINANCE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LUMINANCE_ALPHA", get_GL_LUMINANCE_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POINT", get_GL_POINT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINE", get_GL_LINE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FILL", get_GL_FILL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLAT", get_GL_FLAT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SMOOTH", get_GL_SMOOTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_KEEP", get_GL_KEEP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_REPLACE", get_GL_REPLACE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INCR", get_GL_INCR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DECR", get_GL_DECR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VENDOR", get_GL_VENDOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RENDERER", get_GL_RENDERER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERSION", get_GL_VERSION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_EXTENSIONS", get_GL_EXTENSIONS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MODULATE", get_GL_MODULATE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DECAL", get_GL_DECAL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_ENV_MODE", get_GL_TEXTURE_ENV_MODE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_ENV_COLOR", get_GL_TEXTURE_ENV_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_ENV", get_GL_TEXTURE_ENV);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NEAREST", get_GL_NEAREST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINEAR", get_GL_LINEAR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NEAREST_MIPMAP_NEAREST", get_GL_NEAREST_MIPMAP_NEAREST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINEAR_MIPMAP_NEAREST", get_GL_LINEAR_MIPMAP_NEAREST);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NEAREST_MIPMAP_LINEAR", get_GL_NEAREST_MIPMAP_LINEAR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINEAR_MIPMAP_LINEAR", get_GL_LINEAR_MIPMAP_LINEAR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_MAG_FILTER", get_GL_TEXTURE_MAG_FILTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_MIN_FILTER", get_GL_TEXTURE_MIN_FILTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_WRAP_S", get_GL_TEXTURE_WRAP_S);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_WRAP_T", get_GL_TEXTURE_WRAP_T);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLAMP", get_GL_CLAMP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_REPEAT", get_GL_REPEAT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_OFFSET_UNITS", get_GL_POLYGON_OFFSET_UNITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_OFFSET_POINT", get_GL_POLYGON_OFFSET_POINT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_OFFSET_LINE", get_GL_POLYGON_OFFSET_LINE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_V2F", get_GL_V2F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_V3F", get_GL_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_C4UB_V2F", get_GL_C4UB_V2F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_C4UB_V3F", get_GL_C4UB_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_C3F_V3F", get_GL_C3F_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_T2F_V3F", get_GL_T2F_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_T4F_V4F", get_GL_T4F_V4F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_T2F_C4UB_V3F", get_GL_T2F_C4UB_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_T2F_C3F_V3F", get_GL_T2F_C3F_V3F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE0", get_GL_CLIP_PLANE0);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE1", get_GL_CLIP_PLANE1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE2", get_GL_CLIP_PLANE2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE3", get_GL_CLIP_PLANE3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE4", get_GL_CLIP_PLANE4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE5", get_GL_CLIP_PLANE5);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIP_PLANE6", get_GL_CLIP_PLANE6);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT0", get_GL_LIGHT0);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT1", get_GL_LIGHT1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT2", get_GL_LIGHT2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT3", get_GL_LIGHT3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT4", get_GL_LIGHT4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT5", get_GL_LIGHT5);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT6", get_GL_LIGHT6);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHT7", get_GL_LIGHT7);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ABGR_EXT", get_GL_ABGR_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FUNC_ADD", get_GL_FUNC_ADD);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MIN", get_GL_MIN);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX", get_GL_MAX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_EQUATION", get_GL_BLEND_EQUATION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FUNC_SUBTRACT", get_GL_FUNC_SUBTRACT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FUNC_REVERSE_SUBTRACT", get_GL_FUNC_REVERSE_SUBTRACT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_SHORT_4_4_4_4", get_GL_UNSIGNED_SHORT_4_4_4_4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_SHORT_5_5_5_1", get_GL_UNSIGNED_SHORT_5_5_5_1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_INT_8_8_8_8", get_GL_UNSIGNED_INT_8_8_8_8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_OFFSET_FILL", get_GL_POLYGON_OFFSET_FILL);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_OFFSET_FACTOR", get_GL_POLYGON_OFFSET_FACTOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INTENSITY", get_GL_INTENSITY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_BINDING_2D", get_GL_TEXTURE_BINDING_2D);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ARRAY", get_GL_VERTEX_ARRAY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NORMAL_ARRAY", get_GL_NORMAL_ARRAY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ARRAY", get_GL_COLOR_ARRAY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COORD_ARRAY", get_GL_TEXTURE_COORD_ARRAY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ARRAY_SIZE", get_GL_VERTEX_ARRAY_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ARRAY_TYPE", get_GL_VERTEX_ARRAY_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ARRAY_STRIDE", get_GL_VERTEX_ARRAY_STRIDE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NORMAL_ARRAY_TYPE", get_GL_NORMAL_ARRAY_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NORMAL_ARRAY_STRIDE", get_GL_NORMAL_ARRAY_STRIDE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ARRAY_SIZE", get_GL_COLOR_ARRAY_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ARRAY_TYPE", get_GL_COLOR_ARRAY_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ARRAY_STRIDE", get_GL_COLOR_ARRAY_STRIDE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COORD_ARRAY_SIZE", get_GL_TEXTURE_COORD_ARRAY_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COORD_ARRAY_TYPE", get_GL_TEXTURE_COORD_ARRAY_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COORD_ARRAY_STRIDE", get_GL_TEXTURE_COORD_ARRAY_STRIDE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ARRAY_POINTER", get_GL_VERTEX_ARRAY_POINTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NORMAL_ARRAY_POINTER", get_GL_NORMAL_ARRAY_POINTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ARRAY_POINTER", get_GL_COLOR_ARRAY_POINTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COORD_ARRAY_POINTER", get_GL_TEXTURE_COORD_ARRAY_POINTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_DST_RGB", get_GL_BLEND_DST_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_SRC_RGB", get_GL_BLEND_SRC_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_DST_ALPHA", get_GL_BLEND_DST_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_SRC_ALPHA", get_GL_BLEND_SRC_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_TABLE", get_GL_COLOR_TABLE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BGR", get_GL_BGR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BGRA", get_GL_BGRA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_INDEX8_EXT", get_GL_COLOR_INDEX8_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_ELEMENTS_VERTICES", get_GL_MAX_ELEMENTS_VERTICES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_ELEMENTS_INDICES", get_GL_MAX_ELEMENTS_INDICES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PHONG_WIN", get_GL_PHONG_WIN);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLAMP_TO_EDGE", get_GL_CLAMP_TO_EDGE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_COMPONENT16", get_GL_DEPTH_COMPONENT16);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_COMPONENT24", get_GL_DEPTH_COMPONENT24);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_COMPONENT32", get_GL_DEPTH_COMPONENT32);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_STENCIL_ATTACHMENT", get_GL_DEPTH_STENCIL_ATTACHMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAJOR_VERSION", get_GL_MAJOR_VERSION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MINOR_VERSION", get_GL_MINOR_VERSION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NUM_EXTENSIONS", get_GL_NUM_EXTENSIONS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RG", get_GL_RG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_SHORT_5_6_5", get_GL_UNSIGNED_SHORT_5_6_5);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_SHORT_1_5_5_5_REV", get_GL_UNSIGNED_SHORT_1_5_5_5_REV);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_UNSIGNED_INT_8_8_8_8_REV", get_GL_UNSIGNED_INT_8_8_8_8_REV);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MIRRORED_REPEAT", get_GL_MIRRORED_REPEAT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGB_S3TC_DXT1_EXT", get_GL_COMPRESSED_RGB_S3TC_DXT1_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_S3TC_DXT1_EXT", get_GL_COMPRESSED_RGBA_S3TC_DXT1_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_S3TC_DXT3_EXT", get_GL_COMPRESSED_RGBA_S3TC_DXT3_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_S3TC_DXT5_EXT", get_GL_COMPRESSED_RGBA_S3TC_DXT5_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE0", get_GL_TEXTURE0);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE1", get_GL_TEXTURE1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE2", get_GL_TEXTURE2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE3", get_GL_TEXTURE3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE4", get_GL_TEXTURE4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE5", get_GL_TEXTURE5);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE6", get_GL_TEXTURE6);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE7", get_GL_TEXTURE7);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE8", get_GL_TEXTURE8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE9", get_GL_TEXTURE9);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE10", get_GL_TEXTURE10);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE11", get_GL_TEXTURE11);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE12", get_GL_TEXTURE12);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE13", get_GL_TEXTURE13);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE14", get_GL_TEXTURE14);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE15", get_GL_TEXTURE15);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ACTIVE_TEXTURE", get_GL_ACTIVE_TEXTURE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CLIENT_ACTIVE_TEXTURE", get_GL_CLIENT_ACTIVE_TEXTURE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_UNITS", get_GL_MAX_TEXTURE_UNITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SUBTRACT", get_GL_SUBTRACT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_RENDERBUFFER_SIZE", get_GL_MAX_RENDERBUFFER_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_COMPRESSION_HINT", get_GL_TEXTURE_COMPRESSION_HINT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_MAX_ANISOTROPY_EXT", get_GL_TEXTURE_MAX_ANISOTROPY_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_MAX_ANISOTROPY_EXT", get_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_LOD_BIAS", get_GL_TEXTURE_LOD_BIAS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INCR_WRAP", get_GL_INCR_WRAP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DECR_WRAP", get_GL_DECR_WRAP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP", get_GL_TEXTURE_CUBE_MAP);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_POSITIVE_X", get_GL_TEXTURE_CUBE_MAP_POSITIVE_X);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_NEGATIVE_X", get_GL_TEXTURE_CUBE_MAP_NEGATIVE_X);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_POSITIVE_Y", get_GL_TEXTURE_CUBE_MAP_POSITIVE_Y);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_NEGATIVE_Y", get_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_POSITIVE_Z", get_GL_TEXTURE_CUBE_MAP_POSITIVE_Z);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TEXTURE_CUBE_MAP_NEGATIVE_Z", get_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_CUBE_MAP_TEXTURE_SIZE", get_GL_MAX_CUBE_MAP_TEXTURE_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMBINE", get_GL_COMBINE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMBINE_RGB", get_GL_COMBINE_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMBINE_ALPHA", get_GL_COMBINE_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RGB_SCALE", get_GL_RGB_SCALE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ADD_SIGNED", get_GL_ADD_SIGNED);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INTERPOLATE", get_GL_INTERPOLATE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CONSTANT", get_GL_CONSTANT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PRIMARY_COLOR", get_GL_PRIMARY_COLOR);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PREVIOUS", get_GL_PREVIOUS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC0_RGB", get_GL_SRC0_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC1_RGB", get_GL_SRC1_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC2_RGB", get_GL_SRC2_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC0_ALPHA", get_GL_SRC0_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC1_ALPHA", get_GL_SRC1_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRC2_ALPHA", get_GL_SRC2_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND0_RGB", get_GL_OPERAND0_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND1_RGB", get_GL_OPERAND1_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND2_RGB", get_GL_OPERAND2_RGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND0_ALPHA", get_GL_OPERAND0_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND1_ALPHA", get_GL_OPERAND1_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_OPERAND2_ALPHA", get_GL_OPERAND2_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_ENABLED", get_GL_VERTEX_ATTRIB_ARRAY_ENABLED);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_SIZE", get_GL_VERTEX_ATTRIB_ARRAY_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_STRIDE", get_GL_VERTEX_ATTRIB_ARRAY_STRIDE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_TYPE", get_GL_VERTEX_ATTRIB_ARRAY_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CURRENT_VERTEX_ATTRIB", get_GL_CURRENT_VERTEX_ATTRIB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_POINTER", get_GL_VERTEX_ATTRIB_ARRAY_POINTER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PROGRAM_ERROR_POSITION_ARB", get_GL_PROGRAM_ERROR_POSITION_ARB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NUM_COMPRESSED_TEXTURE_FORMATS", get_GL_NUM_COMPRESSED_TEXTURE_FORMATS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_TEXTURE_FORMATS", get_GL_COMPRESSED_TEXTURE_FORMATS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PROGRAM_BINARY_LENGTH", get_GL_PROGRAM_BINARY_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MIRROR_CLAMP_EXT", get_GL_MIRROR_CLAMP_EXT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BUFFER_SIZE", get_GL_BUFFER_SIZE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ATC_RGBA_INTERPOLATED_ALPHA_AMD", get_GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RGBA16F", get_GL_RGBA16F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_BLEND_EQUATION_ALPHA", get_GL_BLEND_EQUATION_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_VERTEX_ATTRIBS", get_GL_MAX_VERTEX_ATTRIBS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_NORMALIZED", get_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_COORDS", get_GL_MAX_TEXTURE_COORDS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_IMAGE_UNITS", get_GL_MAX_TEXTURE_IMAGE_UNITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ARRAY_BUFFER", get_GL_ARRAY_BUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ELEMENT_ARRAY_BUFFER", get_GL_ELEMENT_ARRAY_BUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ARRAY_BUFFER_BINDING", get_GL_ARRAY_BUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ELEMENT_ARRAY_BUFFER_BINDING", get_GL_ELEMENT_ARRAY_BUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", get_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_READ_ONLY", get_GL_READ_ONLY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_WRITE_ONLY", get_GL_WRITE_ONLY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_READ_WRITE", get_GL_READ_WRITE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STREAM_DRAW", get_GL_STREAM_DRAW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STREAM_READ", get_GL_STREAM_READ);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STREAM_COPY", get_GL_STREAM_COPY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STATIC_DRAW", get_GL_STATIC_DRAW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STATIC_READ", get_GL_STATIC_READ);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STATIC_COPY", get_GL_STATIC_COPY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DYNAMIC_DRAW", get_GL_DYNAMIC_DRAW);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DYNAMIC_READ", get_GL_DYNAMIC_READ);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DYNAMIC_COPY", get_GL_DYNAMIC_COPY);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH24_STENCIL8", get_GL_DEPTH24_STENCIL8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAGMENT_SHADER", get_GL_FRAGMENT_SHADER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VERTEX_SHADER", get_GL_VERTEX_SHADER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_VERTEX_TEXTURE_IMAGE_UNITS", get_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHADER_TYPE", get_GL_SHADER_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_VEC2", get_GL_FLOAT_VEC2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_VEC3", get_GL_FLOAT_VEC3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_VEC4", get_GL_FLOAT_VEC4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INT_VEC2", get_GL_INT_VEC2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INT_VEC3", get_GL_INT_VEC3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INT_VEC4", get_GL_INT_VEC4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_MAT2", get_GL_FLOAT_MAT2);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_MAT3", get_GL_FLOAT_MAT3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FLOAT_MAT4", get_GL_FLOAT_MAT4);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DELETE_STATUS", get_GL_DELETE_STATUS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPILE_STATUS", get_GL_COMPILE_STATUS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINK_STATUS", get_GL_LINK_STATUS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_INFO_LOG_LENGTH", get_GL_INFO_LOG_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ATTACHED_SHADERS", get_GL_ATTACHED_SHADERS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ACTIVE_UNIFORMS", get_GL_ACTIVE_UNIFORMS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ACTIVE_UNIFORM_MAX_LENGTH", get_GL_ACTIVE_UNIFORM_MAX_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHADER_SOURCE_LENGTH", get_GL_SHADER_SOURCE_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ACTIVE_ATTRIBUTES", get_GL_ACTIVE_ATTRIBUTES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ACTIVE_ATTRIBUTE_MAX_LENGTH", get_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHADING_LANGUAGE_VERSION", get_GL_SHADING_LANGUAGE_VERSION);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_CURRENT_PROGRAM", get_GL_CURRENT_PROGRAM);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE4_RGB8_OES", get_GL_PALETTE4_RGB8_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE4_RGBA8_OES", get_GL_PALETTE4_RGBA8_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE4_R5_G6_B5_OES", get_GL_PALETTE4_R5_G6_B5_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE4_RGBA4_OES", get_GL_PALETTE4_RGBA4_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE4_RGB5_A1_OES", get_GL_PALETTE4_RGB5_A1_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE8_RGB8_OES", get_GL_PALETTE8_RGB8_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE8_RGBA8_OES", get_GL_PALETTE8_RGBA8_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE8_R5_G6_B5_OES", get_GL_PALETTE8_R5_G6_B5_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE8_RGBA4_OES", get_GL_PALETTE8_RGBA4_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_PALETTE8_RGB5_A1_OES", get_GL_PALETTE8_RGB5_A1_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGB_PVRTC_4BPPV1_IMG", get_GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGB_PVRTC_2BPPV1_IMG", get_GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG", get_GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG", get_GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRGB", get_GL_SRGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRGB8", get_GL_SRGB8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRGB_ALPHA", get_GL_SRGB_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SRGB8_ALPHA8", get_GL_SRGB8_ALPHA8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SLUMINANCE_ALPHA", get_GL_SLUMINANCE_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SLUMINANCE8_ALPHA8", get_GL_SLUMINANCE8_ALPHA8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SLUMINANCE", get_GL_SLUMINANCE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SLUMINANCE8", get_GL_SLUMINANCE8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB", get_GL_COMPRESSED_SRGB);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB_ALPHA", get_GL_COMPRESSED_SRGB_ALPHA);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB_S3TC_DXT1", get_GL_COMPRESSED_SRGB_S3TC_DXT1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB_ALPHA_S3TC_DXT1", get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB_ALPHA_S3TC_DXT3", get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_SRGB_ALPHA_S3TC_DXT5", get_GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ATC_RGB_AMD", get_GL_ATC_RGB_AMD);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ATC_RGBA_EXPLICIT_ALPHA_AMD", get_GL_ATC_RGBA_EXPLICIT_ALPHA_AMD);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAMEBUFFER_BINDING", get_GL_FRAMEBUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RENDERBUFFER_BINDING", get_GL_RENDERBUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_READ_FRAMEBUFFER", get_GL_READ_FRAMEBUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DRAW_FRAMEBUFFER", get_GL_DRAW_FRAMEBUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_READ_FRAMEBUFFER_BINDING", get_GL_READ_FRAMEBUFFER_BINDING);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_ATTACHMENT0", get_GL_COLOR_ATTACHMENT0);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", get_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_ATTACHMENT", get_GL_DEPTH_ATTACHMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STENCIL_ATTACHMENT", get_GL_STENCIL_ATTACHMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_COMPONENT32F", get_GL_DEPTH_COMPONENT32F);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH32F_STENCIL8", get_GL_DEPTH32F_STENCIL8);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAMEBUFFER_COMPLETE", get_GL_FRAMEBUFFER_COMPLETE);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", get_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FRAMEBUFFER", get_GL_FRAMEBUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_RENDERBUFFER", get_GL_RENDERBUFFER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_COMBINED_TEXTURE_IMAGE_UNITS", get_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_HALF_FLOAT_OES", get_GL_HALF_FLOAT_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ETC1_RGB8_OES", get_GL_ETC1_RGB8_OES);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHADER_BINARY_FORMATS", get_GL_SHADER_BINARY_FORMATS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_NUM_SHADER_BINARY_FORMATS", get_GL_NUM_SHADER_BINARY_FORMATS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SHADER_COMPILER", get_GL_SHADER_COMPILER);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_VERTEX_UNIFORM_VECTORS", get_GL_MAX_VERTEX_UNIFORM_VECTORS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_VARYING_VECTORS", get_GL_MAX_VARYING_VECTORS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_FRAGMENT_UNIFORM_VECTORS", get_GL_MAX_FRAGMENT_UNIFORM_VECTORS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX", get_GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX", get_GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX", get_GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG", get_GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG", get_GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COMPRESSED_RGBA8_ETC2_EAC", get_GL_COMPRESSED_RGBA8_ETC2_EAC);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAX_TEXTURE_LOD_BIAS", get_GL_MAX_TEXTURE_LOD_BIAS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POINT_BIT", get_GL_POINT_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LINE_BIT", get_GL_LINE_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_POLYGON_BIT", get_GL_POLYGON_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_LIGHTING_BIT", get_GL_LIGHTING_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_FOG_BIT", get_GL_FOG_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_DEPTH_BUFFER_BIT", get_GL_DEPTH_BUFFER_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_STENCIL_BUFFER_BIT", get_GL_STENCIL_BUFFER_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_VIEWPORT_BIT", get_GL_VIEWPORT_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_TRANSFORM_BIT", get_GL_TRANSFORM_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ENABLE_BIT", get_GL_ENABLE_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_COLOR_BUFFER_BIT", get_GL_COLOR_BUFFER_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_HINT_BIT", get_GL_HINT_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_SCISSOR_BIT", get_GL_SCISSOR_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_ALL_ATTRIB_BITS", get_GL_ALL_ATTRIB_BITS);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_READ_BIT", get_GL_MAP_READ_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_WRITE_BIT", get_GL_MAP_WRITE_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_INVALIDATE_RANGE_BIT", get_GL_MAP_INVALIDATE_RANGE_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_INVALIDATE_BUFFER_BIT", get_GL_MAP_INVALIDATE_BUFFER_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_FLUSH_EXPLICIT_BIT", get_GL_MAP_FLUSH_EXPLICIT_BIT);
	mono_add_internal_call("VitaSdk.Libs.VitaGL.GL::get_MAP_UNSYNCHRONIZED_BIT", get_GL_MAP_UNSYNCHRONIZED_BIT);
}

