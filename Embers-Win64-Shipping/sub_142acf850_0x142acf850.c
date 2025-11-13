// 函数: sub_142acf850
// 地址: 0x142acf850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_144016600 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016600)
    
    if (data_144016600 == 0xffffffff)
        memset(&data_1440165b0, 0, 0x50)
        _Mtx_init_in_situ(&data_1440165b0, 2)
        atexit(sub_142d16100)
        _Init_thread_footer(&data_144016600)

return &data_1440165b0
