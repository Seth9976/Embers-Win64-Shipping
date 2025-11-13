// 函数: ?__scrt_initialize_thread_safe_statics@@YAHXZ
// 地址: 0x142c934e4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSectionAndSpinCount(&data_14401b168, 0xfa0)
HMODULE hModule_1 = GetModuleHandleW(u"api-ms-win-core-synch-l1-2-0.dll")
HMODULE hModule = hModule_1
HMODULE hModule_2

if (hModule_1 == 0)
    hModule_2 = GetModuleHandleW(u"kernel32.dll")
    hModule = hModule_2

if (hModule_1 != 0 || hModule_2 != 0)
    int64_t rax = GetProcAddress(hModule, "SleepConditionVariableCS")
    int64_t rax_1 = GetProcAddress(hModule, "WakeAllConditionVariable")
    
    if (rax == 0 || rax_1 == 0)
        HANDLE rax_2 = CreateEventW(nullptr, 1, 0, nullptr)
        data_14401b160 = rax_2
        
        if (rax_2 != 0)
            goto label_142c93587
    else
        data_14401b190 = rax
        data_14401b198 = rax_1
    label_142c93587:
        
        if (__scrt_initialize_onexit_tables(0) != 0)
            atexit(__scrt_uninitialize_thread_safe_statics)
            return 0

__scrt_fastfail(7)
breakpoint
