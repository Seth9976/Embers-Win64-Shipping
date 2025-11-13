// 函数: sub_141debac0
// 地址: 0x141debac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f39218 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f39218)
    
    if (data_143f39218 == 0xffffffff)
        sub_141dde490(&data_143f391a0, 0x420c0000, 0x43100000)
        atexit(sub_142cf92b0)
        _Init_thread_footer(&data_143f39218)

return &data_143f391a0
