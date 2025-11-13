// 函数: sub_140ad8f60
// 地址: 0x140ad8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb2e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb2e8)
    
    if (data_143dbb2e8 == 0xffffffff)
        data_143dbb2d8 = 0xba359bb0
        data_143dbb2dc = 0xceb54682
        data_143dbb2e0 = 0x9160eb4f
        data_143dbb2e4 = 0xd1687c7f
        _Init_thread_footer(&data_143dbb2e8)

return &data_143dbb2d8
