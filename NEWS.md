# iptools 0.7.2.9002

- src/Makevars.win: CXX_STD = CXX17 (was CXX11), matching src/Makevars.
- WebR/Wasm: new src/asio_config.h selects Asio's single-threaded backend on Emscripten without pthreads (Asio previously failed with "Only Windows and POSIX are supported"). On WebR, hostname_to_ip() normalizes numeric IPv4/IPv6 literals, maps localhost to 127.0.0.1 and ::1, and returns "Not resolved" for other names; ip_to_hostname() returns the normalized IP literal (WebR has no real DNS). Native DNS code is unchanged.
- Documentation for hostname_to_ip() and ip_to_hostname() describes the WebR behavior; README gains a platform-support section.

# iptools 0.7.2.9001

Renova release based on CRAN iptools 0.7.2.

- DESCRIPTION adds Authors@R; SystemRequirements C++17.
- src/Makevars sets CXX_STD = CXX17.
- src/asio_bindings.cpp uses snprintf(str, sizeof(str), ...).
- Release metadata: Renova version and attribution; README and license text; stale MD5 removed.
