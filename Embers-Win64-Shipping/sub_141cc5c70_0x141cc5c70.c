// 函数: sub_141cc5c70
// 地址: 0x141cc5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f35930 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f35930)
    
    if (data_143f35930 == 0xffffffff)
        atexit(sub_142cf74c0)
        _Init_thread_footer(&data_143f35930)

return &data_143a196f0
