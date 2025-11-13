// 函数: sub_140bac910
// 地址: 0x140bac910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1a814 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a814)
    
    if (data_143e1a814 == 0xffffffff)
        data_143de5452 = sub_140bac980() != 0
        _Init_thread_footer(&data_143e1a814)

return zx.q(data_143de5452)
