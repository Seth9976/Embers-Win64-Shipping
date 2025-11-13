// 函数: sub_141bb1550
// 地址: 0x141bb1550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f315c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f315c8)
    
    if (data_143f315c8 == 0xffffffff)
        sub_140b58170(&data_143f315c0, "SlateBrush", 1)
        _Init_thread_footer(&data_143f315c8)

*arg1 = data_143f315c0
return arg1
