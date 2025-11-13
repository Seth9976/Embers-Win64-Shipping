// 函数: sub_14208b650
// 地址: 0x14208b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f479e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f479e0)
    
    if (data_143f479e0 == 0xffffffff)
        data_143f479ac = 0x80
        __builtin_memset(&data_143f47980, 0, 0x2c)
        data_143f479b4 = 0
        data_143f479b0 = 0xffffffff
        InitializeCriticalSection(&data_143f479b8)
        SetCriticalSectionSpinCount(&data_143f479b8, 0xfa0)
        atexit(sub_142d01df0)
        _Init_thread_footer(&data_143f479e0)

return &data_143f47980
