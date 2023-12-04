attribute vec2 pos;
attribute vec2 uv;
attribute vec4 color;


#ifdef GL_ES
	varying lowp vec4 vColor;
	varying highp vec2 vUv;
	uniform highp vec2 screen;
#else
	varying vec4 vColor;
	varying vec2 vUv;
	uniform vec2 screen;
#endif

void main() {
	vColor = color;
	vUv = uv;
	
    gl_Position = vec4(pos * (vec2(2,2)/screen) - clamp(screen,-1.0,1.0), 0.0, 1.0);
}
