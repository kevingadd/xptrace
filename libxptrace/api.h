extern "C" {
    void * _ReturnAddress(void);
    #pragma intrinsic(_ReturnAddress)
}

XPTRACE_EXPORT(xptrace::marker::id) xptrace_register_marker (const char * name, const void * return_address);
XPTRACE_EXPORT(void) xptrace_marker_hit (xptrace::marker::id id);
XPTRACE_EXPORT(bool) xptrace_set_logging_enabled (bool newState);
XPTRACE_EXPORT(bool) xptrace_set_marker_enabled (xptrace::marker::id id, bool newState);
XPTRACE_EXPORT(void) xptrace_enumerate_markers (xptrace::marker_enumerator callback, void * userdata);