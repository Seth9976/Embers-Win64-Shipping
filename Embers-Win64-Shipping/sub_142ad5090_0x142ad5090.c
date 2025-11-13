// 函数: sub_142ad5090
// 地址: 0x142ad5090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_1440167b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_1440167b0)
    
    if (data_1440167b0 == 0xffffffff)
        memset(&data_144016760, 0, 0x50)
        _Mtx_init_in_situ(&data_144016760, 2)
        atexit(sub_142d16120)
        _Init_thread_footer(&data_1440167b0)

return &data_144016760
