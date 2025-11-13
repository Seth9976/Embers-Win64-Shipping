// 函数: sub_1423c0530
// 地址: 0x1423c0530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5a848 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5a848)
    
    if (data_143f5a848 == 0xffffffff)
        InitializeCriticalSection(&data_143f5a790)
        SetCriticalSectionSpinCount(&data_143f5a790, 0xfa0)
        data_143f5a7b8 = 0
        data_143f5a7c0 = 0
        InitializeCriticalSection(&data_143f5a7c8)
        SetCriticalSectionSpinCount(&data_143f5a7c8, 0xfa0)
        __builtin_memset(&data_143f5a7f0, 0, 0x2c)
        data_143f5a81c = 0x80
        data_143f5a820 = 0xffffffff
        data_143f5a824 = 0
        data_143f5a830 = 0
        data_143f5a838 = 0
        data_143f5a840 = 0
        atexit(sub_142d0f630)
        _Init_thread_footer(&data_143f5a848)

return &data_143f5a790
