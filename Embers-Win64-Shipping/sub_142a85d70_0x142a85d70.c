// 函数: sub_142a85d70
// 地址: 0x142a85d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144015b88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144015b88)
    
    if (data_144015b88 == 0xffffffff)
        _Cnd_init_in_situ(&data_144015b40)
        atexit(sub_142d16020)
        _Init_thread_footer(&data_144015b88)

return &data_144015b40
