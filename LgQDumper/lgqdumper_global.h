#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(LGQDUMPER_LIB)
#  define LGQDUMPER_EXPORT Q_DECL_EXPORT
# else
#  define LGQDUMPER_EXPORT Q_DECL_IMPORT
# endif
#else
# define LGQDUMPER_EXPORT
#endif
