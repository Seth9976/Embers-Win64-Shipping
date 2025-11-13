// 函数: sub_140f76760
// 地址: 0x140f76760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2b190 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b190)
    
    if (data_143e2b190 == 0xffffffff)
        sub_140ddb700(&data_143e2b170)
        atexit(sub_142ccbff0)
        _Init_thread_footer(&data_143e2b190)

return &data_143e2b170
