using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace VitaSdk.Libs.VitaGL
{
	public enum SceGxmMultisampleMode : uint
	{
		None = 0,
		At2X = 1,
		At4X = 2  
	}

	public class VGL
	{
		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static int Init(int legacy_pool_size);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static int InitExtended(int legacy_pool_size, int width, int height, int ram_threshold, SceGxmMultisampleMode msaa);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static int End();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static int SwapBuffers(bool has_commondialog);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static int WaitVblankStart(bool enable);		
	}

	public class GL
	{
	#region Marshaling

			public static T PtrToStructure<T>(IntPtr ptr)
			{
				return (T) Marshal.PtrToStructure(ptr, typeof(T));
			}

			public static Delegate GetDelegateForFunctionPointer<T>(IntPtr ptr)
			{
				return Marshal.GetDelegateForFunctionPointer(ptr, typeof(T));
			}

			public static int SizeOf<T>()
			{
				return Marshal.SizeOf(typeof(T));
			}

	#endregion

	#region UTF8 Marshaling

			/* Used for stack allocated string marshaling. */
			public static int Utf8Size(string str)
			{
				if (str == null)
				{
					return 0;
				}
				return (str.Length * 4) + 1;
			}
			public static unsafe byte* Utf8Encode(string str, byte* buffer, int bufferSize)
			{
				if (str == null)
				{
					return (byte*) 0;
				}
				byte[] utf8Bytes = Encoding.UTF8.GetBytes(str);
				int top = utf8Bytes.Length > bufferSize ? bufferSize : utf8Bytes.Length;
				Marshal.Copy(utf8Bytes, 0, (IntPtr)buffer, top);
				buffer[top] = 0;
				return buffer;
			}

			/* Used for heap allocated string marshaling.
			* Returned byte* must be free'd with FreeHGlobal.
			*/
			public static unsafe byte* Utf8EncodeHeap(string str)
			{
				if (str == null)
				{
					return (byte*) 0;
				}

				int bufferSize = Utf8Size(str);
				byte* buffer = (byte*) Marshal.AllocHGlobal(bufferSize);
				byte[] utf8Bytes = Encoding.UTF8.GetBytes(str);
				Marshal.Copy(utf8Bytes, 0, (IntPtr)buffer, bufferSize);
				buffer[bufferSize] = 0;
				return buffer;
			}

	#endregion

	#region Constant Properties
		public static uint FALSE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TRUE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NO_ERROR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ZERO
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ONE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NONE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POINTS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINE_LOOP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINE_STRIP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TRIANGLES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TRIANGLE_STRIP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TRIANGLE_FAN
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint QUADS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ADD
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NEVER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LESS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint EQUAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LEQUAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GREATER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NOTEQUAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GEQUAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ALWAYS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ONE_MINUS_SRC_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ONE_MINUS_SRC_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DST_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ONE_MINUS_DST_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DST_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ONE_MINUS_DST_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC_ALPHA_SATURATE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRONT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BACK
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRONT_AND_BACK
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INVALID_ENUM
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INVALID_VALUE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INVALID_OPERATION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STACK_OVERFLOW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STACK_UNDERFLOW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OUT_OF_MEMORY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint EXP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint EXP2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CCW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CURRENT_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_MODE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CULL_FACE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHTING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT_MODEL_AMBIENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_MATERIAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_DENSITY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_START
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_END
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_MODE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_TEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_WRITEMASK
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STENCIL_TEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MATRIX_MODE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NORMALIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VIEWPORT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MODELVIEW_MATRIX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PROJECTION_MATRIX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_MATRIX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ALPHA_TEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_DST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_SRC
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SCISSOR_BOX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SCISSOR_TEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNPACK_ROW_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNPACK_ALIGNMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PACK_ALIGNMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ALPHA_SCALE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_LIGHTS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_CLIP_PLANES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_MODELVIEW_STACK_DEPTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_PROJECTION_STACK_DEPTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_STACK_DEPTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_VIEWPORT_DIMS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RED_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GREEN_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLUE_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STENCIL_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_2D
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DONT_CARE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FASTEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NICEST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint AMBIENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DIFFUSE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SPECULAR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POSITION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CONSTANT_ATTENUATION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINEAR_ATTENUATION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint QUADRATIC_ATTENUATION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPILE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPILE_AND_EXECUTE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BYTE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_BYTE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHORT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_SHORT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_INT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint HALF_FLOAT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FIXED
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INVERT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint EMISSION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint AMBIENT_AND_DIFFUSE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MODELVIEW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PROJECTION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_INDEX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_COMPONENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RED
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GREEN
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLUE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RGBA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LUMINANCE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LUMINANCE_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POINT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FILL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLAT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SMOOTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint KEEP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint REPLACE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INCR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DECR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VENDOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RENDERER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERSION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint EXTENSIONS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MODULATE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DECAL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_ENV_MODE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_ENV_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_ENV
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NEAREST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINEAR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NEAREST_MIPMAP_NEAREST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINEAR_MIPMAP_NEAREST
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NEAREST_MIPMAP_LINEAR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINEAR_MIPMAP_LINEAR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_MAG_FILTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_MIN_FILTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_WRAP_S
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_WRAP_T
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLAMP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint REPEAT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_OFFSET_UNITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_OFFSET_POINT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_OFFSET_LINE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint V2F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint C4UB_V2F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint C4UB_V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint C3F_V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint T2F_V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint T4F_V4F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint T2F_C4UB_V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint T2F_C3F_V3F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE0
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE5
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIP_PLANE6
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT0
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT5
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT6
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHT7
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ABGR_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FUNC_ADD
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MIN
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_EQUATION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FUNC_SUBTRACT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FUNC_REVERSE_SUBTRACT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_SHORT_4_4_4_4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_SHORT_5_5_5_1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_INT_8_8_8_8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_OFFSET_FILL
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_OFFSET_FACTOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INTENSITY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_BINDING_2D
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ARRAY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NORMAL_ARRAY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ARRAY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COORD_ARRAY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ARRAY_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ARRAY_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ARRAY_STRIDE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NORMAL_ARRAY_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NORMAL_ARRAY_STRIDE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ARRAY_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ARRAY_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ARRAY_STRIDE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COORD_ARRAY_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COORD_ARRAY_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COORD_ARRAY_STRIDE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ARRAY_POINTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NORMAL_ARRAY_POINTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ARRAY_POINTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COORD_ARRAY_POINTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_DST_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_SRC_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_DST_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_SRC_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_TABLE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BGR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BGRA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_INDEX8_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_ELEMENTS_VERTICES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_ELEMENTS_INDICES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PHONG_WIN
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLAMP_TO_EDGE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_COMPONENT16
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_COMPONENT24
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_COMPONENT32
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_STENCIL_ATTACHMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAJOR_VERSION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MINOR_VERSION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NUM_EXTENSIONS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_SHORT_5_6_5
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_SHORT_1_5_5_5_REV
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint UNSIGNED_INT_8_8_8_8_REV
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MIRRORED_REPEAT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGB_S3TC_DXT1_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_S3TC_DXT1_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_S3TC_DXT3_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_S3TC_DXT5_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE0
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE5
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE6
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE7
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE9
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE10
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE11
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE12
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE13
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE14
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE15
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ACTIVE_TEXTURE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CLIENT_ACTIVE_TEXTURE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_UNITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SUBTRACT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_RENDERBUFFER_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_COMPRESSION_HINT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_MAX_ANISOTROPY_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_MAX_ANISOTROPY_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_LOD_BIAS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INCR_WRAP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DECR_WRAP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_POSITIVE_X
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_NEGATIVE_X
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_POSITIVE_Y
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_NEGATIVE_Y
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_POSITIVE_Z
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TEXTURE_CUBE_MAP_NEGATIVE_Z
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_CUBE_MAP_TEXTURE_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMBINE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMBINE_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMBINE_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RGB_SCALE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ADD_SIGNED
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INTERPOLATE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CONSTANT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PRIMARY_COLOR
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PREVIOUS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC0_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC1_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC2_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC0_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC1_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRC2_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND0_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND1_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND2_RGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND0_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND1_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint OPERAND2_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_ENABLED
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_STRIDE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CURRENT_VERTEX_ATTRIB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_POINTER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PROGRAM_ERROR_POSITION_ARB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NUM_COMPRESSED_TEXTURE_FORMATS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_TEXTURE_FORMATS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PROGRAM_BINARY_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MIRROR_CLAMP_EXT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BUFFER_SIZE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ATC_RGBA_INTERPOLATED_ALPHA_AMD
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RGBA16F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint BLEND_EQUATION_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_VERTEX_ATTRIBS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_NORMALIZED
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_COORDS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_IMAGE_UNITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ARRAY_BUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ELEMENT_ARRAY_BUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ARRAY_BUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ELEMENT_ARRAY_BUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint READ_ONLY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint WRITE_ONLY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint READ_WRITE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STREAM_DRAW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STREAM_READ
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STREAM_COPY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STATIC_DRAW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STATIC_READ
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STATIC_COPY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DYNAMIC_DRAW
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DYNAMIC_READ
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DYNAMIC_COPY
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH24_STENCIL8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAGMENT_SHADER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VERTEX_SHADER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_VERTEX_TEXTURE_IMAGE_UNITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHADER_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_VEC2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_VEC3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_VEC4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INT_VEC2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INT_VEC3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INT_VEC4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_MAT2
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_MAT3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FLOAT_MAT4
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DELETE_STATUS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPILE_STATUS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINK_STATUS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint INFO_LOG_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ATTACHED_SHADERS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ACTIVE_UNIFORMS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ACTIVE_UNIFORM_MAX_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHADER_SOURCE_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ACTIVE_ATTRIBUTES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ACTIVE_ATTRIBUTE_MAX_LENGTH
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHADING_LANGUAGE_VERSION
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint CURRENT_PROGRAM
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE4_RGB8_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE4_RGBA8_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE4_R5_G6_B5_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE4_RGBA4_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE4_RGB5_A1_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE8_RGB8_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE8_RGBA8_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE8_R5_G6_B5_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE8_RGBA4_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint PALETTE8_RGB5_A1_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGB_PVRTC_4BPPV1_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGB_PVRTC_2BPPV1_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRGB8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRGB_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SRGB8_ALPHA8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SLUMINANCE_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SLUMINANCE8_ALPHA8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SLUMINANCE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SLUMINANCE8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB_ALPHA
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB_S3TC_DXT1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB_ALPHA_S3TC_DXT1
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB_ALPHA_S3TC_DXT3
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_SRGB_ALPHA_S3TC_DXT5
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ATC_RGB_AMD
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ATC_RGBA_EXPLICIT_ALPHA_AMD
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAMEBUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RENDERBUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint READ_FRAMEBUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DRAW_FRAMEBUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint READ_FRAMEBUFFER_BINDING
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_ATTACHMENT0
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_ATTACHMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STENCIL_ATTACHMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_COMPONENT32F
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH32F_STENCIL8
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAMEBUFFER_COMPLETE
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FRAMEBUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint RENDERBUFFER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_COMBINED_TEXTURE_IMAGE_UNITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint HALF_FLOAT_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ETC1_RGB8_OES
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHADER_BINARY_FORMATS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint NUM_SHADER_BINARY_FORMATS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SHADER_COMPILER
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_VERTEX_UNIFORM_VECTORS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_VARYING_VECTORS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_FRAGMENT_UNIFORM_VECTORS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_PVRTC_2BPPV2_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA_PVRTC_4BPPV2_IMG
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COMPRESSED_RGBA8_ETC2_EAC
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAX_TEXTURE_LOD_BIAS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POINT_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LINE_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint POLYGON_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint LIGHTING_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint FOG_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint DEPTH_BUFFER_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint STENCIL_BUFFER_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint VIEWPORT_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint TRANSFORM_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ENABLE_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint COLOR_BUFFER_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint HINT_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint SCISSOR_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint ALL_ATTRIB_BITS
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_READ_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_WRITE_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_INVALIDATE_RANGE_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_INVALIDATE_BUFFER_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_FLUSH_EXPLICIT_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}

		public static uint MAP_UNSYNCHRONIZED_BIT
		{
			[MethodImplAttribute(MethodImplOptions.InternalCall)]
			get;
		}
	#endregion


	#region Methods
		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ActiveTexture(uint texture);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void AlphaFunc(uint func, float fref);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void AlphaFuncx(uint func, int iref);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void AttachShader(uint prog, uint shad);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Begin(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_BindAttribLocation(uint program, uint index, byte* name);

		public unsafe static void BindAttribLocation(uint program, uint index, string name)
		{
			int utf8NameBufSize = Utf8Size(name);
			byte* utf8Name = stackalloc byte[utf8NameBufSize];
			byte* nameEncoded = Utf8Encode(name, utf8Name, utf8NameBufSize);	
			INTERNAL_BindAttribLocation(program, index, nameEncoded);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BindBuffer(uint target, uint buffer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BindFramebuffer(uint target, uint framebuffer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BindRenderbuffer(uint target, uint renderbuffer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BindTexture(uint target, uint texture);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BindVertexArray(uint array);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BlendEquation(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BlendEquationSeparate(uint modeRGB, uint modeAlpha);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BlendFunc(uint sfactor, uint dfactor);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void BlendFuncSeparate(uint srcRGB, uint dstRGB, uint srcAlpha, uint dstAlpha);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_BufferData(uint target, int size, IntPtr data, uint usage);

		public static void BufferData<T>(uint target, T[] data, uint usage) where T : struct,
          IComparable, 
          IComparable<T>, 
          IConvertible, 
          IEquatable<T>, 
          IFormattable
		{
			byte[] byteData = null;
			// Icky runtime hack to avoid big buffer copying
			if(typeof(T) == typeof(byte))
			{
				byteData = (byte[])(Array)data;
			}
			else
			{
				byteData = new byte[data.Length * SizeOf<T>()];
				Buffer.BlockCopy(data, 0, byteData, 0, byteData.Length);
			}

			GCHandle handle = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handle.AddrOfPinnedObject();
				INTERNAL_BufferData(target, data.Length, dataPtr, usage);
			}
			finally
			{
				handle.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_BufferSubData(uint target, uint offset, uint size, IntPtr data);

		public static void BufferSubData(uint target, uint offset, uint size, byte[] data)
		{
			GCHandle handle = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handle.AddrOfPinnedObject();
				INTERNAL_BufferSubData(target, offset, size, dataPtr);
			}
			finally
			{
				handle.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void CallList(uint list);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static uint CheckFramebufferStatus(uint target);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Clear(uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ClearColor(float red, float green, float blue, float alpha);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ClearColorx(int red, int green, int blue, int alpha);

		public static void ClearColor(int red, int green, int blue, int alpha)
		{
			INTERNAL_ClearColorx(red, green, blue, alpha);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ClearDepth(double depth);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ClearDepthf(float depth);

		public static void ClearDepth(float depth)
		{
			INTERNAL_ClearDepthf(depth);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void INTERNAL_ClearDepthx(int depth);

		public static void ClearDepth(int depth)
		{
			INTERNAL_ClearDepthx(depth);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ClearStencil(int s);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ClientActiveTexture(uint texture);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ClipPlane(uint plane, IntPtr equation);

		public static void ClipPlane(uint plane, double[] equation)
		{
			GCHandle handleEquation = GCHandle.Alloc(equation, GCHandleType.Pinned);
			try
			{
				IntPtr equationPtr = handleEquation.AddrOfPinnedObject();
				INTERNAL_ClipPlane(plane, equationPtr);
			}
			finally
			{
				handleEquation.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ClipPlanef(uint plane, IntPtr equation);

		public static void ClipPlanef(uint plane, float[] equation)
		{
			GCHandle handleEquation = GCHandle.Alloc(equation, GCHandleType.Pinned);
			try
			{
				IntPtr equationPtr = handleEquation.AddrOfPinnedObject();
				INTERNAL_ClipPlanef(plane, equationPtr);
			}
			finally
			{
				handleEquation.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_ClipPlanex(uint plane, IntPtr equation);

		public unsafe static void ClipPlanex(uint plane, int[] equation)
		{
			GCHandle handleEquation = GCHandle.Alloc(equation, GCHandleType.Pinned);
			try
			{
				IntPtr equationPtr = handleEquation.AddrOfPinnedObject();
				INTERNAL_ClipPlanex(plane, equationPtr);
			}
			finally
			{
				handleEquation.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color3f(float red, float green, float blue);

		public static void Color3(float red, float green, float blue)
		{
			INTERNAL_Color3f(red, green, blue);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color3fv(IntPtr v);

		public static void Color3fv(float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr vPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Color3fv(vPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color3ub(byte red, byte green, byte blue);

		public static void Color3(byte red, byte green, byte blue)
		{
			INTERNAL_Color3ub(red, green, blue);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_Color3ubv(IntPtr v);

		public unsafe static void Color3(byte[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr vPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Color3ubv(vPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color4f(float red, float green, float blue, float alpha);

		public static void Color4(float red, float green, float blue, float alpha)
		{
			INTERNAL_Color4f(red, green, blue, alpha);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color4fv(IntPtr v);

		public static void Color4fv(float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr vPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Color4fv(vPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color4ub(byte red, byte green, byte blue, byte alpha);

		public static void Color4(byte red, byte green, byte blue, byte alpha)
		{
			INTERNAL_Color4ub(red, green, blue, alpha);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_Color4ubv(IntPtr v);

		public unsafe static void Color4ubv(byte[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr vPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Color4ubv(vPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Color4x(int red, int green, int blue, int alpha);

		public static void Color4(int red, int green, int blue, int alpha)
		{
			INTERNAL_Color4x(red, green, blue, alpha);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ColorMask(bool red, bool green, bool blue, bool alpha);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ColorMaterial(uint face, uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ColorPointer(int size, uint type, int stride, IntPtr pointer);

		private static void ColorPointer<T>(int size, uint type, int stride, T[] pointerToArray)
		{
			GCHandle handlePointer = GCHandle.Alloc(pointerToArray, GCHandleType.Pinned);
			try
			{
				IntPtr pointerPtr = handlePointer.AddrOfPinnedObject();
				INTERNAL_ColorPointer(size, type, stride, pointerPtr);
			}
			finally
			{
				handlePointer.Free();
			}
		}

		public static void ColorPointer(int size, uint type, int stride, uint pointer)
		{
			INTERNAL_ColorPointer(size, type, stride, new IntPtr(pointer));
		}

		public static void ColorPointer(int size, int stride, sbyte[] pointer)
		{
			ColorPointer(size, GL.BYTE, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, byte[] pointer)
		{
			ColorPointer(size, GL.UNSIGNED_BYTE, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, short[] pointer)
		{
			ColorPointer(size, GL.SHORT, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, ushort[] pointer)
		{
			ColorPointer(size, GL.UNSIGNED_SHORT, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, int[] pointer)
		{
			ColorPointer(size, GL.INT, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, uint[] pointer)
		{
			ColorPointer(size, GL.UNSIGNED_INT, stride, pointer);
		}

		public static void ColorPointer(int size, int stride, float[] pointer)
		{
			ColorPointer(size, GL.FLOAT, stride, pointer);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ColorTable(uint target, uint internalformat, int width, uint format, uint type, IntPtr data);

		public static void ColorTable(uint target, uint internalformat, int width, uint format, uint type, byte[] data)
		{
			GCHandle handle = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handle.AddrOfPinnedObject();
				INTERNAL_ColorTable(target, internalformat, width, format, type, dataPtr);
			}
			finally
			{
				handle.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void CompileShader(uint shader);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_CompressedTexImage2D(uint target, int level, uint internalformat, int width, int height, int border, int imageSize, IntPtr data);

		public unsafe static void CompressedTexImage2D(uint target, int level, uint internalformat, int width, int height, int border, int imageSize, byte[] data)
		{
			GCHandle handle = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handle.AddrOfPinnedObject();
				INTERNAL_CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, dataPtr);
			}
			finally
			{
				handle.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void CopyTexImage2D(uint target, int level, uint internalformat, int x, int y, int width, int height, int border);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void CopyTexSubImage2D(uint target, int level, int xoffset, int yoffset, int x, int y, int width, int height);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static uint CreateProgram();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static uint CreateShader(uint shaderType);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void CullFace(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_DeleteBuffers(int n, uint []_buffers);

		public static void DeleteBuffers(uint []_buffers)
		{
			INTERNAL_DeleteBuffers(_buffers.Length, _buffers);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_DeleteFramebuffers(int n, IntPtr framebuffers);

		public static void DeleteFramebuffers(uint[] framebuffers)
		{
			GCHandle handleBuffers = GCHandle.Alloc(framebuffers, GCHandleType.Pinned);
			try
			{
				IntPtr buffersPtr = handleBuffers.AddrOfPinnedObject();
				INTERNAL_DeleteFramebuffers(framebuffers.Length, buffersPtr);
			}
			finally
			{
				handleBuffers.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DeleteLists(uint list, int range);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DeleteProgram(uint prog);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_DeleteRenderbuffers(int n, IntPtr renderbuffers);

		public static void DeleteRenderbuffers(uint[] renderbuffers)
		{
			GCHandle handleBuffers = GCHandle.Alloc(renderbuffers, GCHandleType.Pinned);
			try
			{
				IntPtr buffersPtr = handleBuffers.AddrOfPinnedObject();
				INTERNAL_DeleteFramebuffers(renderbuffers.Length, buffersPtr);
			}
			finally
			{
				handleBuffers.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DeleteShader(uint shad);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_DeleteTextures(int n, IntPtr textures);

		public unsafe static void DeleteTextures(uint[] textures)
		{
			GCHandle handleTextures = GCHandle.Alloc(textures, GCHandleType.Pinned);
			try
			{
				IntPtr texturesPtr = handleTextures.AddrOfPinnedObject();
				INTERNAL_DeleteTextures(textures.Length, texturesPtr);
			}
			finally
			{
				handleTextures.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_DeleteVertexArrays(int n, IntPtr _arrays);

		public unsafe static void DeleteVertexArrays(int n, uint[] _arrays)
		{
			GCHandle handleArrays = GCHandle.Alloc(_arrays, GCHandleType.Pinned);
			try
			{
				IntPtr arraysPtr = handleArrays.AddrOfPinnedObject();
				INTERNAL_Color3fv(arraysPtr);
			}
			finally
			{
				handleArrays.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DepthFunc(uint func);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DepthMask(bool flag);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DepthRange(double nearVal, double farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DepthRangef(float nearVal, float farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DepthRangex(int nearVal, int farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Disable(uint cap);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DisableClientState(uint array);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DisableVertexAttribArray(uint index);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DrawArrays(uint mode, int first, int count);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void DrawArraysInstanced(uint mode, int first, int count, int primcount);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_DrawElements(uint mode, int count, uint type, IntPtr indices);

		private unsafe static void DrawElements<T>(uint mode, int count, uint type, T[] indices)
		{
			GCHandle handleIndices = GCHandle.Alloc(indices, GCHandleType.Pinned);
			try
			{
				IntPtr indicesPtr = handleIndices.AddrOfPinnedObject();
				INTERNAL_DrawElements(mode, count, type, indicesPtr);
			}
			finally
			{
				handleIndices.Free();
			}
		}

		public static void DrawElements(uint mode, int count, uint type, uint indices)
		{
			INTERNAL_DrawElements(mode, count, type, new IntPtr(indices));
		}

		public static void DrawElements(uint mode, byte[] indices)
		{
			DrawElements(mode, indices.Length, GL.UNSIGNED_BYTE, indices);
		}

		public static void DrawElements(uint mode, ushort[] indices)
		{
			DrawElements(mode, indices.Length, GL.UNSIGNED_SHORT, indices);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private unsafe extern static void INTERNAL_DrawElementsBaseVertex(uint mode, int count, uint type, IntPtr _indices, int baseVertex);

		private unsafe static void DrawElementsBaseVertex<T>(uint mode, int count, uint type, T[] _indices, int baseVertex)
		{
			GCHandle handleIndices = GCHandle.Alloc(_indices, GCHandleType.Pinned);
			try
			{
				IntPtr indicesPtr = handleIndices.AddrOfPinnedObject();
				INTERNAL_DrawElementsBaseVertex(mode, count, type, indicesPtr, baseVertex);
			}
			finally
			{
				handleIndices.Free();
			}
		}

		public static void DrawElementsBaseVertex(uint mode, byte[] indices, int baseVertex)
		{
			DrawElementsBaseVertex(mode, indices.Length, GL.UNSIGNED_BYTE, indices, baseVertex);
		}

		public static void DrawElementsBaseVertex(uint mode, ushort[] indices, int baseVertex)
		{
			DrawElementsBaseVertex(mode, indices.Length, GL.UNSIGNED_SHORT, indices, baseVertex);
		}

		public static void DrawElementsBaseVertex(uint mode, uint[] indices, int baseVertex)
		{
			DrawElementsBaseVertex(mode, indices.Length, GL.UNSIGNED_INT, indices, baseVertex);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_DrawElementsInstanced(uint mode, int count, uint type, IntPtr _indices, int primcount);

		private unsafe static void DrawElementsInstanced<T>(uint mode, int count, uint type, T[] _indices, int primcount)
		{
			GCHandle handleIndices = GCHandle.Alloc(_indices, GCHandleType.Pinned);
			try
			{
				IntPtr indicesPtr = handleIndices.AddrOfPinnedObject();
				INTERNAL_DrawElementsInstanced(mode, count, type, indicesPtr, primcount);
			}
			finally
			{
				handleIndices.Free();
			}
		}

		public static void DrawElementsInstanced(uint mode, byte[] indices, int primcount)
		{
			DrawElementsInstanced(mode, indices.Length, GL.UNSIGNED_BYTE, indices, primcount);
		}

		public static void DrawElementsInstanced(uint mode, ushort[] indices, int primcount)
		{
			DrawElementsInstanced(mode, indices.Length, GL.UNSIGNED_SHORT, indices, primcount);
		}

		public static void DrawElementsInstanced(uint mode, uint[] indices, int primcount)
		{
			DrawElementsInstanced(mode, indices.Length, GL.UNSIGNED_INT, indices, primcount);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_DrawRangeElements(uint mode, uint start, uint end, int count, uint type, IntPtr indices);

		private unsafe static void DrawRangeElements<T>(uint mode, uint start, uint end, int count, uint type, T[] indices)
		{
			GCHandle handleIndices = GCHandle.Alloc(indices, GCHandleType.Pinned);
			try
			{
				IntPtr indicesPtr = handleIndices.AddrOfPinnedObject();
				INTERNAL_DrawRangeElements(mode, start, end, count, type, indicesPtr);
			}
			finally
			{
				handleIndices.Free();
			}
		}

		public static void DrawRangeElements(uint mode, uint start, uint end, byte[] indices)
		{
			DrawRangeElements(mode, start, end, indices.Length, GL.UNSIGNED_BYTE, indices);
		}

		public static void DrawRangeElements(uint mode, uint start, uint end, ushort[] indices)
		{
			DrawRangeElements(mode, start, end, indices.Length, GL.UNSIGNED_SHORT, indices);
		}

		public static void DrawRangeElements(uint mode, uint start, uint end, uint[] indices)
		{
			DrawRangeElements(mode, start, end, indices.Length, GL.UNSIGNED_INT, indices);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_DrawRangeElementsBaseVertex(uint mode, uint start, uint end, int count, uint type, IntPtr indices, int basevertex);

		private unsafe static void DrawRangeElementsBaseVertex<T>(uint mode, uint start, uint end, int count, uint type, T[] indices, int basevertex)
		{
			GCHandle handleIndices = GCHandle.Alloc(indices, GCHandleType.Pinned);
			try
			{
				IntPtr indicesPtr = handleIndices.AddrOfPinnedObject();
				INTERNAL_DrawRangeElementsBaseVertex(mode, start, end, count, type, indicesPtr, basevertex);
			}
			finally
			{
				handleIndices.Free();
			}
		}

		public static void DrawRangeElementsBaseVertex(uint mode, uint start, uint end, byte[] indices, int basevertex)
		{
			DrawRangeElementsBaseVertex(mode, start, end, indices.Length, GL.UNSIGNED_BYTE, indices, basevertex);
		}

		public static void DrawRangeElementsBaseVertex(uint mode, uint start, uint end, ushort[] indices, int basevertex)
		{
			DrawRangeElementsBaseVertex(mode, start, end, indices.Length, GL.UNSIGNED_SHORT, indices, basevertex);
		}

		public static void DrawRangeElementsBaseVertex(uint mode, uint start, uint end, uint[] indices, int basevertex)
		{
			DrawRangeElementsBaseVertex(mode, start, end, indices.Length, GL.UNSIGNED_INT, indices, basevertex);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Enable(uint cap);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void EnableClientState(uint array);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void EnableVertexAttribArray(uint index);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void End();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void EndList();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Finish();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Flush();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void FlushMappedBufferRange(uint target, uint offset, uint length);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Fogf(uint pname, float param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_Fogfv(uint pname, IntPtr _params);

		public unsafe static void Fogfv(uint pname, float[] _params)
		{
			GCHandle handleParams = GCHandle.Alloc(_params, GCHandleType.Pinned);
			try
			{
				IntPtr paramsPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Fogfv(pname, paramsPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Fogi(uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Fogx(uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void INTERNAL_Fogxv(uint pname, IntPtr _params);

		public unsafe static void Fogxv(uint pname, int[] _params)
		{
			GCHandle handleParams = GCHandle.Alloc(_params, GCHandleType.Pinned);
			try
			{
				IntPtr paramsPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Fogxv(pname, paramsPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void FramebufferRenderbuffer(uint target, uint attachment, uint renderbuffertarget, uint renderbuffer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void FramebufferTexture(uint target, uint attachment, uint texture, int level);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void FramebufferTexture2D(uint target, uint attachment, uint textarget, uint texture, int level);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void FrontFace(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Frustum(double left, double right, double bottom, double top, double nearVal, double farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Frustumf(float left, float right, float bottom, float top, float nearVal, float farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Frustumx(int left, int right, int bottom, int top, int nearVal, int farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GenBuffers(int n, IntPtr buffers);

		public static uint[] GenBuffers(int n)
		{
			var buffers = new uint[n];
			GCHandle handle = GCHandle.Alloc(buffers, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handle.AddrOfPinnedObject();
				INTERNAL_GenBuffers(buffers.Length, dataPtr);
			}
			finally
			{
				handle.Free();
			}
			return buffers;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void GenerateMipmap(uint target);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GenFramebuffers(int n, IntPtr framebuffers);

		public static uint[] GenFramebuffers(int n)
		{
			uint[] framebuffers = new uint[n];
			GCHandle handleFramebuffers = GCHandle.Alloc(framebuffers, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleFramebuffers.AddrOfPinnedObject();
				INTERNAL_GenFramebuffers(n, dataPtr);
			}
			finally
			{
				handleFramebuffers.Free();
			}
			return framebuffers;
		}


		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static uint GenLists(int range);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GenRenderbuffers(int n, IntPtr renderbuffers);

		public static uint[] GenRenderbuffers(int n)
		{
			uint[] renderbuffers = new uint[n];
			GCHandle handleRenderbuffers = GCHandle.Alloc(renderbuffers, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleRenderbuffers.AddrOfPinnedObject();
				INTERNAL_GenRenderbuffers(n, dataPtr);
			}
			finally
			{
				handleRenderbuffers.Free();
			}
			return renderbuffers;
		}


		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GenTextures(int n, IntPtr textures);

		public static uint[] GenTextures(int n)
		{
			uint[] textures = new uint[n];
			GCHandle handleTextures = GCHandle.Alloc(textures, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleTextures.AddrOfPinnedObject();
				INTERNAL_GenTextures(n, dataPtr);
			}
			finally
			{
				handleTextures.Free();
			}
			return textures;
		}


		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GenVertexArrays(int n, IntPtr res);

		public static uint[] GenVertexArrays(int n)
		{
			uint[] res = new uint[n];
			GCHandle handleRes = GCHandle.Alloc(res, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleRes.AddrOfPinnedObject();
				INTERNAL_GenVertexArrays(n, dataPtr);
			}
			finally
			{
				handleRes.Free();
			}
			return res;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_GetActiveAttrib(uint prog, uint index, int bufSize, ref int length, ref int size, ref uint type, byte* name);

		public static void GetActiveAttrib(uint prog, uint index, int bufSize, ref int length, ref int size, ref uint type, string name)
		{
			// VITATODO: rewrite later
			// INTERNAL_GetActiveAttrib(prog, index, bufSize, ref length, ref size, ref type, null);
			// GCHandle handleLength = GCHandle.Alloc(length, GCHandleType.Pinned);
			// GCHandle handleSize = GCHandle.Alloc(size, GCHandleType.Pinned);
			// GCHandle handleType = GCHandle.Alloc(type, GCHandleType.Pinned);
			// try
			// {
			//     IntPtr lengthPtr = handleLength.AddrOfPinnedObject();
			//     IntPtr sizePtr = handleSize.AddrOfPinnedObject();
			//     IntPtr typePtr = handleType.AddrOfPinnedObject();
			//     INTERNAL_GetActiveAttrib(prog, index, bufSize, lengthPtr, sizePtr, typePtr, name);
			// }
			// finally
			// {
			//     handleLength.Free();
			//     handleSize.Free();
			//     handleType.Free();
			// }
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetActiveUniform(uint prog, uint index, int bufSize, IntPtr length, IntPtr size, IntPtr type, string name);

		public static void GetActiveUniform(uint prog, uint index, int bufSize, int[] length, int[] size, uint[] type, string name)
		{
			// VITATODO: rewrite later
			// GCHandle handleLength = GCHandle.Alloc(length, GCHandleType.Pinned);
			// GCHandle handleSize = GCHandle.Alloc(size, GCHandleType.Pinned);
			// GCHandle handleType = GCHandle.Alloc(type, GCHandleType.Pinned);
			// try
			// {
			//     IntPtr lengthPtr = handleLength.AddrOfPinnedObject();
			//     IntPtr sizePtr = handleSize.AddrOfPinnedObject();
			//     IntPtr typePtr = handleType.AddrOfPinnedObject();
			//     INTERNAL_GetActiveUniform(prog, index, bufSize, lengthPtr, sizePtr, typePtr, name);
			// }
			// finally
			// {
			//     handleLength.Free();
			//     handleSize.Free();
			//     handleType.Free();
			// }
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetAttachedShaders(uint prog, int maxCount, IntPtr count, IntPtr shads);

		public static void GetAttachedShaders(uint prog, int maxCount, int[] count, uint[] shads)
		{
			// VITATODO: rewrite later
			// GCHandle handleCount = GCHandle.Alloc(count, GCHandleType.Pinned);
			// GCHandle handleShads = GCHandle.Alloc(shads, GCHandleType.Pinned);
			// try
			// {
			// 	IntPtr countPtr = handleCount.AddrOfPinnedObject();
			// 	IntPtr shadsPtr = handleShads.AddrOfPinnedObject();
			// 	INTERNAL_GetAttachedShaders(prog, maxCount, countPtr, shadsPtr);
			// }
			// finally
			// {
			// 	handleCount.Free();
			// 	handleShads.Free();
			// }
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static int INTERNAL_GetAttribLocation(uint prog, byte* name);

		public static unsafe int GetAttribLocation(uint prog, string name)
		{
			int utf8NameBufSize = Utf8Size(name);
			byte* utf8Name = stackalloc byte[utf8NameBufSize];
			return INTERNAL_GetAttribLocation(prog, Utf8Encode(name, utf8Name, utf8NameBufSize));
		}

		private static uint SizeForBooleanv(uint pname)
		{
			// VITATODO: write later
			return 0;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetBooleanv(uint pname, IntPtr _params);

		public static bool[] GetBooleanv(uint pname)
		{
			bool[] _params = new bool[SizeForBooleanv(pname)];
			GCHandle handleParams = GCHandle.Alloc(_params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_GetBooleanv(pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
			return _params;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetBufferParameteriv(uint target, uint pname, IntPtr _params);

		private static uint SizeForBufferParameteriv(uint pname)
		{
			// VITATODO: write later
			return 0;
		}

		public static int[] GetBufferParameteriv(uint target, uint pname)
		{
			int[] _params = new int[SizeForBufferParameteriv(pname)];
			GCHandle handleParams = GCHandle.Alloc(_params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_GetBufferParameteriv(target, pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
			return _params;
		}

		private static uint SizeForDoublev(uint pname)
		{
			// VITATODO: write later
			return 0;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetDoublev(uint pname, IntPtr data);

		public static double[] GetDoublev(uint pname)
		{
			double[] data = new double[SizeForDoublev(pname)];
			GCHandle handleData = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleData.AddrOfPinnedObject();
				INTERNAL_GetDoublev(pname, dataPtr);
			}
			finally
			{
				handleData.Free();
			}
			return data;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static uint GetError();

		private static uint SizeForFloatv(uint pname)
		{
			// VITATODO: write later
			return 0;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetFloatv(uint pname, IntPtr data);

		public static void GetFloatv(uint pname)
		{
			float[] data = new float[SizeForFloatv(pname)];
			GCHandle handleData = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleData.AddrOfPinnedObject();
				INTERNAL_GetFloatv(pname, dataPtr);
			}
			finally
			{
				handleData.Free();
			}
		}

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetFramebufferAttachmentParameteriv(uint target, uint attachment, uint pname, int *params);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetIntegerv(uint pname, int *data);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetPointerv(uint pname, void **params);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetProgramBinary(uint program, int bufSize, int *length, uint *binaryFormat, void *binary);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetProgramInfoLog(uint program, int maxLength, int *length, string infoLog);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetProgramiv(uint program, uint pname, ref int iparams);

		public static int GetProgramiv(uint program, uint pname)
		{
			int iparams = 0;
			INTERNAL_GetProgramiv(program, pname, ref iparams);
			return iparams;
		}

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetShaderInfoLog(uint handle, int maxLength, int *length, string infoLog);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetShaderiv(uint handle, uint pname, ref int iparams);

		public static int GetShader(uint handle, uint pname)
		{
			int iparams = 0;
			INTERNAL_GetShaderiv(handle, pname, ref iparams);
			return iparams;
		}

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetShaderSource(uint handle, int bufSize, int *length, string source);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static byte *GetString(uint name);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static byte *GetStringi(uint name, uint index);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetTexEnviv(uint target, uint pname, int *params);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static int GetUniformLocation(uint prog, string name);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetVertexAttribfv(uint index, uint pname, float *params);

		// [MethodImplAttribute(MethodImplOptions.InternalCall)]
		// public extern static void GetVertexAttribiv(uint index, uint pname, int *params);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_GetVertexAttribPointerv(uint index, uint pname, ref IntPtr pointer);

		public static IntPtr GetVertexAttribPointerv(uint index, uint pname)
		{
			IntPtr pointer = IntPtr.Zero;
			INTERNAL_GetVertexAttribPointerv(index, pname, ref pointer);
			return pointer;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Hint(uint target, uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void interleavedArrays(uint format, int stride, IntPtr pointer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool IsEnabled(uint cap);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool IsFramebuffer(uint fb);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool IsProgram(uint program);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool IsRenderbuffer(uint rb);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool IsTexture(uint texture);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Lightfv(uint light, uint pname, IntPtr _params);

		public static void Lightfv(uint light, uint pname, float[] _params)
		{
			GCHandle handleParams = GCHandle.Alloc(_params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Lightfv(light, pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LightModelfv(uint pname, IntPtr @params);

		public static void LightModelfv(uint pname, float[] @params)
		{
			GCHandle handleParams = GCHandle.Alloc(@params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_LightModelfv(pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LightModelxv(uint pname, IntPtr @params);

		public static void LightModelxv(uint pname, int[] @params)
		{
			GCHandle handleParams = GCHandle.Alloc(@params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_LightModelxv(pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Lightxv(uint light, uint pname, IntPtr @params);

		public static void Lightxv(uint light, uint pname, int[] @params)
		{
			GCHandle handleParams = GCHandle.Alloc(@params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Lightxv(light, pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void LineWidth(float width);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void LineWidthx(int width);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void LinkProgram(uint progr);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void LoadIdentity();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LoadMatrixf(IntPtr m);

		public static void LoadMatrix(float[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_LoadMatrixf(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LoadMatrixx(IntPtr m);

		public static void LoadMatrix(int[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_LoadMatrixx(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LoadTransposeMatrixf(IntPtr m);

		public static void LoadTransposeMatrix(float[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_LoadTransposeMatrixf(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_LoadTransposeMatrixx(IntPtr m);

		public static void LoadTransposeMatrix(int[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_LoadTransposeMatrixx(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern unsafe static IntPtr MapBuffer(uint target, uint access);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern unsafe static IntPtr MapBufferRange(uint target, uint offset, uint length, uint access);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Materialfv(uint face, uint pname, IntPtr @params);

		public static void Material(uint face, uint pname, float[] @params)
		{
			GCHandle handleParams = GCHandle.Alloc(@params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Materialfv(face, pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Materialxv(uint face, uint pname, IntPtr @params);

		public static void Material(uint face, uint pname, int[] @params)
		{
			GCHandle handleParams = GCHandle.Alloc(@params, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParams.AddrOfPinnedObject();
				INTERNAL_Materialxv(face, pname, dataPtr);
			}
			finally
			{
				handleParams.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void MatrixMode(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultiTexCoord2f(uint target, float s, float t);

		public static void MultiTexCoord2(uint target, float s, float t)
		{
			INTERNAL_MultiTexCoord2f(target, s, t);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultiTexCoord2fv(uint target, IntPtr f);

		public static void MultiTexCoord2(uint target, float[] f)
		{
			GCHandle handleF = GCHandle.Alloc(f, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleF.AddrOfPinnedObject();
				INTERNAL_MultiTexCoord2fv(target, dataPtr);
			}
			finally
			{
				handleF.Free();
			}
		}


		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultiTexCoord2i(uint target, int s, int t);

		public static void MultiTexCoord2i(uint target, int s, int t)
		{
			INTERNAL_MultiTexCoord2i(target, s, t);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultMatrixf(IntPtr m);

		public static void MultMatrix(float[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_MultMatrixf(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultMatrixx(IntPtr m);

		public static void MultMatrix(int[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_MultMatrixx(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultTransposeMatrixf(IntPtr m);

		public static void MultTransposeMatrix(float[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_MultTransposeMatrixf(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_MultTransposeMatrixx(IntPtr m);

		public static void MultTransposeMatrix(int[] m)
		{
			GCHandle handleM = GCHandle.Alloc(m, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleM.AddrOfPinnedObject();
				INTERNAL_MultTransposeMatrixx(dataPtr);
			}
			finally
			{
				handleM.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void NewList(uint list, uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Normal3f(float x, float y, float z);

		public static void Normal3(float x, float y, float z)
		{
			INTERNAL_Normal3f(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Normal3fv(IntPtr v);

		public static void Normal3(float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Normal3fv(dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Normal3s(short x, short y, short z);

		public static void Normal3(short x, short y, short z)
		{
			INTERNAL_Normal3s(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Normal3x(int x, int y, int z);

		public static void Normal3(int x, int y, int z)
		{
			INTERNAL_Normal3x(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void NormalPointer(uint type, int stride, IntPtr pointer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Ortho(double left, double right, double bottom, double top, double nearVal, double farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Orthof(float left, float right, float bottom, float top, float nearVal, float farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Orthox(int left, int right, int bottom, int top, int nearVal, int farVal);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PixelStorei(uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PointSize(float size);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PointSizex(int size);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PolygonMode(uint face, uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PolygonOffset(float factor, float units);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PolygonOffsetx(int factor, int units);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PopAttrib();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PopMatrix();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ProgramBinary(uint program, uint binaryFormat, IntPtr binary, int length);

		public static void ProgramBinary(uint program, uint binaryFormat, byte[] binary)
		{
			GCHandle handleBinary = GCHandle.Alloc(binary, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleBinary.AddrOfPinnedObject();
				INTERNAL_ProgramBinary(program, binaryFormat, dataPtr, binary.Length);
			}
			finally
			{
				handleBinary.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PushAttrib(uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void PushMatrix();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_ReadPixels(int x, int y, int width, int height, uint format, uint type, IntPtr data);

		private static uint SizeForReadPixels(int x, int y, int width, int height, uint format, uint type)
		{
			// VITATODO: Write later
			return 0;
		}

		public static byte[] ReadPixels(int x, int y, int width, int height, uint format, uint type)
		{
			byte[] data = new byte[0];
			GCHandle handleData = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleData.AddrOfPinnedObject();
				INTERNAL_ReadPixels(x, y, width, height, format, type, dataPtr);
			}
			finally
			{
				handleData.Free();
			}
			return data;
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Rectf(float x1, float y1, float x2, float y2);

		public static void Rect(float x1, float y1, float x2, float y2)
		{
			INTERNAL_Rectf(x1, y1, x2, y2);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Recti(int x1, int y1, int x2, int y2);

		public static void Rect(int x1, int y1, int x2, int y2)
		{
			INTERNAL_Recti(x1, y1, x2, y2);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ReleaseShaderCompiler();

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void RenderbufferStorage(uint target, uint internalformat, int width, int height);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Rotated(double anE, double x, double y, double z);

		public static void Rotate(double anE, double x, double y, double z)
		{
			INTERNAL_Rotated(anE, x, y ,z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Rotatef(float anE, float x, float y, float z);

		public static void Rotate(float anE, float x, float y, float z)
		{
			INTERNAL_Rotatef(anE, x, y ,z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Rotatex(int anE, int x, int y, int z);

		public static void Rotate(int anE, int x, int y, int z)
		{
			INTERNAL_Rotatex(anE, x, y ,z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Scaled(double x, double y, double z);

		public static void Scale(double x, double y, double z)
		{
			INTERNAL_Scaled(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Scalef(float x, float y, float z);

		public static void Scale(float x, float y, float z)
		{
			INTERNAL_Scalef(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Scalex(int x, int y, int z);

		public static void Scale(int x, int y, int z)
		{
			INTERNAL_Scalex(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Scissor(int x, int y, int width, int height);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void ShadeModel(uint mode);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void INTERNAL_ShaderBinary(int count, IntPtr handles, uint binaryFormat, IntPtr binary, int length);

		public static void ShaderBinary(int count, uint[] handles, uint binaryFormat, byte[] binary, int length)
		{
			GCHandle handleHandles = GCHandle.Alloc(handles, GCHandleType.Pinned);
			GCHandle handleBinary = GCHandle.Alloc(binary, GCHandleType.Pinned);
			try
			{
				IntPtr handlesPtr = handleHandles.AddrOfPinnedObject();
				IntPtr binaryPtr = handleBinary.AddrOfPinnedObject();
				INTERNAL_ShaderBinary(count, handlesPtr, binaryFormat, binaryPtr, length);
			}
			finally
			{
				handleHandles.Free();
				handleBinary.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern unsafe static void INTERNAL_ShaderSource(uint shader, int count, byte** strs, int* lengths);

		public static unsafe void ShaderSource(uint shader, string[] strs)
		{
			byte** stackStrs = stackalloc byte*[strs.Length];
			for(int i = 0; i < strs.Length; ++i)
			{
				int utf8StrBufSize = Utf8Size(strs[i]);
				byte* utf8Str = stackalloc byte[utf8StrBufSize];
				stackStrs[i] = Utf8Encode(strs[i], utf8Str, utf8StrBufSize);
			}
			INTERNAL_ShaderSource(shader, 1, stackStrs, null);
		}

		public static unsafe void ShaderSource(uint shader, string str)
		{
			int utf8StrBufSize = Utf8Size(str);
			byte* utf8Str = stackalloc byte[utf8StrBufSize];
			byte* strEncoded = Utf8Encode(str, utf8Str, utf8StrBufSize);	
			INTERNAL_ShaderSource(shader, 1, &strEncoded, null);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilFunc(uint func, int iref, uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilFuncSeparate(uint face, uint func, int iref, uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilMask(uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilMaskSeparate(uint face, uint mask);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilOp(uint sfail, uint dpfail, uint dppass);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void StencilOpSeparate(uint face, uint sfail, uint dpfail, uint dppass);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexCoord2f(float s, float t);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_TexCoord2fv(IntPtr f);

		public static void TexCoord2fv(float[] f)
		{
			GCHandle handleF = GCHandle.Alloc(f, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleF.AddrOfPinnedObject();
				INTERNAL_TexCoord2fv(dataPtr);
			}
			finally
			{
				handleF.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexCoord2i(int s, int t);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexCoord2s(short s, short t);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexCoordPointer(int size, uint type, int stride, IntPtr pointer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexEnvf(uint target, uint pname, float param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_TexEnvfv(uint target, uint pname, IntPtr param);

		public static void TexEnvfv(uint target, uint pname, float[] param)
		{
			GCHandle handleParam = GCHandle.Alloc(param, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParam.AddrOfPinnedObject();
				INTERNAL_TexEnvfv(target, pname, dataPtr);
			}
			finally
			{
				handleParam.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexEnvi(uint target, uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexEnvx(uint target, uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_TexEnvxv(uint target, uint pname, IntPtr param);

		public static void TexEnvxv(uint target, uint pname, int[] param)
		{
			GCHandle handleParam = GCHandle.Alloc(param, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParam.AddrOfPinnedObject();
				INTERNAL_TexEnvxv(target, pname, dataPtr);
			}
			finally
			{
				handleParam.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern unsafe static void INTERNAL_TexImage2D(uint target, int level, int internalFormat, int width, int height, int border, uint format, uint type, IntPtr data);

		public unsafe static void TexImage2D(uint target, int level, int internalFormat, int width, int height, int border, uint format, uint type, byte[] data)
		{
			GCHandle handleData = GCHandle.Alloc(data, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleData.AddrOfPinnedObject();
				INTERNAL_TexImage2D(target, level, internalFormat, width, height, border, format, type, dataPtr);
			}
			finally
			{
				handleData.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexParameterf(uint target, uint pname, float param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexParameteri(uint target, uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_TexParameteriv(uint target, uint pname, IntPtr param);

		public static void TexParameter(uint target, uint pname, int[] param)
		{
			GCHandle handleParam = GCHandle.Alloc(param, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleParam.AddrOfPinnedObject();
				INTERNAL_TexParameteriv(target, pname, dataPtr);
			}
			finally
			{
				handleParam.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void TexParameterx(uint target, uint pname, int param);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_TexSubImage2D(uint target, int level, int xoffset, int yoffset, int width, int height, uint format, uint type, IntPtr pixels);

		public static void TexSubImage2D(uint target, int level, int xoffset, int yoffset, int width, int height, uint format, uint type, byte[] pixels)
		{
			GCHandle handlePixels = GCHandle.Alloc(pixels, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handlePixels.AddrOfPinnedObject();
				INTERNAL_TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, dataPtr);
			}
			finally
			{
				handlePixels.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Translated(double x, double y, double z);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Translatef(float x, float y, float z);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Translatex(int x, int y, int z);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform1f(int location, float v0);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform1fv(int location, int count, IntPtr value);

		public static void Uniform1(int location, int count, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform1fv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform1i(int location, int v0);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform1iv(int location, int count, IntPtr value);

		public static void Uniform1(int location, int count, int[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform1iv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform2f(int location, float v0, float v1);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform2fv(int location, int count, IntPtr value);

		public static void Uniform2(int location, int count, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform2fv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform2i(int location, int v0, int v1);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform2iv(int location, int count, IntPtr value);

		public static void Uniform2(int location, int count, int[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform2iv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform3f(int location, float v0, float v1, float v2);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform3fv(int location, int count, IntPtr value);

		public static void Uniform3(int location, int count, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform3fv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform3i(int location, int v0, int v1, int v2);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform3iv(int location, int count, IntPtr value);

		public static void Uniform3(int location, int count, int[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform3iv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform4f(int location, float v0, float v1, float v2, float v3);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform4fv(int location, int count, IntPtr value);

		public static void Uniform4(int location, int count, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform4fv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Uniform4i(int location, int v0, int v1, int v2, int v3);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Uniform4iv(int location, int count, IntPtr value);

		public static void Uniform4(int location, int count, int[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_Uniform4iv(location, count, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_UniformMatrix2fv(int location, int count, bool transpose, IntPtr value);

		public static void UniformMatrix2(int location, int count, bool transpose, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_UniformMatrix2fv(location, count, transpose, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_UniformMatrix3fv(int location, int count, bool transpose, IntPtr value);

		public static void UniformMatrix3(int location, int count, bool transpose, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_UniformMatrix3fv(location, count, transpose, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_UniformMatrix4fv(int location, int count, bool transpose, IntPtr value);

		public static void UniformMatrix4(int location, int count, bool transpose, float[] value)
		{
			GCHandle handleValue = GCHandle.Alloc(value, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleValue.AddrOfPinnedObject();
				INTERNAL_UniformMatrix4fv(location, count, transpose, dataPtr);
			}
			finally
			{
				handleValue.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static bool UnmapBuffer(uint target);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void UseProgram(uint program);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Vertex2f(float x, float y);

		public static void Vertex2(float x, float y)
		{
			INTERNAL_Vertex2f(x, y);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Vertex2i(int x, int y);

		public static void Vertex2(int x, int y)
		{
			INTERNAL_Vertex2i(x, y);
		}
		
		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Vertex3f(float x, float y, float z);

		public static void Vertex3(float x, float y, float z)
		{
			INTERNAL_Vertex3f(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void INTERNAL_Vertex3i(int x, int y, int z);

		public static void Vertex3(int x, int y, int z)
		{
			INTERNAL_Vertex3i(x, y, z);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_Vertex3fv(IntPtr v);

		public static void Vertex3(float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_Vertex3fv(dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void VertexAttrib1f(uint index, float v0);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_VertexAttrib1fv(uint index, IntPtr v);

		public static void VertexAttrib1(uint index, float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_VertexAttrib1fv(index, dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void VertexAttrib2f(uint index, float v0, float v1);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_VertexAttrib2fv(uint index, IntPtr v);

		public static void VertexAttrib2(uint index, float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_VertexAttrib2fv(index, dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void VertexAttrib3f(uint index, float v0, float v1, float v2);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_VertexAttrib3fv(uint index, IntPtr v);

		public static void VertexAttrib3(uint index, float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_VertexAttrib3fv(index, dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void VertexAttrib4f(uint index, float v0, float v1, float v2, float v3);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_VertexAttrib4fv(uint index, IntPtr v);

		public static void VertexAttrib4(uint index, float[] v)
		{
			GCHandle handleV = GCHandle.Alloc(v, GCHandleType.Pinned);
			try
			{
				IntPtr dataPtr = handleV.AddrOfPinnedObject();
				INTERNAL_VertexAttrib4fv(index, dataPtr);
			}
			finally
			{
				handleV.Free();
			}
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void VertexAttribPointer(uint index, int size, uint type, bool normalized, int stride, IntPtr pointer);

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		private extern static void INTERNAL_VertexPointer(int size, uint type, int stride, IntPtr pointer);

		private static void VertexPointer<T>(int size, uint type, int stride, T[] pointerToArray)
		{
			GCHandle handlePointer = GCHandle.Alloc(pointerToArray, GCHandleType.Pinned);
			try
			{
				IntPtr pointerPtr = handlePointer.AddrOfPinnedObject();
				INTERNAL_VertexPointer(size, type, stride, pointerPtr);
			}
			finally
			{
				handlePointer.Free();
			}
		}

		public static void VertexPointer(int size, uint type, int stride, uint pointer)
		{
			INTERNAL_VertexPointer(size, type, stride, new IntPtr(pointer));
		}

		public static void VertexPointer(int size, int stride, short[] pointer)
		{
			VertexPointer(size, GL.SHORT, stride, pointer);
		}

		public static void VertexPointer(int size, int stride, int[] pointer)
		{
			VertexPointer(size, GL.INT, stride, pointer);
		}

		public static void VertexPointer(int size, int stride, float[] pointer)
		{
			VertexPointer(size, GL.FLOAT, stride, pointer);
		}

		[MethodImplAttribute(MethodImplOptions.InternalCall)]
		public extern static void Viewport(int x, int y, int width, int height);
	#endregion
	}
}