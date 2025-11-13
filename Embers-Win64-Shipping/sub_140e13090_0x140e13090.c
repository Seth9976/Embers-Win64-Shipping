// 函数: sub_140e13090
// 地址: 0x140e13090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24b10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24b10)
    
    if (data_143e24b10 == 0xffffffff)
        sub_140dd6730(&data_143e24590)
        atexit(sub_142cca880)
        _Init_thread_footer(&data_143e24b10)

return &data_143e24590
