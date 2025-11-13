// 函数: sub_142a46330
// 地址: 0x142a46330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144015460 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144015460)
    
    if (data_144015460 == 0xffffffff)
        memset(&data_144015410, 0, 0x50)
        _Mtx_init_in_situ(&data_144015410, 2)
        atexit(sub_142d15ff0)
        _Init_thread_footer(&data_144015460)

return &data_144015410
