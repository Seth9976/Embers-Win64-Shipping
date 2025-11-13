// 函数: sub_140a128f0
// 地址: 0x140a128f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceffa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceffa8)
    
    if (data_143ceffa8 == 0xffffffff)
        sub_140b58260(&data_143ceffa0, u"WebMMedia", 1)
        _Init_thread_footer(&data_143ceffa8)

*arg2 = data_143ceffa0
return arg2
