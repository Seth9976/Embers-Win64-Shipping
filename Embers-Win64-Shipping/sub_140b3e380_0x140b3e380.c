// 函数: sub_140b3e380
// 地址: 0x140b3e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c68)
    
    if (data_143de7c68 == 0xffffffff)
        data_143de7c58 = 0x6a6247f4
        data_143de7c5c = 0xfd78467f
        data_143de7c60 = 0xa6ac1244
        data_143de7c64 = 0xa31e0a5
        _Init_thread_footer(&data_143de7c68)

return &data_143de7c58
