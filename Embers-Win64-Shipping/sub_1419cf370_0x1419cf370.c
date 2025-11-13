// 函数: sub_1419cf370
// 地址: 0x1419cf370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f213a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f213a0)
    
    if (data_143f213a0 == 0xffffffff)
        __builtin_memset(&data_143f21350, 0, 0x50)
        atexit(sub_142cf3440)
        _Init_thread_footer(&data_143f213a0)

return &(&data_143f21350)[zx.q(arg1) * 2]
