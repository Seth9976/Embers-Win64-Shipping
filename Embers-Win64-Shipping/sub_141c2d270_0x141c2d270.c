// 函数: sub_141c2d270
// 地址: 0x141c2d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f34a00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f34a00)
    
    if (data_143f34a00 == 0xffffffff)
        sub_140b58260(&data_143f349f8, u"FVectorFFTFactory", 1)
        _Init_thread_footer(&data_143f34a00)

*arg2 = data_143f349f8
return arg2
