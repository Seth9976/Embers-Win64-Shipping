// 函数: sub_142aa92f0
// 地址: 0x142aa92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016060 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016060)
    
    if (data_144016060 == 0xffffffff)
        memset(&data_144016010, 0, 0x50)
        _Mtx_init_in_situ(&data_144016010, 2)
        atexit(sub_142d160a0)
        _Init_thread_footer(&data_144016060)

return &data_144016010
