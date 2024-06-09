using System;
using System.Runtime.CompilerServices;
using System.Threading;
using VitaSdk.Core;
using VitaSdk.Libs.VitaGL;

public class Program
{
    private static readonly string logPath = "ux0:data/VMLVGLTriangles.GL.log";

    public static int Main()
    {
        DebugGL.LogPath = logPath;
        VGL.InitExtended(0, 960, 544, 0x800000, 0);

        SceCtrl.SetSamplingMode(SceCtrl.PadInputMode.AnalogWide);

        string vertexSrc = @"
            attribute vec2 a_position;
            void main() {
                gl_Position = vec4(a_position, 0, 1);
            }
        ";

        string fragmentSrc = @"
            void main() {
                gl_FragColor = vec4(0, 1, 0, 1);  // green
            }
        ";

        uint vertexShader = GL.CreateShader(GL.VERTEX_SHADER);
        GL.ShaderSource(vertexShader, vertexSrc);
        DebugGL.LogError("glShaderSource vertex");
        GL.CompileShader(vertexShader);
        DebugGL.LogError("glCompileShader vertex");

        uint fragmentShader = GL.CreateShader(GL.FRAGMENT_SHADER);
        GL.ShaderSource(fragmentShader, fragmentSrc);
        DebugGL.LogError("glCompileShader fragment");
        GL.CompileShader(fragmentShader);
        DebugGL.LogError("glCompileShader fragment");

        int compiled = GL.GetShader(vertexShader, GL.COMPILE_STATUS);
        DebugGL.LogError("glGetShaderiv shader");
        if (compiled == GL.FALSE) {
            Console.WriteLine("Vertex shader compilation failed");
            return -1;
        }

        compiled = GL.GetShader(fragmentShader, GL.COMPILE_STATUS);
        DebugGL.LogError("glGetShaderiv fragment");
        if (compiled == GL.FALSE) {
            Console.WriteLine("Fragment shader compilation failed");
            return -1;
        }

        uint program = GL.CreateProgram();
        DebugGL.LogError("glCreateProgram");
        GL.AttachShader(program, vertexShader);
        DebugGL.LogError("glAttachShader vertex");
        GL.AttachShader(program, fragmentShader);
        DebugGL.LogError("glAttachShader fragment");
        GL.LinkProgram(program);
        DebugGL.LogError("glLinkProgram");

        int linked = GL.GetProgramiv(program, GL.LINK_STATUS);
        DebugGL.LogError("glGetProgramiv linker");
        if (linked == GL.FALSE) {
            
            Console.WriteLine("Program linking failed");
            return -1;
        }

        GL.UseProgram(program);
        DebugGL.LogError("glUseProgram");
    
        // VITATODO: see why float arrays are not working
        // float[] vertices = {
        //     -1.0f, -1.0f,
        //     1.0f, -1.0f,
        //     -1.0f, 1.0f,
        //     -1.0f, 1.0f,
        //     1.0f, -1.0f,
        //     1.0f, 1.0f
        // };

        byte[] vertices = {
            0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f
        };

        uint[] vbos = GL.GenBuffers(1);
        DebugGL.LogMessage($"vbos.Length = {vbos.Length}");
        DebugGL.LogError("glGenBuffers");
        uint vbo = vbos[0];
        DebugGL.LogMessage($"vbo = {vbo}");
        GL.BindBuffer(GL.ARRAY_BUFFER, vbo);
        DebugGL.LogError("glBindBuffer");
        GL.BufferData(GL.ARRAY_BUFFER, vertices, GL.STATIC_DRAW);
        DebugGL.LogError("glBufferData");

        int positionLocation = GL.GetAttribLocation(program, "a_position");
        DebugGL.LogMessage($"positionLocation = {positionLocation}");
        DebugGL.LogError("glGetAttribLocation");
        GL.EnableVertexAttribArray((uint)positionLocation);
        DebugGL.LogError("glEnableVertexAttribArray");
        GL.VertexAttribPointer((uint)positionLocation, 2, GL.FLOAT, false, 0, IntPtr.Zero);
        DebugGL.LogError("glVertexAttribPointer");

        GL.ClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        DebugGL.LogError("glClearColor");
        GL.Clear(GL.COLOR_BUFFER_BIT);
        DebugGL.LogError("glClear");
        GL.DrawArrays(GL.TRIANGLES, 0, 6);
        DebugGL.LogError("glDrawArrays");

        var pad = new SceCtrl.Data();

        VGL.SwapBuffers(false);

        for(;;) {

            SceCtrl.PeekBufferPositive(0, ref pad, 1);

            if (pad.buttons != 0) {
                break;
            }

            Thread.Sleep(10);
        }

        GL.DeleteShader(vertexShader);
        GL.DeleteShader(fragmentShader);
        GL.DeleteProgram(program);
        GL.DeleteBuffers(vbos);

        VGL.End();

        return 0;
    }
}
