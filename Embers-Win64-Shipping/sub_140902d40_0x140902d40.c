// 函数: sub_140902d40
// 地址: 0x140902d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cec9c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cec9c8)
    
    if (data_143cec9c8 == 0xffffffff)
        sub_140b58260(&data_143cec9c0, u"ImgMedia", 1)
        _Init_thread_footer(&data_143cec9c8)

*arg2 = data_143cec9c0
return arg2
