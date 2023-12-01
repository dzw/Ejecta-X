set(PROJECT_NAME Ejecta-X)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "ReadMe.txt"
)
source_group("" FILES ${no_group_source_files})

set(ejecta
    "../../../sources/ejecta/EJApp.cpp"
    "../../../sources/ejecta/EJApp.h"
    "../../../sources/ejecta/EJBindingBase.cpp"
    "../../../sources/ejecta/EJBindingBase.h"
    "../../../sources/ejecta/EJBindingEjectaCore.cpp"
    "../../../sources/ejecta/EJBindingEjectaCore.h"
    "../../../sources/ejecta/EJBindingEventedBase.cpp"
    "../../../sources/ejecta/EJBindingEventedBase.h"
    "../../../sources/ejecta/EJConvert.cpp"
    "../../../sources/ejecta/EJConvert.h"
    "../../../sources/ejecta/EJSharedOpenGLContext.h"
    "../../../sources/ejecta/EJTimer.cpp"
    "../../../sources/ejecta/EJTimer.h"
)
source_group("ejecta" FILES ${ejecta})

set(ejecta__EJAudio
    "../../../sources/ejecta/EJAudio/EJBindingAudio.cpp"
    "../../../sources/ejecta/EJAudio/EJBindingAudio.h"
)
source_group("ejecta\\EJAudio" FILES ${ejecta__EJAudio})

set(ejecta__EJCanvas
    "../../../sources/ejecta/EJCanvas/EJBindingCanvas.cpp"
    "../../../sources/ejecta/EJCanvas/EJBindingCanvas.h"
    "../../../sources/ejecta/EJCanvas/EJBindingImage.cpp"
    "../../../sources/ejecta/EJCanvas/EJBindingImage.h"
    "../../../sources/ejecta/EJCanvas/EJCanvasContext.cpp"
    "../../../sources/ejecta/EJCanvas/EJCanvasContext.h"
    "../../../sources/ejecta/EJCanvas/EJTexture.cpp"
    "../../../sources/ejecta/EJCanvas/EJTexture.h"
)
source_group("ejecta\\EJCanvas" FILES ${ejecta__EJCanvas})

set(ejecta__EJCanvas__2D
    "../../../sources/ejecta/EJCanvas/2D/EJBindingImageData.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJBindingImageData.h"
    "../../../sources/ejecta/EJCanvas/2D/EJCanvasContextScreen.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJCanvasContextScreen.h"
    "../../../sources/ejecta/EJCanvas/2D/EJCanvasContextTexture.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJCanvasContextTexture.h"
    "../../../sources/ejecta/EJCanvas/2D/EJFont.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJFont.h"
    "../../../sources/ejecta/EJCanvas/2D/EJGLProgram2D.h"
    "../../../sources/ejecta/EJCanvas/2D/EJImageData.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJImageData.h"
    "../../../sources/ejecta/EJCanvas/2D/EJPath.cpp"
    "../../../sources/ejecta/EJCanvas/2D/EJPath.h"
    "Ejecta-X.cpp"
    "Ejecta-X.h"
)
source_group("ejecta\\EJCanvas\\2D" FILES ${ejecta__EJCanvas__2D})

