// 函数: sub_1428218ac
// 地址: 0x1428218ac
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89558 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89558)
    
    if (data_143f89558 == 0xffffffff)
        sub_142826388(&data_143f89538, 9)
        atexit(sub_142d143a4)
        _Init_thread_footer(&data_143f89558)

return &data_143f89538
