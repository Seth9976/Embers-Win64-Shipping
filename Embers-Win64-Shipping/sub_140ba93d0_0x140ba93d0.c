// 函数: sub_140ba93d0
// 地址: 0x140ba93d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1a630 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a630)
    
    if (data_143e1a630 == 0xffffffff)
        atexit(sub_142cc16f0)
        _Init_thread_footer(&data_143e1a630)

return &data_143e1a5e0
