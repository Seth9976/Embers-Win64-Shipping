// 函数: sub_140e13700
// 地址: 0x140e13700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e26998 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e26998)
    
    if (data_143e26998 == 0xffffffff)
        sub_140ddb740(&data_143e266b0)
        atexit(sub_142ccac10)
        _Init_thread_footer(&data_143e26998)

return &data_143e266b0
