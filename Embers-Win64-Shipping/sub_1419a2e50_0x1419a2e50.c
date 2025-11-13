// 函数: sub_1419a2e50
// 地址: 0x1419a2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f1afd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1afd8)
    
    if (data_143f1afd8 == 0xffffffff)
        atexit(sub_142cf2470)
        _Init_thread_footer(&data_143f1afd8)

return &data_143f1afc8
