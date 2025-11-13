// 函数: sub_1413b7290
// 地址: 0x1413b7290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ec82f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec82f8)
    
    if (data_143ec82f8 == 0xffffffff)
        data_143ec82f0 = 0
        atexit(sub_142ce0550)
        _Init_thread_footer(&data_143ec82f8)

return &data_143ec82f0
