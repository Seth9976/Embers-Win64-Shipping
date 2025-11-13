// 函数: sub_14226ebf0
// 地址: 0x14226ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f52774 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f52774)
    
    if (data_143f52774 == 0xffffffff)
        atexit(sub_142d0ab80)
        _Init_thread_footer(&data_143f52774)

return &data_143a2f3a0
