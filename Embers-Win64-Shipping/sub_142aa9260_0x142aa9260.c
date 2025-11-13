// 函数: sub_142aa9260
// 地址: 0x142aa9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016000 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016000)
    
    if (data_144016000 == 0xffffffff)
        memset(&data_144015fb0, 0, 0x50)
        _Mtx_init_in_situ(&data_144015fb0, 2)
        atexit(sub_142d16090)
        _Init_thread_footer(&data_144016000)

return &data_144015fb0
