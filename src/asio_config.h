#ifndef IPTOOLS_ASIO_CONFIG_H
#define IPTOOLS_ASIO_CONFIG_H

// iptools uses synchronous Asio operations. On Emscripten builds without
// pthreads, select Asio's single-threaded backend before any Asio header.
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
# if !defined(ASIO_DISABLE_THREADS)
#  define ASIO_DISABLE_THREADS 1
# endif
#endif

#endif
