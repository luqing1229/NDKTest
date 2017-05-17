package com.example.cmcc.ndktest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        String str = JniUtils.getStringFormC();
        String ming = "13550110110";
        String encrypmi = JniUtils.encode(ming);
        String decrypmi = JniUtils.decode(encrypmi);
        tv.setText("来自c的string是:" +  str + "\n加密前：" + ming + "\n加密后：" + encrypmi + "\n解密后：" + decrypmi);

    }
}
