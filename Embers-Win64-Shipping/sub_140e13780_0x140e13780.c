// 函数: sub_140e13780
// 地址: 0x140e13780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e26ab8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e26ab8)
    
    if (data_143e26ab8 == 0xffffffff)
        sub_140ddbb70(&data_143e269a0)
        atexit(sub_142ccacb0)
        _Init_thread_footer(&data_143e26ab8)

return &data_143e269a0
