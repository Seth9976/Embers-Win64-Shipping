// 函数: sub_140d21560
// 地址: 0x140d21560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d8f4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d8f4)
    
    if (data_143e1d8f4 == 0xffffffff)
        atexit(sub_142cc31e0)
        _Init_thread_footer(&data_143e1d8f4)

return &data_1439aac40