set(ejecta__EJCocoa
    "../../../sources/ejecta/EJCocoa/CGAffineTransform.cpp"
    "../../../sources/ejecta/EJCocoa/CGAffineTransform.h"
    "../../../sources/ejecta/EJCocoa/NSArray.cpp"
    "../../../sources/ejecta/EJCocoa/NSArray.h"
    "../../../sources/ejecta/EJCocoa/NSAutoreleasePool.cpp"
    "../../../sources/ejecta/EJCocoa/NSAutoreleasePool.h"
    "../../../sources/ejecta/EJCocoa/NSCache.cpp"
    "../../../sources/ejecta/EJCocoa/NSCache.h"
    "../../../sources/ejecta/EJCocoa/NSDictionary.cpp"
    "../../../sources/ejecta/EJCocoa/NSDictionary.h"
    "../../../sources/ejecta/EJCocoa/NSGeometry.cpp"
    "../../../sources/ejecta/EJCocoa/NSGeometry.h"
    "../../../sources/ejecta/EJCocoa/NSInteger.h"
    "../../../sources/ejecta/EJCocoa/NSNS.cpp"
    "../../../sources/ejecta/EJCocoa/NSNS.h"
    "../../../sources/ejecta/EJCocoa/NSObject.cpp"
    "../../../sources/ejecta/EJCocoa/NSObject.h"
    "../../../sources/ejecta/EJCocoa/NSObjectFactory.cpp"
    "../../../sources/ejecta/EJCocoa/NSObjectFactory.h"
    "../../../sources/ejecta/EJCocoa/NSSet.cpp"
    "../../../sources/ejecta/EJCocoa/NSSet.h"
    "../../../sources/ejecta/EJCocoa/NSString.cpp"
    "../../../sources/ejecta/EJCocoa/NSString.h"
    "../../../sources/ejecta/EJCocoa/NSValue.cpp"
    "../../../sources/ejecta/EJCocoa/NSValue.h"
    "../../../sources/ejecta/EJCocoa/NSZone.cpp"
    "../../../sources/ejecta/EJCocoa/NSZone.h"
    "../../../sources/ejecta/EJCocoa/UIFont.h"
)
source_group("ejecta\\EJCocoa" FILES ${ejecta__EJCocoa})

set(ejecta__EJCocoa__support
    "../../../sources/ejecta/EJCocoa/support/nsCArray.cpp"
    "../../../sources/ejecta/EJCocoa/support/nsCArray.h"
    "../../../sources/ejecta/EJCocoa/support/nsConfig.h"
    "../../../sources/ejecta/EJCocoa/support/NSEventType.h"
    "../../../sources/ejecta/EJCocoa/support/nsMacros.h"
    "../../../sources/ejecta/EJCocoa/support/NSPlatformConfig.h"
    "../../../sources/ejecta/EJCocoa/support/NSPlatformDefine.h"
    "../../../sources/ejecta/EJCocoa/support/NSPlatformMacros.h"
    "../../../sources/ejecta/EJCocoa/support/uthash.h"
    "../../../sources/ejecta/EJCocoa/support/utlist.h"
)
source_group("ejecta\\EJCocoa\\support" FILES ${ejecta__EJCocoa__support})

set(ejecta__EJUtils
    "../../../sources/ejecta/EJUtils/EJBindingHttpRequest.cpp"
    "../../../sources/ejecta/EJUtils/EJBindingHttpRequest.h"
    "../../../sources/ejecta/EJUtils/EJBindingLocalStorage.cpp"
    "../../../sources/ejecta/EJUtils/EJBindingLocalStorage.h"
    "../../../sources/ejecta/EJUtils/EJBindingTouchInput.cpp"
    "../../../sources/ejecta/EJUtils/EJBindingTouchInput.h"
    "../../../sources/ejecta/EJUtils/EJFile.cpp"
    "../../../sources/ejecta/EJUtils/EJFile.h"
)
source_group("ejecta\\EJUtils" FILES ${ejecta__EJUtils})

set(
    "../../../sources/lib/lodefreetype/lodefreetype.h"
    "../../../sources/lib/lodejpeg/lodejpeg.h"
    "../../../sources/lib/lodepng/lodepng.h"
    "Resource.h"
    "stdafx.h"
    "targetver.h"
)
source_group("头文件" FILES ${})

set(
    "../../../sources/ejecta/EJCanvas/2D/EJGLProgram2D.cpp"
    "../../../sources/ejecta/EJSharedOpenGLContext.cpp"
    "../../../sources/lib/lodefreetype/lodefreetype.cpp"
    "../../../sources/lib/lodejpeg/lodejpeg.cpp"
    "../../../sources/lib/lodepng/lodepng.cpp"
    "stdafx.cpp"
)
source_group("源文件" FILES ${})

set(
    "Ejecta-X.ico"
    "small.ico"
)
source_group("资源文件" FILES ${})

set(ALL_FILES
    ${no_group_source_files}
    ${ejecta}
    ${ejecta__EJAudio}
    ${ejecta__EJCanvas}
    ${ejecta__EJCanvas__2D}
    ${ejecta__EJCocoa}
    ${ejecta__EJCocoa__support}
    ${ejecta__EJUtils}
    ${}
    ${}
    ${}
)

