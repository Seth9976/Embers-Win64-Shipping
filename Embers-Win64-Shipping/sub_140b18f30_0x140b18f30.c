// 函数: sub_140b18f30
// 地址: 0x140b18f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6f10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6f10)
    
    if (data_143de6f10 == 0xffffffff)
        sub_140a1d230(&data_143de6e78)
        data_143de6f08 = &data_143de6e78
        atexit(sub_142cbfd50)
        _Init_thread_footer(&data_143de6f10)

return data_143de6f08
