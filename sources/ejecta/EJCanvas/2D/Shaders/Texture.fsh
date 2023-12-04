
#ifdef GL_ES
	varying lowp vec4 vColor;
	varying highp vec2 vUv;
#else
	varying vec2 vUv;
	varying vec4 vColor;
#endif

uniform sampler2D texture;

void main() {
	gl_FragColor = texture2D(texture, vUv) * vColor;
}
