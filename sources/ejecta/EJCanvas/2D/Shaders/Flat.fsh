#ifdef GL_ES
	varying lowp vec4 vColor;
	varying highp vec2 vUv;
#else
	varying vec4 vColor;
	varying vec2 vUv;
#endif

void main() {
	gl_FragColor = vColor;
}
