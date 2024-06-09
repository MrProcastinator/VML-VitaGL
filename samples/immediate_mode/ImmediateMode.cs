using VitaSdk.Libs.VitaGL;
using System;

public class Program
{
    private static string logPath = "ux0:data/VMLVGLImmediateMode.GL.log";

    public static int Main()
    {
        DebugGL.LogPath = logPath;

        // Initializing graphics device
        VGL.Init(0x800000);
        DebugGL.LogError("vglInit");

        // Setting screen clear color
        GL.ClearColor(0.0f, 0.0f, 0.0f, 0.0f);
        DebugGL.LogError("glClearColor");

        // Initializing mvp matrix with an orthogonal full screen matrix
        GL.MatrixMode(GL.PROJECTION);
        DebugGL.LogError("glMatrixMode projection");

        GL.LoadIdentity();
        DebugGL.LogError("glLoadIdentity projection");

        GL.Ortho(0, 960, 544, 0, -1, 1);
        DebugGL.LogError("glOrtho");

        GL.MatrixMode(GL.MODELVIEW);
        DebugGL.LogError("glMatrixMode modelview");

        GL.LoadIdentity();
        DebugGL.LogError("glLoadIdentity modelview");

        // Main loop
        while (true)
        {
            // Clearing screen
            GL.Clear(GL.COLOR_BUFFER_BIT);
            DebugGL.LogError("glClear");

            // Drawing a quad with immediate mode
            GL.Begin(GL.QUADS);
            DebugGL.LogError("glBegin");

            GL.Color3(1.0f, 0.0f, 0.0f);
            DebugGL.LogError("glColor3 red");

            GL.Vertex3(400, 0, 0);
            DebugGL.LogError("glVertex3 1");

            GL.Color3(1.0f, 1.0f, 0.0f);
            DebugGL.LogError("glColor3 yellow");

            GL.Vertex3(800, 0, 0);
            DebugGL.LogError("glVertex3 2");

            GL.Color3(0.0f, 1.0f, 0.0f);
            DebugGL.LogError("glColor3 green");

            GL.Vertex3(800, 400, 0);
            DebugGL.LogError("glVertex3 3");

            GL.Color3(1.0f, 0.0f, 1.0f);
            DebugGL.LogError("glColor3 magenta");

            GL.Vertex3(400, 400, 0);
            DebugGL.LogError("glVertex3 4");

            GL.End();
            DebugGL.LogError("glEnd");

            // Performing buffer swap
            VGL.SwapBuffers(false);
            DebugGL.LogError("vglSwapBuffers");
        }

        // Terminating graphics device
        VGL.End();
        DebugGL.LogError("vglEnd");

        return 0;
    }
}
