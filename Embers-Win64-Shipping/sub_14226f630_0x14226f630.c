// 函数: sub_14226f630
// 地址: 0x14226f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f52778 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f52778)
    
    if (data_143f52778 == 0xffffffff)
        atexit(sub_142d0ab90)
        _Init_thread_footer(&data_143f52778)

return &data_143a2f3b0
