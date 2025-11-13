// 函数: sub_140d21fd0
// 地址: 0x140d21fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d938 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d938)
    
    if (data_143e1d938 == 0xffffffff)
        atexit(sub_142cc31a0)
        _Init_thread_footer(&data_143e1d938)

return &data_1439aad30
