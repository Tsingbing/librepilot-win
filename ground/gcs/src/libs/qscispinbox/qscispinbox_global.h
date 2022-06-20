#ifndef QSCISPINBOX_GLOBAL_H
#define QSCISPINBOX_GLOBAL_H


#if defined(QSCIENCESPINBOX)
#  define QSCIENCESPINBOX_LIB_EXPORT Q_DECL_EXPORT
#elif  defined(QSCIENCESPINBOX_STATIC_LIBRARY) // Abuse single files for manual tests
#  define QSCIENCESPINBOX_LIB_EXPORT
#else
#  define QSCIENCESPINBOX_LIB_EXPORT Q_DECL_IMPORT
#endif

#endif // QSCISPINBOX_GLOBAL_H