package com.example.mp3encoder;

public class Mp3EncoderTest {

    static {
        System.loadLibrary("audioencoder");
    }

    public static native void encode();
    public static native int init(String pcmPath, int audioChannels, int bitRate, int
                                  sampleRate, String mp3Path);
    public static native void destroy();
}
