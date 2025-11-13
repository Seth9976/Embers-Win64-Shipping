// 函数: sub_140b3e900
// 地址: 0x140b3e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7cf8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7cf8)
    
    if (data_143de7cf8 == 0xffffffff)
        data_143de7ce8 = 0x84e6214
        data_143de7cec = 0x32ffa48
        data_143de7cf0 = 0x9245abf1
        data_143de7cf4 = 0x9e248f1a
        _Init_thread_footer(&data_143de7cf8)

return &data_143de7ce8
