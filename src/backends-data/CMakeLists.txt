
# Data Backends
option(BACKEND_POSIX "Compile backend for POSIX support?" ON)
if(BACKEND_POSIX)
	message(STATUS "WITH_BACKEND_POSIX")
	add_definitions(-DESDM_HAS_POSIX=1)
	SUBDIRS(posix)
	endif()

option(BACKEND_LUSTRE "Compile backend for Lustre support?" OFF)
if(BACKEND_LUSTRE)
	message(STATUS "WITH_BACKEND_LUSTRE")
	add_definitions(-DESDM_HAS_LUSTRE=1)
	SUBDIRS(lustre)
endif()

option(BACKEND_CLOVIS "Compile backend for Clovis support?" OFF)
if(BACKEND_CLOVIS)
	message(STATUS "WITH_BACKEND_CLOVIS")
	add_definitions(-DESDM_HAS_CLOVIS=1)
	SUBDIRS(Clovis)
endif()

option(BACKEND_WOS "Compile backend for WOS support?" OFF)
if(BACKEND_WOS)
	message(STATUS "WITH_BACKEND_WOS")
	add_definitions(-DESDM_HAS_WOS=1)
	SUBDIRS(WOS)
endif()
