APP_STL := c++_static
APP_OPTIM := release
APP_CPPFLAGS += -frtti
APP_ABI := armeabi-v7a
APP_PLATFORM := android-14

# not compile corefundation library for android.
# corefoundation
APP_MODULES := JavaScriptCore ejecta 
