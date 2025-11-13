// 函数: sub_142c9422c
// 地址: 0x142c9422c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_8 = arg1

if (__scrt_initialize_crt(1) == 0)
    __scrt_fastfail(7)
    __scrt_fastfail(7)
else
    int64_t rdi
    rdi.b = 0
    char var_18_1 = 0
    arg1.b = __scrt_acquire_startup_lock()
    int32_t rcx_1 = data_14401b110
    
    if (rcx_1 == 1)
        __scrt_fastfail(7)
    else
        if (rcx_1 != 0)
            rdi.b = 1
            char var_18_2 = 1
        else
            data_14401b110 = 1
            
            if (_initterm_e(&data_142d3f450, &data_142d3f478) != 0)
                return 0xff
            
            _initterm(&data_142d19008, &data_142d3f448)
            data_14401b110 = 2
        
        rcx_1.b = arg1.b
        __scrt_release_startup_lock(rcx_1.b)
        
        if (data_1440210a8 != 0 && __scrt_is_nonwritable_in_current_image(&data_1440210a8) != 0)
            data_1440210a8(0, 2, 0)
        
        if (data_1440210a0 != 0 && __scrt_is_nonwritable_in_current_image(&data_1440210a0) != 0)
            _register_thread_local_exe_atexit_callback(data_1440210a0)
        
        __scrt_get_show_window_mode()
        _get_narrow_winmain_command_line()
        arg1 = zx.q(main(&__dos_header))
        
        if (__scrt_is_managed_app() != 0)
            if (rdi.b == 0)
                _cexit()
            
            __scrt_uninitialize_crt(1, 0)
            return zx.q(arg1.d)

exit(arg1.d)
noreturn
