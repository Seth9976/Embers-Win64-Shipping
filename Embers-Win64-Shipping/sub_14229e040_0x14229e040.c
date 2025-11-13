// 函数: sub_14229e040
// 地址: 0x14229e040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f53618 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53618)
    
    if (data_143f53618 == 0xffffffff)
        sub_1423ba590(&data_143f53590)
        data_143f53590 = &data_1433165e8
        data_143f53598 = &data_143316628
        InitializeCriticalSection(&data_143f535a0)
        SetCriticalSectionSpinCount(&data_143f535a0, 0xfa0)
        data_143f535f4 = 0x80
        __builtin_memset(&data_143f535c8, 0, 0x2c)
        data_143f535fc = 0
        data_143f53608 = 0
        data_143f53610 = 0
        data_143f535f8 = 0xffffffff
        atexit(sub_142d0b100)
        _Init_thread_footer(&data_143f53618)

return &data_143f53590
