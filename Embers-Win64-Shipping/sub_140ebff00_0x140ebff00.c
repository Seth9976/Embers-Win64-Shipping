// 函数: sub_140ebff00
// 地址: 0x140ebff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2a0f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a0f8)
    
    if (data_143e2a0f8 == 0xffffffff)
        sub_140ddb700(&data_143e2a0d8)
        atexit(&data_142ccb540)
        _Init_thread_footer(&data_143e2a0f8)

return &data_143e2a0d8
