// 函数: sub_1421645f0
// 地址: 0x1421645f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f4d2b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4d2b8)
    
    if (data_143f4d2b8 == 0xffffffff)
        atexit(sub_142d068f0)
        _Init_thread_footer(&data_143f4d2b8)

return &data_143f4d2a8
