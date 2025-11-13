// 函数: sub_140b3e600
// 地址: 0x140b3e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7cc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7cc8)
    
    if (data_143de7cc8 == 0xffffffff)
        data_143de7cb8 = 0x3d78990
        data_143de7cbc = 0x41d04e26
        data_143de7cc0 = 0x8e98ad2f
        __builtin_strncpy(&data_143de7cc4, "hxft", 4)
        _Init_thread_footer(&data_143de7cc8)

return &data_143de7cb8
