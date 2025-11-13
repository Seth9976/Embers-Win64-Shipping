// 函数: sub_142337120
// 地址: 0x142337120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f58d78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f58d78)
    
    if (data_143f58d78 == 0xffffffff)
        sub_140b58170(&data_143f58d70, "Editor", 1)
        _Init_thread_footer(&data_143f58d78)

*arg2 = data_143f58d70
return arg2
