// 函数: sub_140e13ae0
// 地址: 0x140e13ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e29108 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e29108)
    
    if (data_143e29108 == 0xffffffff)
        sub_140ddd8d0(&data_143e280b0)
        atexit(&data_142ccade0)
        _Init_thread_footer(&data_143e29108)

return &data_143e280b0
