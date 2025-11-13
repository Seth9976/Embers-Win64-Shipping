// 函数: sub_140a755d0
// 地址: 0x140a755d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db95d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db95d0)
    
    if (data_143db95d0 == 0xffffffff)
        InitializeCriticalSection(&data_143db7b50)
        SetCriticalSectionSpinCount(&data_143db7b50, 0xfa0)
        data_143db9384 = 0x100
        data_143db9378 = 0
        data_143db9380 = 0
        __builtin_memset(&data_143db938c, 0, 0x28)
        data_143db93bc = 0
        data_143db95c0 = 0
        data_143db95c8 = 0
        data_143db93b4 = 0x100
        data_143db93b8 = 0xffffffff
        atexit(sub_142cbd6e0)
        _Init_thread_footer(&data_143db95d0)
        data_143db7a58 = 1
        return &data_143db7b50

data_143db7a58 = 1
return &data_143db7b50
