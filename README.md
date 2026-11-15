# iptools

Provides tools for manipulating, validating and resolving IP addresses and ranges.

Compatibility updates by Renova.

Version 0.7.2.9002: Windows builds now use C++17 like other platforms (src/Makevars.win), and the package compiles on WebR/Wasm: Asio uses its single-threaded backend there, and hostname/IP lookups follow the WebR rules below. Native behavior is unchanged.

Version 0.7.2.9001: Added Authors@R, raised compilation to C++17, and replaced sprintf with bounds-checked snprintf via sizeof(str) in src/asio_bindings.cpp.

## Platform support

Windows uses C++17. WebR supports IP conversion, classification and range operations. For `hostname_to_ip()`, numeric IPv4/IPv6 literals are normalized and `localhost` returns `127.0.0.1`, then `::1`. Other names return `"Not resolved"`; WebR has no real DNS lookup. `ip_to_hostname()` returns normalized IP literals on WebR, or `"Invalid IP address"` for invalid input. Native DNS behavior is unchanged.

## Install

```r
install.packages("remotes")
remotes::install_github("renova-r/iptools@renova-0.7.2.9002")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

Originally authored and maintained by Bob Rudis, Oliver Keyes. Original project: <https://github.com/hrbrmstr/iptools>. License: MIT + file LICENSE. See [LICENSE](LICENSE). Full license text: [LICENSE.md](LICENSE.md).
