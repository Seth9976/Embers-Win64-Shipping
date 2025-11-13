// 函数: sub_140a59420
// 地址: 0x140a59420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db7a10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7a10)
    
    if (data_143db7a10 == 0xffffffff)
        data_143db7a00 = 0
        data_143db7a08 = 0
        atexit(sub_142cbd130)
        _Init_thread_footer(&data_143db7a10)

return &data_143db7a00
