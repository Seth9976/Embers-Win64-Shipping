// 函数: sub_140a464c0
// 地址: 0x140a464c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db5180 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db5180)
    
    if (data_143db5180 == 0xffffffff)
        atexit(sub_142cbd080)
        _Init_thread_footer(&data_143db5180)

return &data_14399ea08
