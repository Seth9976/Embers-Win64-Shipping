// 函数: sub_140ad8fe0
// 地址: 0x140ad8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb258 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb258)
    
    if (data_143dbb258 == 0xffffffff)
        data_143dbb248 = 0x125e4c67
        data_143dbb24c = 0x96eb48c4
        data_143dbb250 = 0x8894e09c
        data_143dbb254 = 0xb3cd56bf
        _Init_thread_footer(&data_143dbb258)

return &data_143dbb248
