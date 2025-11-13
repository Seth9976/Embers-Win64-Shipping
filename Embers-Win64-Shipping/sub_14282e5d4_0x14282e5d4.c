// 函数: sub_14282e5d4
// 地址: 0x14282e5d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89b10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89b10)
    
    if (data_143f89b10 == 0xffffffff)
        sub_14282747c()
        sub_142827648()
        sub_142826608(&data_143f89af0, &data_143f89870, &data_143f89898)
        atexit(sub_142d14b2c)
        _Init_thread_footer(&data_143f89b10)

return &data_143f89af0
