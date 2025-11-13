// 函数: sub_140b3e500
// 地址: 0x140b3e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c38 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c38)
    
    if (data_143de7c38 == 0xffffffff)
        data_143de7c28 = 0xb85e222b
        data_143de7c2c = 0x47e24e1f
        data_143de7c30 = 0xbc5a384d
        data_143de7c34 = 0x2ff471e1
        _Init_thread_footer(&data_143de7c38)

return &data_143de7c28
