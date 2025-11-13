// 函数: sub_140b3e800
// 地址: 0x140b3e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7bf0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7bf0)
    
    if (data_143de7bf0 == 0xffffffff)
        data_143de7be0 = 0x5e10956d
        data_143de7be4 = 0x2e17411f
        data_143de7be8 = 0xb6469e22
        data_143de7bec = 0xb5e56e6c
        _Init_thread_footer(&data_143de7bf0)

return &data_143de7be0
