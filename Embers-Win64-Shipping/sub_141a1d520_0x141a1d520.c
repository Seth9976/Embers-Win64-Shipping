// 函数: sub_141a1d520
// 地址: 0x141a1d520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f29360 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f29360)
    
    if (data_143f29360 == 0xffffffff)
        sub_140b58260(&data_143f29358, u"FLandscapeSubsystemTickFunction", 1)
        _Init_thread_footer(&data_143f29360)

*arg2 = data_143f29358
return arg2
