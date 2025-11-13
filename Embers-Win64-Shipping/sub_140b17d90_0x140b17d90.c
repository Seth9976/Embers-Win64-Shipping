// 函数: sub_140b17d90
// 地址: 0x140b17d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6e20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6e20)
    
    if (data_143de6e20 == 0xffffffff)
        sub_140b07df0(&data_143de6d10)
        data_143de6e18 = &data_143de6d10
        atexit(sub_142cbfd20)
        _Init_thread_footer(&data_143de6e20)

return data_143de6e18
