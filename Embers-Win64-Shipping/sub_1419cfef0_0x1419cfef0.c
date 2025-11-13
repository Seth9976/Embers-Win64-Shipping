// 函数: sub_1419cfef0
// 地址: 0x1419cfef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f21a94 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f21a94)
    
    if (data_143f21a94 == 0xffffffff)
        atexit(sub_142cf35b0)
        _Init_thread_footer(&data_143f21a94)

return &data_1439c9740
