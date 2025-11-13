// 函数: sub_1408fd180
// 地址: 0x1408fd180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cec978 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cec978)
    
    if (data_143cec978 == 0xffffffff)
        sub_140b58260(&data_143cec970, u"AvfMedia", 1)
        _Init_thread_footer(&data_143cec978)

*arg2 = data_143cec970
return arg2
