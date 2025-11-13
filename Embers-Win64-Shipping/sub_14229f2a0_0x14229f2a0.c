// 函数: sub_14229f2a0
// 地址: 0x14229f2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f53580 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53580)
    
    if (data_143f53580 == 0xffffffff)
        sub_140b58170(&data_143f53578, "Editor", 1)
        _Init_thread_footer(&data_143f53580)

*arg2 = data_143f53578
return arg2
