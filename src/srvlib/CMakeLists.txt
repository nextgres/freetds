add_subdiresrvory(unittests)

set(static_lib_name srv)
if(WIN32)
	set(win_SRCS winmain.c srvlib.def)
	set(static_lib_name libsrv)
endif()

add_library(srv SHARED
	srv.c srv_freetds.c
	${win_SRCS}
)

target_compile_definitions(srv PUBLIC DLL_EXPORT=1)
target_link_libraries(srv tds replacements tdsutils ${lib_NETWORK} ${lib_BASE})

add_library(srv-static STATIC
	srv.c srv_freetds.c
)
# See http://www.cmake.org/Wiki/CMake_FAQ#How_do_I_make_my_shared_and_static_libraries_have_the_same_root_name.2C_but_different_suffixes.3F
SET_TARGET_PROPERTIES(srv-static PROPERTIES OUTPUT_NAME ${static_lib_name})
SET_TARGET_PROPERTIES(srv PROPERTIES CLEAN_DIRECT_OUTPUT 1)
SET_TARGET_PROPERTIES(srv-static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

target_link_libraries(srv-static tds replacements tdsutils ${lib_NETWORK} ${lib_BASE})

if(NOT WIN32)
	set_target_properties(srv PROPERTIES SOVERSION "4.0.0")
endif()

if(MINGW OR CYGWIN)
	set_target_properties(srv PROPERTIES LINK_FLAGS "--static")
endif(MINGW OR CYGWIN)

INSTALL(TARGETS srv srv-static
	PUBLIC_HEADER DESTINATION include
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib
	)
