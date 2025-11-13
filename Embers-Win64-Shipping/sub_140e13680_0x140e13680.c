// 函数: sub_140e13680
// 地址: 0x140e13680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e266a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e266a0)
    
    if (data_143e266a0 == 0xffffffff)
        sub_140ddb2e0(&data_143e26360)
        atexit(sub_142ccaba0)
        _Init_thread_footer(&data_143e266a0)

return &data_143e26360
