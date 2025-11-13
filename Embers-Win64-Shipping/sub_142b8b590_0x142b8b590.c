// 函数: sub_142b8b590
// 地址: 0x142b8b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144017520 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144017520)
    
    if (data_144017520 == 0xffffffff)
        memset(&data_1440174d0, 0, 0x50)
        _Mtx_init_in_situ(&data_1440174d0, 2)
        atexit(sub_142d161d0)
        _Init_thread_footer(&data_144017520)

return &data_1440174d0
