// 函数: sub_142a85df0
// 地址: 0x142a85df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144015b30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144015b30)
    
    if (data_144015b30 == 0xffffffff)
        _Mtx_init_in_situ(&data_144015ae0, 2)
        atexit(sub_142d16040)
        _Init_thread_footer(&data_144015b30)

return &data_144015ae0
