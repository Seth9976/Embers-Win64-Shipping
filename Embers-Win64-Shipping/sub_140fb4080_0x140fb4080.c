// 函数: sub_140fb4080
// 地址: 0x140fb4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2b828 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b828)
    
    if (data_143e2b828 == 0xffffffff)
        sub_140ddb700(&data_143e2b808)
        atexit(&data_142ccc1a0)
        _Init_thread_footer(&data_143e2b828)

return &data_143e2b808
