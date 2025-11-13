// 函数: sub_142ad7b90
// 地址: 0x142ad7b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016830 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016830)
    
    if (data_144016830 == 0xffffffff)
        memset(&data_1440167e0, 0, 0x50)
        _Mtx_init_in_situ(&data_1440167e0, 2)
        atexit(sub_142d16130)
        _Init_thread_footer(&data_144016830)

return &data_1440167e0
