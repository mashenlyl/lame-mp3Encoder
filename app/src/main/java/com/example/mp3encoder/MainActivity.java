package com.example.mp3encoder;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //int ret = Mp3EncoderTest.init("/data/local/tmp/123.pcm", 2, 1411200, 44100, "/data/local/tmp/ff.mp3");
        int ret = Mp3EncoderTest.init("/data/data/com.example.mp3encoder/123.pcm", 2, 1411200, 44100, "/data/data/com.example.mp3encoder/ff.mp3");
        if (ret == 0) {
            Mp3EncoderTest.encode();
            Mp3EncoderTest.destroy();
        } else {
            Log.e("liyaoli","liyaoli init error");
        }
    }
}
