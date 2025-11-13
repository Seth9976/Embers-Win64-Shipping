// 函数: sub_140b3e180
// 地址: 0x140b3e180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7cb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7cb0)
    
    if (data_143de7cb0 == 0xffffffff)
        data_143de7ca0 = 0x7511397a
        data_143de7ca4 = 0x2d24dc2
        data_143de7ca8 = 0x86729800
        data_143de7cac = 0xf454c320
        _Init_thread_footer(&data_143de7cb0)

return &data_143de7ca0
