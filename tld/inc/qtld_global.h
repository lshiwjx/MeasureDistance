#ifndef QTLD_GLOBAL_H
#define QTLD_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef QTLD_LIB
# define QTLD_EXPORT Q_DECL_EXPORT
#else
# define QTLD_EXPORT Q_DECL_IMPORT
#endif

#endif // QTLD_GLOBAL_H
