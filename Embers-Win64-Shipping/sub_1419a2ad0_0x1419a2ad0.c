// 函数: sub_1419a2ad0
// 地址: 0x1419a2ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f1af80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1af80)
    
    if (data_143f1af80 == 0xffffffff)
        data_143f1af78 = 0
        data_143f1af70 = &data_14300a348
        atexit(sub_142cf2490)
        _Init_thread_footer(&data_143f1af80)

return &data_143f1af70
