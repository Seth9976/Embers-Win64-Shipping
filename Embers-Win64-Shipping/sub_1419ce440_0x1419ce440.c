// 函数: sub_1419ce440
// 地址: 0x1419ce440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f213e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f213e0)
    
    if (data_143f213e0 == 0xffffffff)
        atexit(sub_142cf3320)
        _Init_thread_footer(&data_143f213e0)

return &data_143f213d0
