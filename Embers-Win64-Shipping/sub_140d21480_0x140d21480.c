// 函数: sub_140d21480
// 地址: 0x140d21480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d8d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d8d8)
    
    if (data_143e1d8d8 == 0xffffffff)
        atexit(sub_142cc3170)
        _Init_thread_footer(&data_143e1d8d8)

return &data_143e1d8c8
