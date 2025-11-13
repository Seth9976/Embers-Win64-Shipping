// 函数: sub_141971cf0
// 地址: 0x141971cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f0f420 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f0f420)
    
    if (data_143f0f420 == 0xffffffff)
        sub_141961e60(&data_143f0f2a0)
        _Init_thread_footer(&data_143f0f420)

return &data_143f0f2a0
