// 函数: sub_141af0010
// 地址: 0x141af0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c828 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c828)
    
    if (data_143f2c828 == 0xffffffff)
        sub_141a6b800(&data_143f2c820)
        _Init_thread_footer(&data_143f2c828)

*arg1 = data_143f2c820
return arg1
