// 函数: sub_14210fd90
// 地址: 0x14210fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f48ad8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48ad8)
    
    if (data_143f48ad8 == 0xffffffff)
        data_143f48ac8 = 0
        data_143f48ad0 = 0
        _Init_thread_footer(&data_143f48ad8)

return &data_143f48ac8