################################################################################
# Target
################################################################################
add_executable(${PROJECT_NAME} ${ALL_FILES})

target_precompile_headers(${PROJECT_NAME} PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/stdafx.h>"
)

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE EjectaX)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
set_target_properties(${PROJECT_NAME} PROPERTIES
    INTERPROCEDURAL_OPTIMIZATION_RELEASEMULTITHREADED  "TRUE"
    INTERPROCEDURAL_OPTIMIZATION_RELEASESINGLETHREADED "TRUE"
    INTERPROCEDURAL_OPTIMIZATION_RELEASE               "TRUE"
)
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
    $<$<CONFIG:DebugMultithreaded>:
        MultiThreadedDebugDLL
    >
    $<$<CONFIG:DebugSinglethreaded>:
        MultiThreadedDebugDLL
    >
    $<$<CONFIG:Debug>:
        MultiThreadedDebugDLL
    >
    $<$<NOT:$<OR:$<CONFIG:DebugMultithreaded>,$<CONFIG:DebugSinglethreaded>,$<CONFIG:Debug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
)
set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Include directories
################################################################################
target_include_directories(${PROJECT_NAME} PUBLIC
    "$<$<CONFIG:DebugMultithreaded>:"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../library/win32/pthread"
    ">"
    "$<$<CONFIG:DebugSinglethreaded>:"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../library/win32/pthread"
    ">"
    "$<$<CONFIG:Debug>:"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../library/win32/pthread"
    ">"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../sources/ejecta"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../sources/lib/lodejpeg"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../sources/lib/lodepng"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../sources/lib/lodefreetype"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../sources/lib/uriparser"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../library/win32"
)

################################################################################
# Compile definitions
################################################################################
target_compile_definitions(${PROJECT_NAME} PRIVATE
    "$<$<CONFIG:DebugMultithreaded>:"
        "_DEBUG;"
        "EJECTA_DEBUG"
    ">"
    "$<$<CONFIG:DebugSinglethreaded>:"
        "_DEBUG;"
        "EJECTA_DEBUG"
    ">"
    "$<$<CONFIG:Debug>:"
        "_DEBUG;"
        "EJECTA_DEBUG"
    ">"
    "$<$<CONFIG:ReleaseMultithreaded>:"
        "NDEBUG"
    ">"
    "$<$<CONFIG:ReleaseSinglethreaded>:"
        "NDEBUG"
    ">"
    "$<$<CONFIG:Release>:"
        "NDEBUG"
    ">"
    "WIN32;"
    "_WINDOWS;"
    "UNICODE;"
    "_UNICODE"
)

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:DebugMultithreaded>:
            /Od;
            /Y-
        >
        $<$<CONFIG:DebugSinglethreaded>:
            /Od;
            /Y-
        >
        $<$<CONFIG:Debug>:
            /Od;
            /Y-
        >
        $<$<CONFIG:ReleaseMultithreaded>:
            /O2;
            /Oi;
            /Gy
        >
        $<$<CONFIG:ReleaseSinglethreaded>:
            /O2;
            /Oi;
            /Gy
        >
        $<$<CONFIG:Release>:
            /O2;
            /Oi;
            /Gy
        >
        /W3;
        ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
        ${DEFAULT_CXX_EXCEPTION_HANDLING}
    )
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJApp.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJAudio/EJBindingAudio.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJBindingBase.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJBindingEjectaCore.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJBindingEventedBase.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/EJBindingCanvas.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/EJBindingImage.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJBindingImageData.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/EJCanvasContext.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJCanvasContextScreen.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJCanvasContextTexture.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJFont.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJImageData.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/2D/EJPath.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCanvas/EJTexture.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/CGAffineTransform.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSArray.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSAutoreleasePool.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "$<$<CONFIG:DebugMultithreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:DebugSinglethreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:Debug>:"
            "/Y-"
        ">"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSCache.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSDictionary.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSGeometry.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSNS.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSObject.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSObjectFactory.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSSet.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSString.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSValue.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/NSZone.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJCocoa/support/nsCArray.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJConvert.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJTimer.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "$<$<CONFIG:DebugMultithreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:DebugSinglethreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:Debug>:"
            "/Y-"
        ">"
    )
    source_file_compile_options(../../../sources/ejecta/EJUtils/EJBindingHttpRequest.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/ejecta/EJUtils/EJBindingLocalStorage.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "$<$<CONFIG:DebugMultithreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:DebugSinglethreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:Debug>:"
            "/Y-"
        ">"
    )
    source_file_compile_options(../../../sources/ejecta/EJUtils/EJBindingTouchInput.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "$<$<CONFIG:DebugMultithreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:DebugSinglethreaded>:"
            "/Y-"
        ">"
        "$<$<CONFIG:Debug>:"
            "/Y-"
        ">"
    )
    source_file_compile_options(../../../sources/lib/lodefreetype/lodefreetype.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/lib/lodejpeg/lodejpeg.cpp ${FILE_CL_OPTIONS})
    string(CONCAT FILE_CL_OPTIONS
        "/Y-"
    )
    source_file_compile_options(../../../sources/lib/lodepng/lodepng.cpp ${FILE_CL_OPTIONS})
    target_link_options(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:DebugMultithreaded>:
            /INCREMENTAL
        >
        $<$<CONFIG:DebugSinglethreaded>:
            /INCREMENTAL
        >
        $<$<CONFIG:Debug>:
            /INCREMENTAL
        >
        $<$<CONFIG:ReleaseMultithreaded>:
            /NODEFAULTLIB:/NODEFAULTLIB:library;
            /OPT:REF;
            /OPT:ICF;
            /INCREMENTAL:NO
        >
        $<$<CONFIG:ReleaseSinglethreaded>:
            /NODEFAULTLIB:/NODEFAULTLIB:library;
            /OPT:REF;
            /OPT:ICF;
            /INCREMENTAL:NO
        >
        $<$<CONFIG:Release>:
            /NODEFAULTLIB:/NODEFAULTLIB:library;
            /OPT:REF;
            /OPT:ICF;
            /INCREMENTAL:NO
        >
        /DEBUG;
        /SUBSYSTEM:WINDOWS
    )
