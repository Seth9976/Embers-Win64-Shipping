// 函数: sub_1419ce870
// 地址: 0x1419ce870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f21344 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f21344)
    
    if (data_143f21344 == 0xffffffff)
        atexit(sub_142cf33b0)
        _Init_thread_footer(&data_143f21344)

return &data_1439c94a0
