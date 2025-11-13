// 函数: sub_142a91400
// 地址: 0x142a91400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144015c50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144015c50)
    
    if (data_144015c50 == 0xffffffff)
        memset(&data_144015c00, 0, 0x50)
        _Mtx_init_in_situ(&data_144015c00, 2)
        atexit(sub_142d16050)
        _Init_thread_footer(&data_144015c50)

return &data_144015c00
