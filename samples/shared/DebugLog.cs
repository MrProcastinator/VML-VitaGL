using System;
using System.IO;
using VitaSdk.Libs.VitaGL;

public class DebugGL
{
    public static string LogPath { get; set; }

    private static string TranslateError(uint error)
    {
        switch(error) 
        {
            case 0: return "GL_NO_ERROR";
            case 0x0500: return "GL_INVALID_ENUM";
            case 0x0501: return "GL_INVALID_VALUE";
            case 0x0502: return "GL_INVALID_OPERATION";
            case 0x0505: return "GL_OUT_OF_MEMORY";
            case 0x0506: return "GL_INVALID_FRAMEBUFFER_OPERATION";
            default: return $"Unknown OpenGL error ({error})";
        }
    }

    public static void LogMessage(string message)
    {
        if(!string.IsNullOrEmpty(message))
        {
            using (StreamWriter writer = new StreamWriter(LogPath, true))
            {
                writer.WriteLine($"--- {message}");
            }
        }
    }

    public static void LogError(string operation)
    {
#if LOG_ERRORS
        if(!string.IsNullOrEmpty(operation))
        {
            using (StreamWriter writer = new StreamWriter(LogPath, true))
            {
                var error = GL.GetError();
                var times = 1;
                while(error != 0)
                {
                    writer.WriteLine($"--- OpenGL Error at last operation [{operation}] #{times}: {TranslateError(error)}");
                    times++;
                    error = GL.GetError();
                }
                if(times == 1)
                {
                    writer.WriteLine($"--- No OpenGL Errors at last operation [{operation}]");
                }
            }
        }
#endif
    }
}
