// 函数: sub_140aae6a0
// 地址: 0x140aae6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9dd0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9dd0)
    
    if (data_143db9dd0 == 0xffffffff)
        data_143db9d0c = 0x80
        __builtin_memset(&data_143db9ce0, 0, 0x2c)
        data_143db9d14 = 0
        data_143db9d20 = 0
        data_143db9d28 = 0
        data_143db9d10 = 0xffffffff
        InitializeCriticalSection(&data_143db9d30)
        SetCriticalSectionSpinCount(&data_143db9d30, 0xfa0)
        __builtin_memset(&data_143db9d58, 0, 0x2c)
        data_143db9d84 = 0x80
        data_143db9d88 = 0xffffffff
        data_143db9d8c = 0
        data_143db9d98 = 0
        data_143db9da0 = 0
        InitializeCriticalSection(&data_143db9da8)
        SetCriticalSectionSpinCount(&data_143db9da8, 0xfa0)
        atexit(sub_142cbdaa0)
        _Init_thread_footer(&data_143db9dd0)

return &data_143db9ce0
