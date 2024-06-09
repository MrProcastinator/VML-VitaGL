using VitaSdk.Libs.VitaGL;
using VitaSdk.Core;

public class Program
{
    private static readonly string logPath = "ux0:data/VMLVGLVertexArray.GL.log";

    private static float[] colors = { 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    private static float[] vertices = { 100, 100, 0, 150, 100, 0, 100, 150, 0, 150, 150, 0 };
    private static ushort[] indices = { 0, 1, 2, 1, 2, 3 };

    public static int Main()
    {
        DebugGL.LogPath = logPath;
        // Initializing graphics device
        VGL.Init(0x800000);

        // Setting screen clear color
        GL.ClearColor(0.50f, 0.0f, 0.0f, 1.0f);
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
        for (;;)
        {
            // Clearing screen
            GL.Clear(GL.COLOR_BUFFER_BIT);
            DebugGL.LogError("glClear");

            // Enabling vertex and color arrays
            GL.EnableClientState(GL.VERTEX_ARRAY);
            DebugGL.LogError("glEnableClientState vertex");

            GL.EnableClientState(GL.COLOR_ARRAY);
            DebugGL.LogError("glEnableClientState color");

            // Loading vertex and color arrays
            GL.VertexPointer(3, 0, vertices);
            DebugGL.LogError("glVertexPointer vertices");

            GL.ColorPointer(3, 0, colors);
            DebugGL.LogError("glColorPointer colors");

            // Performing drawing
            GL.DrawElements(GL.TRIANGLES, indices);
            DebugGL.LogError("glDrawElements");

            // Disabling vertex and color arrays
            GL.DisableClientState(GL.VERTEX_ARRAY);
            DebugGL.LogError("glDisableClientState vertex");

            GL.DisableClientState(GL.COLOR_ARRAY);
            DebugGL.LogError("glDisableClientState color");

            // Performing buffer swap
            VGL.SwapBuffers(false);
        }

        // Terminating graphics device
        VGL.End();

        return 0;
    }
}
