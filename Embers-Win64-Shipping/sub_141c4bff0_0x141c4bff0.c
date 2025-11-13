// 函数: sub_141c4bff0
// 地址: 0x141c4bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f34d6c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f34d6c)
    
    if (data_143f34d6c == 0xffffffff)
        atexit(sub_142cf6a40)
        _Init_thread_footer(&data_143f34d6c)

data_143a13040 = 1
return &data_143a13038
