// 函数: sub_140f00000
// 地址: 0x140f00000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2a1b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a1b8)
    
    if (data_143e2a1b8 == 0xffffffff)
        atexit(sub_142ccb6e0)
        _Init_thread_footer(&data_143e2a1b8)

return &data_143e2a1a8
