// 函数: sub_14139ca30
// 地址: 0x14139ca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *sub_14139c990(arg1)

if (rax_1 != 0)
    return rax_1 + 0x10

TEB* gsbase

if (data_143ec6e08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec6e08)
    
    if (data_143ec6e08 == 0xffffffff)
        atexit(&data_142cde880)
        _Init_thread_footer(&data_143ec6e08)

return &data_143ec6e00
