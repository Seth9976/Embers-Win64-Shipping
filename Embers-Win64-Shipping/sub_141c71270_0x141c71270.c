// 函数: sub_141c71270
// 地址: 0x141c71270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f34fc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f34fc0)
    
    if (data_143f34fc0 == 0xffffffff)
        data_143f34fb0 = 0
        data_143f34fb8 = 0
        atexit(sub_142cf7130)
        _Init_thread_footer(&data_143f34fc0)

return &data_143f34fb0
