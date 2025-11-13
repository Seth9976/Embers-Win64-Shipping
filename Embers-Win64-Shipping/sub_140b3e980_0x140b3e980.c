// 函数: sub_140b3e980
// 地址: 0x140b3e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7ce0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7ce0)
    
    if (data_143de7ce0 == 0xffffffff)
        data_143de7cd0 = 0x9e49538
        data_143de7cd4 = 0x633545e3
        data_143de7cd8 = 0x84b5644f
        data_143de7cdc = 0x1f11628f
        _Init_thread_footer(&data_143de7ce0)

return &data_143de7cd0
