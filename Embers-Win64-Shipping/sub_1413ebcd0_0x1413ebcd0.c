// 函数: sub_1413ebcd0
// 地址: 0x1413ebcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ecdda0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ecdda0)
    
    if (data_143ecdda0 == 0xffffffff)
        data_143ecdd90 = 0
        data_143ecdd98 = 0
        atexit(sub_142ce0680)
        _Init_thread_footer(&data_143ecdda0)

return &data_143ecdd90
