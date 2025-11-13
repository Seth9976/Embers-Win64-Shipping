// 函数: sub_140e13260
// 地址: 0x140e13260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e27e70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e27e70)
    
    if (data_143e27e70 == 0xffffffff)
        sub_140dd7200(&data_143e27770)
        atexit(sub_142cca960)
        _Init_thread_footer(&data_143e27e70)

return &data_143e27770
