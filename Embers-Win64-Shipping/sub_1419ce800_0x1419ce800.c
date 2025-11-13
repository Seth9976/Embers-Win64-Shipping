// 函数: sub_1419ce800
// 地址: 0x1419ce800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f213a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f213a8)
    
    if (data_143f213a8 == 0xffffffff)
        atexit(sub_142cf3070)
        _Init_thread_footer(&data_143f213a8)

return &data_1439c94f0
