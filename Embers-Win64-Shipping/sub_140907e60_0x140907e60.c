// 函数: sub_140907e60
// 地址: 0x140907e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceca10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceca10)
    
    if (data_143ceca10 == 0xffffffff)
        sub_140b58260(&data_143ceca08, u"ImgMedia", 1)
        _Init_thread_footer(&data_143ceca10)

*arg2 = data_143ceca08
return arg2
