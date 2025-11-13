// 函数: sub_141d686a0
// 地址: 0x141d686a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x248)

if (rcx != 0)
    return sub_141a4a590(*(rcx + 0x460), arg2) __tailcall

TEB* gsbase

if (data_143f38040 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f38040)
    
    if (data_143f38040 == 0xffffffff)
        atexit(&data_142cf8710)
        _Init_thread_footer(&data_143f38040)

return &data_143f38030
