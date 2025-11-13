// 函数: sub_141ec40e0
// 地址: 0x141ec40e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3a808 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a808)
    
    if (data_143f3a808 == 0xffffffff)
        data_143f3a800 = 0xffffffff
        data_143f3a804 = 1
        _Init_thread_footer(&data_143f3a808)

return &data_143f3a800
