// 函数: sub_140f03200
// 地址: 0x140f03200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2a238 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a238)
    
    if (data_143e2a238 == 0xffffffff)
        sub_140ddb700(&data_143e2a218)
        atexit(sub_142ccb770)
        _Init_thread_footer(&data_143e2a238)

return &data_143e2a218
