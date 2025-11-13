// 函数: sub_140e132e0
// 地址: 0x140e132e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e25b90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e25b90)
    
    if (data_143e25b90 == 0xffffffff)
        sub_140dd79c0(&data_143e253a0)
        atexit(sub_142cca970)
        _Init_thread_footer(&data_143e25b90)

return &data_143e253a0
