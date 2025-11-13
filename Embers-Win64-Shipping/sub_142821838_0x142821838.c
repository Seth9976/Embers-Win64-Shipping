// 函数: sub_142821838
// 地址: 0x142821838
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89530 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89530)
    
    if (data_143f89530 == 0xffffffff)
        sub_142826388(&data_143f89510, 0x20)
        atexit(sub_142d1434c)
        _Init_thread_footer(&data_143f89530)

return &data_143f89510
