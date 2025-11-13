// 函数: sub_141aeffa0
// 地址: 0x141aeffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c620 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c620)
    
    if (data_143f2c620 == 0xffffffff)
        sub_141a6b800(&data_143f2c618)
        _Init_thread_footer(&data_143f2c620)

*arg1 = data_143f2c618
return arg1
