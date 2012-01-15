#ifndef __SDLgles_h_
#define __SDLgles_h_

/* $Revision: 7172 $ on $Date:: 2009-01-09 11:17:41 -0800 #$ */

#define GL_APIENTRY
#define GL_API

#ifdef __cplusplus
extern "C" {
#endif

/*
 * This document is licensed under the SGI Free Software B License Version
 * 2.0. For details, see http://oss.sgi.com/projects/FreeB/ .
 */

typedef void             GLvoid;
typedef unsigned int     GLenum;
typedef unsigned char    GLboolean;
typedef unsigned int     GLbitfield;
typedef signed char      GLbyte;
typedef short            GLshort;
typedef int              GLint;
typedef int              GLsizei;
typedef unsigned char    GLubyte;
typedef unsigned short   GLushort;
typedef unsigned int     GLuint;
typedef float            GLfloat;
typedef float            GLclampf;
typedef int              GLfixed;
typedef int              GLclampx;

typedef int              GLintptr;
typedef int              GLsizeiptr;


/*************************************************************/

/* OpenGL ES core versions */
#define GL_VERSION_ES_CM_1_0          1
#define GL_VERSION_ES_CL_1_0          1
#define GL_VERSION_ES_CM_1_1          1
#define GL_VERSION_ES_CL_1_1          1
#define GL_ES_VERSION_2_0             1

/* ClearBufferMask */
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000

/* Boolean */
#define GL_FALSE                          0
#define GL_TRUE                           1

/* BeginMode */
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006

/* AlphaFunction */
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207

/* BlendingFactorDest */
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305

/* BlendingFactorSrc */
/*      GL_ZERO */
/*      GL_ONE */
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
/*      GL_SRC_ALPHA */
/*      GL_ONE_MINUS_SRC_ALPHA */
/*      GL_DST_ALPHA */
/*      GL_ONE_MINUS_DST_ALPHA */

/* ClipPlaneName */
#define GL_CLIP_PLANE0                    0x3000
#define GL_CLIP_PLANE1                    0x3001
#define GL_CLIP_PLANE2                    0x3002
#define GL_CLIP_PLANE3                    0x3003
#define GL_CLIP_PLANE4                    0x3004
#define GL_CLIP_PLANE5                    0x3005

/* ColorMaterialFace */
/*      GL_FRONT_AND_BACK */

/* ColorMaterialParameter */
/*      GL_AMBIENT_AND_DIFFUSE */

/* ColorPointerType */
/*      GL_UNSIGNED_BYTE */
/*      GL_FLOAT */
/*      GL_FIXED */

/* CullFaceMode */
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_FRONT_AND_BACK                 0x0408

/* DepthFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* EnableCap */
#define GL_FOG                            0x0B60
#define GL_LIGHTING                       0x0B50
#define GL_TEXTURE_2D                     0x0DE1
#define GL_CULL_FACE                      0x0B44
#define GL_ALPHA_TEST                     0x0BC0
#define GL_BLEND                          0x0BE2
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_DITHER                         0x0BD0
#define GL_STENCIL_TEST                   0x0B90
#define GL_DEPTH_TEST                     0x0B71
/*      GL_LIGHT0 */
/*      GL_LIGHT1 */
/*      GL_LIGHT2 */
/*      GL_LIGHT3 */
/*      GL_LIGHT4 */
/*      GL_LIGHT5 */
/*      GL_LIGHT6 */
/*      GL_LIGHT7 */
#define GL_POINT_SMOOTH                   0x0B10
#define GL_LINE_SMOOTH                    0x0B20
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_MATERIAL                 0x0B57
#define GL_NORMALIZE                      0x0BA1
#define GL_RESCALE_NORMAL                 0x803A
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_VERTEX_ARRAY                   0x8074
#define GL_NORMAL_ARRAY                   0x8075
#define GL_COLOR_ARRAY                    0x8076
#define GL_TEXTURE_COORD_ARRAY            0x8078
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0

/* ErrorCode */
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_OUT_OF_MEMORY                  0x0505

/* FogMode */
/*      GL_LINEAR */
#define GL_EXP                            0x0800
#define GL_EXP2                           0x0801

/* FogParameter */
#define GL_FOG_DENSITY                    0x0B62
#define GL_FOG_START                      0x0B63
#define GL_FOG_END                        0x0B64
#define GL_FOG_MODE                       0x0B65
#define GL_FOG_COLOR                      0x0B66

/* FrontFaceDirection */
#define GL_CW                             0x0900
#define GL_CCW                            0x0901

/* GetPName */
#define GL_CURRENT_COLOR                  0x0B00
#define GL_CURRENT_NORMAL                 0x0B02
#define GL_CURRENT_TEXTURE_COORDS         0x0B03
#define GL_POINT_SIZE                     0x0B11
#define GL_POINT_SIZE_MIN                 0x8126
#define GL_POINT_SIZE_MAX                 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_POINT_DISTANCE_ATTENUATION     0x8129
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_LINE_WIDTH                     0x0B21
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_SHADE_MODEL                    0x0B54
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_MATRIX_MODE                    0x0BA0
#define GL_VIEWPORT                       0x0BA2
#define GL_MODELVIEW_STACK_DEPTH          0x0BA3
#define GL_PROJECTION_STACK_DEPTH         0x0BA4
#define GL_TEXTURE_STACK_DEPTH            0x0BA5
#define GL_MODELVIEW_MATRIX               0x0BA6
#define GL_PROJECTION_MATRIX              0x0BA7
#define GL_TEXTURE_MATRIX                 0x0BA8
#define GL_ALPHA_TEST_FUNC                0x0BC1
#define GL_ALPHA_TEST_REF                 0x0BC2
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_LIGHTS                     0x0D31
#define GL_MAX_CLIP_PLANES                0x0D32
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_MODELVIEW_STACK_DEPTH      0x0D36
#define GL_MAX_PROJECTION_STACK_DEPTH     0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH        0x0D39
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_MAX_TEXTURE_UNITS              0x84E2
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_RED_BITS                       0x0D52
#define GL_GREEN_BITS                     0x0D53
#define GL_BLUE_BITS                      0x0D54
#define GL_ALPHA_BITS                     0x0D55
#define GL_DEPTH_BITS                     0x0D56
#define GL_STENCIL_BITS                   0x0D57
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_VERTEX_ARRAY_SIZE              0x807A
#define GL_VERTEX_ARRAY_TYPE              0x807B
#define GL_VERTEX_ARRAY_STRIDE            0x807C
#define GL_NORMAL_ARRAY_TYPE              0x807E
#define GL_NORMAL_ARRAY_STRIDE            0x807F
#define GL_COLOR_ARRAY_SIZE               0x8081
#define GL_COLOR_ARRAY_TYPE               0x8082
#define GL_COLOR_ARRAY_STRIDE             0x8083
#define GL_TEXTURE_COORD_ARRAY_SIZE       0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE       0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE     0x808A
#define GL_VERTEX_ARRAY_POINTER           0x808E
#define GL_NORMAL_ARRAY_POINTER           0x808F
#define GL_COLOR_ARRAY_POINTER            0x8090
#define GL_TEXTURE_COORD_ARRAY_POINTER    0x8092
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB

/* GetTextureParameter */
/*      GL_TEXTURE_MAG_FILTER */
/*      GL_TEXTURE_MIN_FILTER */
/*      GL_TEXTURE_WRAP_S */
/*      GL_TEXTURE_WRAP_T */

#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3

/* HintMode */
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102

/* HintTarget */
#define GL_PERSPECTIVE_CORRECTION_HINT    0x0C50
#define GL_POINT_SMOOTH_HINT              0x0C51
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_FOG_HINT                       0x0C54
#define GL_GENERATE_MIPMAP_HINT           0x8192

/* LightModelParameter */
#define GL_LIGHT_MODEL_AMBIENT            0x0B53
#define GL_LIGHT_MODEL_TWO_SIDE           0x0B52

/* LightParameter */
#define GL_AMBIENT                        0x1200
#define GL_DIFFUSE                        0x1201
#define GL_SPECULAR                       0x1202
#define GL_POSITION                       0x1203
#define GL_SPOT_DIRECTION                 0x1204
#define GL_SPOT_EXPONENT                  0x1205
#define GL_SPOT_CUTOFF                    0x1206
#define GL_CONSTANT_ATTENUATION           0x1207
#define GL_LINEAR_ATTENUATION             0x1208
#define GL_QUADRATIC_ATTENUATION          0x1209

/* DataType */
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_FLOAT                          0x1406
#define GL_FIXED                          0x140C

/* LogicOp */
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F

/* MaterialFace */
/*      GL_FRONT_AND_BACK */

/* MaterialParameter */
#define GL_EMISSION                       0x1600
#define GL_SHININESS                      0x1601
#define GL_AMBIENT_AND_DIFFUSE            0x1602
/*      GL_AMBIENT */
/*      GL_DIFFUSE */
/*      GL_SPECULAR */

/* MatrixMode */
#define GL_MODELVIEW                      0x1700
#define GL_PROJECTION                     0x1701
#define GL_TEXTURE                        0x1702

/* NormalPointerType */
/*      GL_BYTE */
/*      GL_SHORT */
/*      GL_FLOAT */
/*      GL_FIXED */

/* PixelFormat */
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_LUMINANCE                      0x1909
#define GL_LUMINANCE_ALPHA                0x190A

/* PixelStoreParameter */
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_ALIGNMENT                 0x0D05

/* PixelType */
/*      GL_UNSIGNED_BYTE */
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_SHORT_5_6_5           0x8363

/* ShadingModel */
#define GL_FLAT                           0x1D00
#define GL_SMOOTH                         0x1D01

/* StencilFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* StencilOp */
/*      GL_ZERO */
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
/*      GL_INVERT */

/* StringName */
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03

/* TexCoordPointerType */
/*      GL_SHORT */
/*      GL_FLOAT */
/*      GL_FIXED */
/*      GL_BYTE */

/* TextureEnvMode */
#define GL_MODULATE                       0x2100
#define GL_DECAL                          0x2101
/*      GL_BLEND */
#define GL_ADD                            0x0104
/*      GL_REPLACE */

/* TextureEnvParameter */
#define GL_TEXTURE_ENV_MODE               0x2200
#define GL_TEXTURE_ENV_COLOR              0x2201

/* TextureEnvTarget */
#define GL_TEXTURE_ENV                    0x2300

/* TextureMagFilter */
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601

/* TextureMinFilter */
/*      GL_NEAREST */
/*      GL_LINEAR */
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703

/* TextureParameterName */
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
#define GL_GENERATE_MIPMAP                0x8191

/* TextureTarget */
/*      GL_TEXTURE_2D */

/* TextureUnit */
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE          0x84E1

/* TextureWrapMode */
#define GL_REPEAT                         0x2901
#define GL_CLAMP_TO_EDGE                  0x812F

/* VertexPointerType */
/*      GL_SHORT */
/*      GL_FLOAT */
/*      GL_FIXED */
/*      GL_BYTE */

/* LightName */
#define GL_LIGHT0                         0x4000
#define GL_LIGHT1                         0x4001
#define GL_LIGHT2                         0x4002
#define GL_LIGHT3                         0x4003
#define GL_LIGHT4                         0x4004
#define GL_LIGHT5                         0x4005
#define GL_LIGHT6                         0x4006
#define GL_LIGHT7                         0x4007

/* Buffer Objects */
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893

#define GL_ARRAY_BUFFER_BINDING               0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING       0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING        0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING        0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING         0x8898
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A

#define GL_STATIC_DRAW                    0x88E4
#define GL_DYNAMIC_DRAW                   0x88E8

#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765

/* Texture combine + dot3 */
#define GL_SUBTRACT                       0x84E7
#define GL_COMBINE                        0x8570
#define GL_COMBINE_RGB                    0x8571
#define GL_COMBINE_ALPHA                  0x8572
#define GL_RGB_SCALE                      0x8573
#define GL_ADD_SIGNED                     0x8574
#define GL_INTERPOLATE                    0x8575
#define GL_CONSTANT                       0x8576
#define GL_PRIMARY_COLOR                  0x8577
#define GL_PREVIOUS                       0x8578
#define GL_OPERAND0_RGB                   0x8590
#define GL_OPERAND1_RGB                   0x8591
#define GL_OPERAND2_RGB                   0x8592
#define GL_OPERAND0_ALPHA                 0x8598
#define GL_OPERAND1_ALPHA                 0x8599
#define GL_OPERAND2_ALPHA                 0x859A

#define GL_ALPHA_SCALE                    0x0D1C

#define GL_SRC0_RGB                       0x8580
#define GL_SRC1_RGB                       0x8581
#define GL_SRC2_RGB                       0x8582
#define GL_SRC0_ALPHA                     0x8588
#define GL_SRC1_ALPHA                     0x8589
#define GL_SRC2_ALPHA                     0x858A

#define GL_DOT3_RGB                       0x86AE
#define GL_DOT3_RGBA                      0x86AF

/*------------------------------------------------------------------------*
 * required OES extension tokens
 *------------------------------------------------------------------------*/

/* OES_read_format */
#ifndef GL_OES_read_format
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES                   0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES                 0x8B9B
#endif

/* GL_OES_compressed_paletted_texture */
#ifndef GL_OES_compressed_paletted_texture
#define GL_PALETTE4_RGB8_OES                                    0x8B90
#define GL_PALETTE4_RGBA8_OES                                   0x8B91
#define GL_PALETTE4_R5_G6_B5_OES                                0x8B92
#define GL_PALETTE4_RGBA4_OES                                   0x8B93
#define GL_PALETTE4_RGB5_A1_OES                                 0x8B94
#define GL_PALETTE8_RGB8_OES                                    0x8B95
#define GL_PALETTE8_RGBA8_OES                                   0x8B96
#define GL_PALETTE8_R5_G6_B5_OES                                0x8B97
#define GL_PALETTE8_RGBA4_OES                                   0x8B98
#define GL_PALETTE8_RGB5_A1_OES                                 0x8B99
#endif

/* OES_point_size_array */
#ifndef GL_OES_point_size_array
#define GL_POINT_SIZE_ARRAY_OES                                 0x8B9C
#define GL_POINT_SIZE_ARRAY_TYPE_OES                            0x898A
#define GL_POINT_SIZE_ARRAY_STRIDE_OES                          0x898B
#define GL_POINT_SIZE_ARRAY_POINTER_OES                         0x898C
#define GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES                  0x8B9F
#endif

/* GL_OES_point_sprite */
#ifndef GL_OES_point_sprite
#define GL_POINT_SPRITE_OES                                     0x8861
#define GL_COORD_REPLACE_OES                                    0x8862
#endif


/*************************************************************/

/*  GL-ES 2.0 specific defines */
#if GL_ES_VERSION_2_0
/* BlendEquationSeparate */
#define GL_FUNC_ADD                       0x8006
#define GL_BLEND_EQUATION                 0x8009
#define GL_BLEND_EQUATION_RGB             0x8009    /* same as BLEND_EQUATION */
#define GL_BLEND_EQUATION_ALPHA           0x883D

/* BlendSubtract */
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B

/* Separate Blend Functions */
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_BLEND_COLOR                    0x8005

/* Buffer Objects */
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895

#define GL_STREAM_DRAW                    0x88E0
#define GL_STATIC_DRAW                    0x88E4
#define GL_DYNAMIC_DRAW                   0x88E8

#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765

#define GL_CURRENT_VERTEX_ATTRIB          0x8626

/* GetPName */
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5

/* Defines data types */
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405

/* Pixel Format */
#define GL_DEPTH_COMPONENT                0x1902

/* Shaders */
#define GL_FRAGMENT_SHADER                  0x8B30
#define GL_VERTEX_SHADER                    0x8B31
#define GL_MAX_VERTEX_ATTRIBS               0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS       0x8DFB
#define GL_MAX_VARYING_VECTORS              0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS   0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS          0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS     0x8DFD
#define GL_SHADER_TYPE                      0x8B4F
#define GL_DELETE_STATUS                    0x8B80
#define GL_LINK_STATUS                      0x8B82
#define GL_VALIDATE_STATUS                  0x8B83
#define GL_ATTACHED_SHADERS                 0x8B85
#define GL_ACTIVE_UNIFORMS                  0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH        0x8B87
#define GL_ACTIVE_ATTRIBUTES                0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH      0x8B8A
#define GL_SHADING_LANGUAGE_VERSION         0x8B8C
#define GL_CURRENT_PROGRAM                  0x8B8D

/* StencilFunction */
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207

/* StencilOp */
#define GL_INVERT                         0x150A
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508

/* TextureTarget */
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C

/* TextureWrapMode */
#define GL_MIRRORED_REPEAT                0x8370

/* Uniform Types */
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_CUBE                   0x8B60

/* Vertex Arrays */
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER        0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F

/* Read Format */
#define GL_IMPLEMENTATION_COLOR_READ_TYPE   0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B

/* Shader Source */
#define GL_COMPILE_STATUS                 0x8B81
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_SHADER_COMPILER                0x8DFA

/* Shader Binary */
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9

/* Shader Precision-Specified Types */
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5

/* Framebuffer Object. */
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41

#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGB565                         0x8D62
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_STENCIL_INDEX                  0x1901
#define GL_STENCIL_INDEX8                 0x8D48

#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55

#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE           0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME           0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL         0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3

#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20

#define GL_NONE                           0

#define GL_FRAMEBUFFER_COMPLETE                      0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT         0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS         0x8CD9
#define GL_FRAMEBUFFER_UNSUPPORTED                   0x8CDD

#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8

#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506

#endif



/*************************************************************/

/* Available only in Common profile */
GL_API void GL_APIENTRY glAlphaFunc (GLenum func, GLclampf ref);
GL_API void GL_APIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_API void GL_APIENTRY glClearDepthf (GLclampf depth);
GL_API void GL_APIENTRY glClipPlanef (GLenum plane, const GLfloat *equation);
GL_API void GL_APIENTRY glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GL_API void GL_APIENTRY glDepthRangef (GLclampf zNear, GLclampf zFar);
GL_API void GL_APIENTRY glFogf (GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glFogfv (GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glFrustumf (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
GL_API void GL_APIENTRY glGetClipPlanef (GLenum pname, GLfloat eqn[4]);
GL_API void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat *params);
GL_API void GL_APIENTRY glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
GL_API void GL_APIENTRY glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
GL_API void GL_APIENTRY glGetTexEnvfv (GLenum env, GLenum pname, GLfloat *params);
GL_API void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_API void GL_APIENTRY glLightModelf (GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glLightModelfv (GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glLightf (GLenum light, GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glLightfv (GLenum light, GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glLineWidth (GLfloat width);
GL_API void GL_APIENTRY glLoadMatrixf (const GLfloat *m);
GL_API void GL_APIENTRY glMaterialf (GLenum face, GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glMultMatrixf (const GLfloat *m);
GL_API void GL_APIENTRY glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GL_API void GL_APIENTRY glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
GL_API void GL_APIENTRY glOrthof (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
GL_API void GL_APIENTRY glPointParameterf (GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glPointParameterfv (GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glPointSize (GLfloat size);
GL_API void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
GL_API void GL_APIENTRY glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GL_API void GL_APIENTRY glScalef (GLfloat x, GLfloat y, GLfloat z);
GL_API void GL_APIENTRY glTexEnvf (GLenum target, GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GL_API void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GL_API void GL_APIENTRY glTranslatef (GLfloat x, GLfloat y, GLfloat z);

/* Available in both Common and Common-Lite profiles */
GL_API void GL_APIENTRY glActiveTexture (GLenum texture);
GL_API void GL_APIENTRY glAlphaFuncx (GLenum func, GLclampx ref);
GL_API void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
GL_API void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
GL_API void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
GL_API void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
GL_API void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
GL_API void GL_APIENTRY glClear (GLbitfield mask);
GL_API void GL_APIENTRY glClearColorx (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
GL_API void GL_APIENTRY glClearDepthx (GLclampx depth);
GL_API void GL_APIENTRY glClearStencil (GLint s);
GL_API void GL_APIENTRY glClientActiveTexture (GLenum texture);
GL_API void GL_APIENTRY glClipPlanex (GLenum plane, const GLfixed *equation);
GL_API void GL_APIENTRY glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
GL_API void GL_APIENTRY glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
GL_API void GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GL_API void GL_APIENTRY glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
GL_API void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_API void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GL_API void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_API void GL_APIENTRY glCullFace (GLenum mode);
GL_API void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint *buffers);
GL_API void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures);
GL_API void GL_APIENTRY glDepthFunc (GLenum func);
GL_API void GL_APIENTRY glDepthMask (GLboolean flag);
GL_API void GL_APIENTRY glDepthRangex (GLclampx zNear, GLclampx zFar);
GL_API void GL_APIENTRY glDisable (GLenum cap);
GL_API void GL_APIENTRY glDisableClientState (GLenum array);
GL_API void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
GL_API void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
GL_API void GL_APIENTRY glEnable (GLenum cap);
GL_API void GL_APIENTRY glEnableClientState (GLenum array);
GL_API void GL_APIENTRY glFinish (void);
GL_API void GL_APIENTRY glFlush (void);
GL_API void GL_APIENTRY glFogx (GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glFogxv (GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glFrontFace (GLenum mode);
GL_API void GL_APIENTRY glFrustumx (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
GL_API void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *params);
GL_API void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
GL_API void GL_APIENTRY glGetClipPlanex (GLenum pname, GLfixed eqn[4]);
GL_API void GL_APIENTRY glGenBuffers (GLsizei n, GLuint *buffers);
GL_API void GL_APIENTRY glGenTextures (GLsizei n, GLuint *textures);
GL_API GLenum GL_APIENTRY glGetError (void);
GL_API void GL_APIENTRY glGetFixedv (GLenum pname, GLfixed *params);
GL_API void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *params);
GL_API void GL_APIENTRY glGetLightxv (GLenum light, GLenum pname, GLfixed *params);
GL_API void GL_APIENTRY glGetMaterialxv (GLenum face, GLenum pname, GLfixed *params);
GL_API void GL_APIENTRY glGetPointerv (GLenum pname, void **params);
GL_API const GLubyte * GL_APIENTRY glGetString (GLenum name);
GL_API void GL_APIENTRY glGetTexEnviv (GLenum env, GLenum pname, GLint *params);
GL_API void GL_APIENTRY glGetTexEnvxv (GLenum env, GLenum pname, GLfixed *params);
GL_API void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
GL_API void GL_APIENTRY glGetTexParameterxv (GLenum target, GLenum pname, GLfixed *params);
GL_API void GL_APIENTRY glHint (GLenum target, GLenum mode);
GL_API GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
GL_API GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
GL_API GLboolean GL_APIENTRY glIsTexture (GLuint texture);
GL_API void GL_APIENTRY glLightModelx (GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glLightModelxv (GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glLightx (GLenum light, GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glLightxv (GLenum light, GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glLineWidthx (GLfixed width);
GL_API void GL_APIENTRY glLoadIdentity (void);
GL_API void GL_APIENTRY glLoadMatrixx (const GLfixed *m);
GL_API void GL_APIENTRY glLogicOp (GLenum opcode);
GL_API void GL_APIENTRY glMaterialx (GLenum face, GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glMaterialxv (GLenum face, GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glMatrixMode (GLenum mode);
GL_API void GL_APIENTRY glMultMatrixx (const GLfixed *m);
GL_API void GL_APIENTRY glMultiTexCoord4x (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
GL_API void GL_APIENTRY glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz);
GL_API void GL_APIENTRY glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void GL_APIENTRY glOrthox (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
GL_API void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
GL_API void GL_APIENTRY glPointParameterx (GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glPointParameterxv (GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glPointSizex (GLfixed size);
GL_API void GL_APIENTRY glPolygonOffsetx (GLfixed factor, GLfixed units);
GL_API void GL_APIENTRY glPopMatrix (void);
GL_API void GL_APIENTRY glPushMatrix (void);
GL_API void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
GL_API void GL_APIENTRY glRotatex (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
GL_API void GL_APIENTRY glSampleCoverage (GLclampf value, GLboolean invert);
GL_API void GL_APIENTRY glSampleCoveragex (GLclampx value, GLboolean invert);
GL_API void GL_APIENTRY glScalex (GLfixed x, GLfixed y, GLfixed z);
GL_API void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GL_API void GL_APIENTRY glShadeModel (GLenum mode);
GL_API void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
GL_API void GL_APIENTRY glStencilMask (GLuint mask);
GL_API void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GL_API void GL_APIENTRY glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void GL_APIENTRY glTexEnvi (GLenum target, GLenum pname, GLint param);
GL_API void GL_APIENTRY glTexEnvx (GLenum target, GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glTexEnviv (GLenum target, GLenum pname, const GLint *params);
GL_API void GL_APIENTRY glTexEnvxv (GLenum target, GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
GL_API void GL_APIENTRY glTexParameterx (GLenum target, GLenum pname, GLfixed param);
GL_API void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
GL_API void GL_APIENTRY glTexParameterxv (GLenum target, GLenum pname, const GLfixed *params);
GL_API void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void GL_APIENTRY glTranslatex (GLfixed x, GLfixed y, GLfixed z);
GL_API void GL_APIENTRY glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

/*------------------------------------------------------------------------*
 * Required OES extension functions
 *------------------------------------------------------------------------*/

/* GL_OES_read_format */
#ifndef GL_OES_read_format
#define GL_OES_read_format 1
#endif

/* GL_OES_compressed_paletted_texture */
#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture 1
#endif

/* GL_OES_point_size_array */
#ifndef GL_OES_point_size_array
#define GL_OES_point_size_array 1
GL_API void GL_APIENTRY glPointSizePointerOES (GLenum type, GLsizei stride, const GLvoid *pointer);
#endif

/* GL_OES_point_sprite */
#ifndef GL_OES_point_sprite
#define GL_OES_point_sprite 1
#endif

#include "SDL_opengles_ext.h"

/*************************************************************/

/* Available only in GL-ES 2.0 only*/
#if GL_ES_VERSION_2_0
GL_API void         GL_APIENTRY glAttachShader (GLuint program, GLuint shader);
GL_API void         GL_APIENTRY glBindAttribLocation (GLuint program, GLuint index, const char* name);
GL_API void         GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
GL_API void         GL_APIENTRY glBindFramebuffer (GLenum target, GLuint framebuffer);
GL_API void         GL_APIENTRY glBindRenderbuffer (GLenum target, GLuint renderbuffer);
GL_API void         GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
GL_API void         GL_APIENTRY glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_API void         GL_APIENTRY glBlendEquation ( GLenum mode );
GL_API void         GL_APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
GL_API void         GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
GL_API void         GL_APIENTRY glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GL_API void         GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage);
GL_API void         GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
GL_API GLenum       GL_APIENTRY glCheckFramebufferStatus (GLenum target);
GL_API void         GL_APIENTRY glClear (GLbitfield mask);
GL_API void         GL_APIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_API void         GL_APIENTRY glClearDepthf (GLclampf depth);
GL_API void         GL_APIENTRY glClearStencil (GLint s);
GL_API void         GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GL_API void         GL_APIENTRY glCompileShader (GLuint shader);
GL_API void         GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
GL_API void         GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
GL_API void         GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GL_API void         GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_API GLuint       GL_APIENTRY glCreateProgram (void);
GL_API GLuint       GL_APIENTRY glCreateShader (GLenum type);
GL_API void         GL_APIENTRY glCullFace (GLenum mode);
GL_API void         GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint* buffers);
GL_API void         GL_APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers);
GL_API void         GL_APIENTRY glDeleteProgram (GLuint program);
GL_API void         GL_APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers);
GL_API void         GL_APIENTRY glDeleteShader (GLuint shader);
GL_API void         GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint* textures);
GL_API void         GL_APIENTRY glDepthFunc (GLenum func);
GL_API void         GL_APIENTRY glDepthMask (GLboolean flag);
GL_API void         GL_APIENTRY glDepthRangef (GLclampf zNear, GLclampf zFar);
GL_API void         GL_APIENTRY glDetachShader (GLuint program, GLuint shader);
GL_API void         GL_APIENTRY glDisable (GLenum cap);
GL_API void         GL_APIENTRY glDisableVertexAttribArray (GLuint index);
GL_API void         GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
GL_API void         GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const void* indices);
GL_API void         GL_APIENTRY glEnable (GLenum cap);
GL_API void         GL_APIENTRY glEnableVertexAttribArray (GLuint index);
GL_API void         GL_APIENTRY glFinish (void);
GL_API void         GL_APIENTRY glFlush (void);
GL_API void         GL_APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GL_API void         GL_APIENTRY glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GL_API void         GL_APIENTRY glFrontFace (GLenum mode);
GL_API void         GL_APIENTRY glGenBuffers (GLsizei n, GLuint* buffers);
GL_API void         GL_APIENTRY glGenerateMipmap (GLenum target);
GL_API void         GL_APIENTRY glGenFramebuffers (GLsizei n, GLuint* framebuffers);
GL_API void         GL_APIENTRY glGenRenderbuffers (GLsizei n, GLuint* renderbuffers);
GL_API void         GL_APIENTRY glGenTextures (GLsizei n, GLuint* textures);
GL_API void         GL_APIENTRY glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name);
GL_API void         GL_APIENTRY glGetActiveUniform (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name);
GL_API void         GL_APIENTRY glGetAttachedShaders (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
GL_API int          GL_APIENTRY glGetAttribLocation (GLuint program, const char* name);
GL_API void         GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean* params);
GL_API void         GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params);
GL_API GLenum       GL_APIENTRY glGetError (void);
GL_API void         GL_APIENTRY glGetFloatv (GLenum pname, GLfloat* params);
GL_API void         GL_APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetIntegerv (GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetProgramiv (GLuint program, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, char* infolog);
GL_API void         GL_APIENTRY glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, char* infolog);
GL_API void         GL_APIENTRY glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
GL_API void         GL_APIENTRY glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, char* source);
GL_API const GLubyte* GL_APIENTRY glGetString (GLenum name);
GL_API void         GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params);
GL_API void         GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetUniformfv (GLuint program, GLint location, GLfloat* params);
GL_API void         GL_APIENTRY glGetUniformiv (GLuint program, GLint location, GLint* params);
GL_API int          GL_APIENTRY glGetUniformLocation (GLuint program, const char* name);
GL_API void         GL_APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params);
GL_API void         GL_APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params);
GL_API void         GL_APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname, void** pointer);
GL_API void         GL_APIENTRY glHint (GLenum target, GLenum mode);
GL_API GLboolean    GL_APIENTRY glIsBuffer (GLuint buffer);
GL_API GLboolean    GL_APIENTRY glIsEnabled (GLenum cap);
GL_API GLboolean    GL_APIENTRY glIsFramebuffer (GLuint framebuffer);
GL_API GLboolean    GL_APIENTRY glIsProgram (GLuint program);
GL_API GLboolean    GL_APIENTRY glIsRenderbuffer (GLuint renderbuffer);
GL_API GLboolean    GL_APIENTRY glIsShader (GLuint shader);
GL_API GLboolean    GL_APIENTRY glIsTexture (GLuint texture);
GL_API void         GL_APIENTRY glLineWidth (GLfloat width);
GL_API void         GL_APIENTRY glLinkProgram (GLuint program);
GL_API void         GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
GL_API void         GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
GL_API void         GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
GL_API void         GL_APIENTRY glReleaseShaderCompiler (void);
GL_API void         GL_APIENTRY glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GL_API void         GL_APIENTRY glSampleCoverage (GLclampf value, GLboolean invert);
GL_API void         GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GL_API void         GL_APIENTRY glShaderBinary (GLsizei n, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length);
GL_API void         GL_APIENTRY glShaderSource (GLuint shader, GLsizei count, const char** string, const GLint* length);
GL_API void         GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
GL_API void         GL_APIENTRY glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
GL_API void         GL_APIENTRY glStencilMask (GLuint mask);
GL_API void         GL_APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask);
GL_API void         GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GL_API void         GL_APIENTRY glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
GL_API void         GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void         GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GL_API void         GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params);
GL_API void         GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
GL_API void         GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint* params);
GL_API void         GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
GL_API void         GL_APIENTRY glUniform1f (GLint location, GLfloat x);
GL_API void         GL_APIENTRY glUniform1fv (GLint location, GLsizei count, const GLfloat* v);
GL_API void         GL_APIENTRY glUniform1i (GLint location, GLint x);
GL_API void         GL_APIENTRY glUniform1iv (GLint location, GLsizei count, const GLint* v);
GL_API void         GL_APIENTRY glUniform2f (GLint location, GLfloat x, GLfloat y);
GL_API void         GL_APIENTRY glUniform2fv (GLint location, GLsizei count, const GLfloat* v);
GL_API void         GL_APIENTRY glUniform2i (GLint location, GLint x, GLint y);
GL_API void         GL_APIENTRY glUniform2iv (GLint location, GLsizei count, const GLint* v);
GL_API void         GL_APIENTRY glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z);
GL_API void         GL_APIENTRY glUniform3fv (GLint location, GLsizei count, const GLfloat* v);
GL_API void         GL_APIENTRY glUniform3i (GLint location, GLint x, GLint y, GLint z);
GL_API void         GL_APIENTRY glUniform3iv (GLint location, GLsizei count, const GLint* v);
GL_API void         GL_APIENTRY glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_API void         GL_APIENTRY glUniform4fv (GLint location, GLsizei count, const GLfloat* v);
GL_API void         GL_APIENTRY glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w);
GL_API void         GL_APIENTRY glUniform4iv (GLint location, GLsizei count, const GLint* v);
GL_API void         GL_APIENTRY glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GL_API void         GL_APIENTRY glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GL_API void         GL_APIENTRY glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GL_API void         GL_APIENTRY glUseProgram (GLuint program);
GL_API void         GL_APIENTRY glValidateProgram (GLuint program);
GL_API void         GL_APIENTRY glVertexAttrib1f (GLuint indx, GLfloat x);
GL_API void         GL_APIENTRY glVertexAttrib1fv (GLuint indx, const GLfloat* values);
GL_API void         GL_APIENTRY glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y);
GL_API void         GL_APIENTRY glVertexAttrib2fv (GLuint indx, const GLfloat* values);
GL_API void         GL_APIENTRY glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z);
GL_API void         GL_APIENTRY glVertexAttrib3fv (GLuint indx, const GLfloat* values);
GL_API void         GL_APIENTRY glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_API void         GL_APIENTRY glVertexAttrib4fv (GLuint indx, const GLfloat* values);
GL_API void         GL_APIENTRY glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* ptr);
GL_API void         GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

#endif

#ifdef __cplusplus
}
#endif

#endif /* __gl_h_ */

