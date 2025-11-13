// 函数: sub_142337680
// 地址: 0x142337680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f59118 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f59118)
    
    if (data_143f59118 == 0xffffffff)
        atexit(sub_142d0d990)
        _Init_thread_footer(&data_143f59118)

return &data_143f59108
