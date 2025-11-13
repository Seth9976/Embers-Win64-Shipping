// 函数: sub_14229f640
// 地址: 0x14229f640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f53570 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53570)
    
    if (data_143f53570 == 0xffffffff)
        sub_140b58170(&data_143f53568, "Project", 1)
        _Init_thread_footer(&data_143f53570)

*arg2 = data_143f53568
return arg2
