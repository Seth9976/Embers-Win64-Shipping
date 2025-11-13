// 函数: sub_140b17d00
// 地址: 0x140b17d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6e70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6e70)
    
    if (data_143de6e70 == 0xffffffff)
        sub_140b0ae80(&data_143de6e28, &data_143de6e28)
        data_143de6e68 = &data_143de6e28
        atexit(sub_142cbfce0)
        _Init_thread_footer(&data_143de6e70)

return data_143de6e68
