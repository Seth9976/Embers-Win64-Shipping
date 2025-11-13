// 函数: sub_1405a9880
// 地址: 0x1405a9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd6330 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6330)
    
    if (data_143cd6330 == 0xffffffff)
        sub_141a6b800(&data_143cd6328)
        _Init_thread_footer(&data_143cd6330)

*arg1 = data_143cd6328
return arg1
