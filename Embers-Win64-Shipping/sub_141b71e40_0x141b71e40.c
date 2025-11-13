// 函数: sub_141b71e40
// 地址: 0x141b71e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f31578 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31578)
    
    if (data_143f31578 == 0xffffffff)
        sub_141a6b800(&data_143f31570)
        _Init_thread_footer(&data_143f31578)

*arg1 = data_143f31570
return arg1
