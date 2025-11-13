// 函数: sub_141e23160
// 地址: 0x141e23160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f397a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f397a8)
    
    if (data_143f397a8 == 0xffffffff)
        data_143f39788 = 0
        data_143f39788.d = 0xffffffff
        __builtin_memset(&data_143f39788:4, 0, 0x15)
        data_143f39780 = 0
        atexit(sub_142cf9580)
        _Init_thread_footer(&data_143f397a8)

void* result = *(arg1 + 8)

if (result != 0)
    return result

return &data_143f39760
