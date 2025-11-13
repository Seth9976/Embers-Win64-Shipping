// 函数: sub_142420a90
// 地址: 0x142420a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5d7f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5d7f8)
    
    if (data_143f5d7f8 == 0xffffffff)
        sub_140b58260(&data_143f5d7f0, u"Typing", 1)
        _Init_thread_footer(&data_143f5d7f8)

(*(*arg1 + 0x338))(arg1, data_143f5d7f0)
(*(*arg1 + 0x260))(arg1, arg2)
*(arg2 + 8)
jump(*(*arg1 + 0x268))
