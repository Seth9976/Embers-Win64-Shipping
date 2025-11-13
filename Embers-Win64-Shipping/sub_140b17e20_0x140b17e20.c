// 函数: sub_140b17e20
// 地址: 0x140b17e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6ca8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6ca8)
    
    if (data_143de6ca8 == 0xffffffff)
        sub_140b0a7d0(&data_143de6a10)
        atexit(sub_142cbfd80)
        _Init_thread_footer(&data_143de6ca8)

return &data_143de6a10
