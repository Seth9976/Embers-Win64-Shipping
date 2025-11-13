// 函数: sub_14281feb8
// 地址: 0x14281feb8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f895f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f895f8)
    
    if (data_143f895f8 == 0xffffffff)
        sub_1428263a8(&data_143f895d8, 0x30, 0x39)
        atexit(sub_142d140e4)
        _Init_thread_footer(&data_143f895f8)

return &data_143f895d8
