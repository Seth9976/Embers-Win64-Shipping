// 函数: sub_1419a2b60
// 地址: 0x1419a2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f1afc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1afc0)
    
    if (data_143f1afc0 == 0xffffffff)
        atexit(sub_142cf1a00)
        _Init_thread_footer(&data_143f1afc0)

return &data_143f1afb0