endif()

################################################################################
# Pre build events
################################################################################
add_custom_command_if(
    TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMANDS
    COMMAND    $<CONFIG:DebugMultithreaded> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Debug\\files" /e /Y
    COMMAND   $<CONFIG:DebugSinglethreaded> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Debug\\files" /e /Y
    COMMAND                 $<CONFIG:Debug> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Debug\\files" /e /Y
    COMMAND  $<CONFIG:ReleaseMultithreaded> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Release\\files" /e /Y
    COMMAND $<CONFIG:ReleaseSinglethreaded> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Release\\files" /e /Y
    COMMAND               $<CONFIG:Release> echo d | xcopy "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>files" "$<SHELL_PATH:${CMAKE_CURRENT_SOURCE_DIR}/>..\\Release\\files" /e /Y
)

################################################################################
# Dependencies
################################################################################
set(ADDITIONAL_LIBRARY_DEPENDENCIES
    "$<$<CONFIG:DebugMultithreaded>:"
        "legacy_stdio_definitions;"
        "pthreadVCE2;"
        "libcurl_imp"
    ">"
    "$<$<CONFIG:DebugSinglethreaded>:"
        "legacy_stdio_definitions;"
        "pthreadVCE2;"
        "libcurl_imp"
    ">"
    "$<$<CONFIG:Debug>:"
        "legacy_stdio_definitions;"
        "pthreadVCE2;"
        "libcurl_imp"
    ">"
    "freetype;"
    "libjpeg;"
    "libpng;"
    "glew32;"
    "OpenGL32;"
    "glu32;"
    "glaux;"
    "JavaScriptCore;"
    "kernel32;"
    "user32;"
    "gdi32;"
    "winspool;"
    "comdlg32;"
    "advapi32;"
    "shell32;"
    "ole32;"
    "oleaut32;"
    "uuid;"
    "odbc32;"
    "odbccp32"
)
target_link_libraries(${PROJECT_NAME} PRIVATE "${ADDITIONAL_LIBRARY_DEPENDENCIES}")

target_link_directories(${PROJECT_NAME} PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}//../../../library/win32/libraries"
)

