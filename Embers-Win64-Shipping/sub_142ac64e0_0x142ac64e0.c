// 函数: sub_142ac64e0
// 地址: 0x142ac64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016510 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016510)
    
    if (data_144016510 == 0xffffffff)
        memset(&data_1440164c0, 0, 0x50)
        _Mtx_init_in_situ(&data_1440164c0, 2)
        atexit(sub_142d160e0)
        _Init_thread_footer(&data_144016510)

return &data_1440164c0
