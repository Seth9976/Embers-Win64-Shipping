// 函数: sub_141c4c060
// 地址: 0x141c4c060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f34d68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f34d68)
    
    if (data_143f34d68 == 0xffffffff)
        sub_140b58260(&data_143f34d60, u"Unreal Ambisonics", 1)
        _Init_thread_footer(&data_143f34d68)

*arg1 = data_143f34d60
return arg1
