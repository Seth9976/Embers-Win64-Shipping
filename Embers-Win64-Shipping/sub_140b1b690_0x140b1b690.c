// 函数: sub_140b1b690
// 地址: 0x140b1b690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6a08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6a08)
    
    if (data_143de6a08 == 0xffffffff)
        data_143de69f8 = 0x8423b4ae
        data_143de69fc = 0x2ff64795
        data_143de6a00 = 0xa7effac0
        data_143de6a04 = 0xc560531a
        _Init_thread_footer(&data_143de6a08)

return &data_143de69f8
