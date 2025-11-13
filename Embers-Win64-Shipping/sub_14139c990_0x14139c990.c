// 函数: sub_14139c990
// 地址: 0x14139c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return &data_1439b70c8

if (arg1 == 1)
    return &data_1439b70c0

if (arg1 == 2)
    return &data_1439b70d0

TEB* gsbase

if (data_143ec6df8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec6df8)
    
    if (data_143ec6df8 == 0xffffffff)
        atexit(sub_142cde860)
        _Init_thread_footer(&data_143ec6df8)

return &data_143ec6df0
