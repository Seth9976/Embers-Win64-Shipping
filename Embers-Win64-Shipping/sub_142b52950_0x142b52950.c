// 函数: sub_142b52950
// 地址: 0x142b52950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016d10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016d10)
    
    if (data_144016d10 == 0xffffffff)
        memset(&data_144016cc0, 0, 0x50)
        _Mtx_init_in_situ(&data_144016cc0, 2)
        atexit(sub_142d16180)
        _Init_thread_footer(&data_144016d10)

return &data_144016cc0
