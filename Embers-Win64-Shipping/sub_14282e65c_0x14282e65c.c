// 函数: sub_14282e65c
// 地址: 0x14282e65c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89ae8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89ae8)
    
    if (data_143f89ae8 == 0xffffffff)
        sub_1428263c8(&data_143f89ac8)
        atexit(sub_142d14b84)
        _Init_thread_footer(&data_143f89ae8)

return &data_143f89ac8
