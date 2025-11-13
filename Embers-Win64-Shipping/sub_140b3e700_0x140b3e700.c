// 函数: sub_140b3e700
// 地址: 0x140b3e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c98)
    
    if (data_143de7c98 == 0xffffffff)
        data_143de7c88 = 0xf4778b51
        data_143de7c8c = 0xf535414d
        data_143de7c90 = 0x9c0eb5f2
        data_143de7c94 = 0x2f2b0fd4
        _Init_thread_footer(&data_143de7c98)

return &data_143de7c88
