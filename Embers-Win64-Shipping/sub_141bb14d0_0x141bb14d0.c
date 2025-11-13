// 函数: sub_141bb14d0
// 地址: 0x141bb14d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f315e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f315e8)
    
    if (data_143f315e8 == 0xffffffff)
        sub_140b58170(&data_143f315e0, "FontOutlineSettings", 1)
        _Init_thread_footer(&data_143f315e8)

*arg1 = data_143f315e0
return arg1
