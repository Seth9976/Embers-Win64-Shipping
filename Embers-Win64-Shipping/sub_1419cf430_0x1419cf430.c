// 函数: sub_1419cf430
// 地址: 0x1419cf430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f21340 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f21340)
    
    if (data_143f21340 == 0xffffffff)
        __builtin_memset(&data_143f212f0, 0, 0x50)
        atexit(sub_142cf3490)
        _Init_thread_footer(&data_143f21340)

return &(&data_143f212f0)[zx.q(arg1) * 2]
